#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, k;
        cin>>n>>k;
        if(k==n-1)
        {
            for(int i=1;i<=n;i++)
                cout<<i<<" ";
                cout<<endl;
        }
        else if(k == 0)
        {
            for(int i=n;i>=1;i--)
                cout<<i<<" ";
                cout<<endl;
        }
        else
        {
            for(int i= n, j = 0; j < (n-(k+1)); i--,j++)
                cout<<i<<" ";
            for(int i = 1; i <= k+1; i++)
                cout<<i<<" ";
                cout<<endl;
        }
    }
    
    return 0;
}
