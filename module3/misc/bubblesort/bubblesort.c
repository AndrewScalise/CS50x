#include <cs50.h>
#include <stdio.h>

void bubbleSort(int a[]);

int main(void)
{
    int sortThis[] = {3, 1, 4, 5, 9, 2, 6, 8};
    bubbleSort(sortThis);
    for(int i = 0; i < 8; i++)
    {
        printf("%i ", sortThis[i]);
    }
    printf("\n");
}

void bubbleSort(int a[])
{
    //initialize a variable for swaps
    int swaps = 0;
    do
    {
        swaps = 0;
        //for each item in the list
        for(int i = 0; i < 7; i++)
        {
            //if value at i is greater than value at i+1
            if(a[i] > a[i+1])
            {
                //swap those values
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                //increment swap variable
                swaps++;
                for(int j = 0; j < 8; j++)
                {
                    printf("%i ", a[j]);
                }
                printf("\n");
            }
        }
    } while(swaps != 0);
        
}