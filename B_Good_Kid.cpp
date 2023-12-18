#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i;
    cin>>t;
    while(t--)
    {
        int n, ans = 1 , min = 9, index = 0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {  
            cin>>arr[i]; 
            if(arr[i] <= min)
                {min = arr[i];
                index = i;
                }
        }
        arr[index] = min+1;
        for ( i = 0; i < n; i++)
        {
            ans *= arr[i];
        }
        cout<<ans<<endl;



    }
}