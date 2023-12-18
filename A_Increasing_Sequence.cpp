#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n], b[n];
        for (int i = 0, j = 1; i < n; i++, j++)
        {
            cin>>a[i];
            if(a[i] != j)
                b[i] = j;
            else
            {
                ++j;
                b[i] = j;
            }

        }
        
        cout<< b[n-1] <<'\n';
    }
    return 0;
}