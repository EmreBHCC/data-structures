// search in unsorted array
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// if the find searching item, return this item
int findElement(int arr[], int n, int key)
{
    int i;
    for (i=0; i<n ; i++)
    {
        if  (arr[i] == key)
            {
            return i; 
            }
    }
    // if the key is not found
    return -1;

}

// driver's code
int main()
{
    int arr[] = { 12 , 34 , 10 , 6 ,40 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // want finding to this item
    int key = 6;

    int position = findElement(arr , n , key);

    if (position == -1) 
    {
        cout << "Item not found" ;
    }
    else 
    {
        cout << "Item is found at " << position + 1;
    }
    return 0;
}