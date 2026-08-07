#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, key,flag=0;
    cin >> n >> key;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "we have found the element successfully" << endl;
            flag=1;
            break;
           

        }
    }
    if (flag==0)
    cout << "element is not present in the array "<<endl;

}