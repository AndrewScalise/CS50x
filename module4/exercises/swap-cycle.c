#include <stdio.h>

void swap(int* a, int* b, int* c);

int main(void)
{
    int x = 1;
    int y = 2;
    int z = 3;
    
    printf("Before swap: \n");
    printf("x is %i\n", x);
    printf("y is %i\n", y);
    printf("z is %i\n", z);
    printf("Swapping....\n");
    swap(&x,&y,&z);
    printf("After swap: \n");
    printf("x is %i\n", x);
    printf("y is %i\n", y);
    printf("z is %i\n", z);
}

void swap(int* a, int* b, int* c)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    temp = *c;
    *c = *b;
    *b = temp;
}