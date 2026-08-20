#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100] = {2, 3, 8, 15, 18};
    int n = 5;

    int element = 13;
    int index = 3;

    // Shift elements to the right
    for(int i = n; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[index] = element;
    n++;

    // Print array
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}