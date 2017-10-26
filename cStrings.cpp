//
// Created by 17cty on 10/26/2017.
//
#include <iostream>
#include "cStrings.h"
using namespace std;

/*!
 * Display an array of characters one char at a time
 * @param ptr : Pointer to string, or array of chars
 */
void displaystr(const char *ptr)
{
    while(*ptr)     // Until NULL character, while it's true
    {
        cout << *ptr++;
    }
    cout << endl;
}
