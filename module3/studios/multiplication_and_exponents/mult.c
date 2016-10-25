#include "mult.h"
//Implementation for the multiplication function

int mult(int input, int output)
{
    if (input >= 0 && output == 0)
    {
        return 0;
    }
    else if(input >= 0 && output > 0)
    {
        return mult(input, (output - 1)) + input;
    }
    else if (input < 0 && output == 0)
    {
        return 0;
    }
    else if (input < 0 && output < 0)
    {
        return mult(input, (output + 1)) - input;
    }
    else if (input < 0 && output > 0)
    {
        return mult(input, (output - 1)) + input;
    }
    else
        return 0;
}