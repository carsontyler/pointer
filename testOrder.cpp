#include <iostream>
#include "Order.h"
using namespace std;

int const SIZE = 4;

int main()
{
    int n1 = 99, n2 = 11;
    int n3 = 22, n4 = 33;
    int arr[SIZE] = {n1, n2, n3, n4};
    // Sort numbers
    cout << "n1 = " << n1 << " n2 = " << n2 << endl;
    cout << "n3 = " << n3 << " n4 = " << n4 << endl;
    /*sort2num(&n1, &n2);
    sort2num(&n3, &n4);
    cout << "n1 = " << n1 << " n2 = " << n2 << endl;
    cout << "n3 = " << n3 << " n4 = " << n4 << endl;*/

    bsort(arr, SIZE);
    for(int i = 0; i < SIZE; i++)
    {
        cout << i << " element is: " << arr[i] << endl;
    }


    return 0;
}