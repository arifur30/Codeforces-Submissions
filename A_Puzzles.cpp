#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    int n, m, min = 1001, cnt = 0;
    cin>>n>>m;
    int arr[m];
    for(int i=0; i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    //cout<<cnt;
    min = arr[n-1] - arr[0];
    //cout<<min<<endl;
    for(int i = 1; i <= m-n; i++)
    {
        if((arr[i+n-1] - arr[i]) < min)
            min = arr[i+n-1] - arr[i];
       // cout<<min<< " "<<arr[i+n-1]<< " " <<arr[i]<<endl;
        
    }

    cout<<min<<endl;
    return 0;
}
