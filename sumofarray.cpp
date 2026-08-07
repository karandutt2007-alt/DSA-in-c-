# include<bits/stdc++.h>
using namespace std;
int main (){
   int i;
    int n;
    
    cin>>n;
 int arr[n];
    int sum =0;
    
    for(i =0 ; i <n ;i++ )
    {
        cin>>arr[i];
    }
    
    for (int i= 0; i<n; i++){
        sum+=arr[i];
    }
    
    cout<<sum;" ";
return 0;
    
}
