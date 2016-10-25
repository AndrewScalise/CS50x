/**
 * copy.c
 *
 * Computer Science 50
 * Problem Set 4
 *
 * Copies a BMP piece by piece, just because.
 */
       
#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char* argv[])
{
    // ensure proper usage
    if (argc != 4)
    {
        printf("Usage: ./resize n infile outfile\n");
        return 1;
    }

    // remember filenames
    int resize = atoi(argv[1]);
    char* infile = argv[2];
    char* outfile = argv[3];

    // open input file 
    FILE* inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        printf("Could not open %s.\n", infile);
        return 2;
    }

    // open output file
    FILE* outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not create %s.\n", outfile);
        return 3;
    }

    // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);
    //create new file header object equal to bf
    BITMAPFILEHEADER bf_resize;
    bf_resize = bf;

    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);
    //create new info header object equal to bi
    BITMAPINFOHEADER bi_resize;
    bi_resize = bi;
    

    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 || 
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outptr);
        fclose(inptr);
        fprintf(stderr, "Unsupported file format.\n");
        return 4;
    }
    
     //reize the width and height of the image
    bi_resize.biWidth = bi.biWidth * resize;
    bi_resize.biHeight = bi.biHeight * resize;
    
      // determine padding for scanlines
    int padding =  (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;
    int paddingResize = (4 - (bi_resize.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;
    
    //Make new image size
    bi_resize.biSizeImage = ((((bi_resize.biWidth * bi_resize.biBitCount) + 31) & ~31) / 8) * abs(bi_resize.biHeight);
    bf_resize.bfSize = 54 + bi_resize.biWidth * abs(bi_resize.biHeight) * 3 + abs(bi_resize.biHeight) *  paddingResize;

    // write outfile's BITMAPFILEHEADER
    fwrite(&bf_resize, sizeof(BITMAPFILEHEADER), 1, outptr);

    // write outfile's BITMAPINFOHEADER
    fwrite(&bi_resize, sizeof(BITMAPINFOHEADER), 1, outptr);


    // iterate over infile's scanlines
    for (int i = 0, biHeight = abs(bi.biHeight); i < biHeight; i++)
    {
        //iterate by the resize number of times
        for (int k = 0; k < resize; k++)
        {
             // iterate over pixels in scanline
            for (int j = 0; j < bi.biWidth; j++)
            {
                // temporary storage
                RGBTRIPLE triple;

                // read RGB triple from infile
                fread(&triple, sizeof(RGBTRIPLE), 1, inptr);

                // write RGB triple to outfile by resize number of times
                for (int l = 0; l < resize; l++)
                {
                    fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);
                }
            }
            
             // skip over padding in infile
			 fseek(inptr, padding, SEEK_CUR);

			 // then add it to outfile
			 for (int h = 0; h <paddingResize; h++)
			 {
					fputc(0x00, outptr);
			 }

			fseek(inptr, -(bi.biWidth * 3 + padding ), SEEK_CUR);
				
        }
        
        fseek(inptr, bi.biWidth*3+padding, SEEK_CUR);
    }

    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    // that's all folks
    return 0;
}
