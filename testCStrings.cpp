#include <iostream>
#include "cStrings.h"

using namespace std;

int main()
{
    char str1[] = "Defined a string as an array";       // Defined as constant
    char* str2 = "Defined as a pointer";                // just a pointer

    cout << str1 << endl;
    cout << str2 << endl;

    //str1++; Can't resolve. str1 is a constant
    str2++;
    cout << str2 << endl;
    str2++;
    cout << str2 << endl;
    str2--;
    cout << str2 << endl;

    displaystr(str1);

    return 0;
}