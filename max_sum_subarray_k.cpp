#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, -1, -2, -3, 4, 8, 20, -19};
    int n = 6;

    int k = 3;

    // Sum of first window (first k elements)
    int windowSum = 0;
    for(int i = 0; i < k; i++)
    {
        windowSum = windowSum + arr[i];
    }

    int maxSum = windowSum;

    // Slide the window across the array
    for(int i = k; i < n; i++)
    {
        windowSum = windowSum + arr[i] - arr[i - k];   // add new, remove old

        if(windowSum > maxSum)
        {
            maxSum = windowSum;
        }
    }

    // Print result
    cout << "Maximum sum of subarray with " << k << " elements: " << maxSum << endl;

    return 0;
}