#include <iostream>
using namespace std;

const int LEN = 5;
void Increment(int);
void IncrementArray(int *inc);

int main()
{
    //10.26.17 Notes
    // Value of the pointer has to be the same value of the existing value
    int i = 9;
    int* pi = &i;
    int iarr[LEN] = {31, 45, 78, 99, -8};
    int* piarr;
    // Do not use the & operator on arrays
    piarr = iarr; // Get the address ofthe array, or element 0th

    cout << "Value of I is: " << i << endl;
    cout << "The address living at pi is: " << pi << endl;

    for(int i = 0; i < LEN; i++)
    {
        Increment(piarr);
        cout << iarr[i] << endl;
    }
    cout << "Value of I is: " << i << endl;
    cout << "The address living at pi is: " << pi << endl;
    Increment(pi);
    cout << "Value of I is: " << i << endl;
    cout << "The address living at pi is: " << pi << endl;

    // IncrementArray(piarr); doesn't work. Array is already a pointer
    IncrementArray(iarr);
    for(int i = 0; i < LEN; i++)
    {
        cout << iarr[i] << endl;
    }


    return 0;
}
void IncrementArray(int *inc)
{
    for (int i =0; i < LEN; i++)
    {
        *inc++ += 1;            // Points at the element of the array
    }
}
void Increment(int *inc)
{
    *inc++;
}