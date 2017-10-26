//
// Created by 17cty on 10/26/2017.
//

#include "Order.h"

/*!
 * Order/Sort the two numbers
 * @param num1 First number
 * @param num2 Second number
 */
void sort2num(int *num1, int *num2)
{
    int temp;
    if(*num1 > *num2)
    {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }

}

/*!
 * Bubble sort a list of integers
 * @param ptr : Address of the array
 * @param n : How many elements
 */
void bsort(int *ptr, int n)
{
    for(int j = 0; j < n-1; j++)
    {
        for(int k = j+1; k < n; k++)
        {
            // Sort the two elements
            sort2num(ptr + j, ptr + k);         // Order two numbers
        }
    }

}
