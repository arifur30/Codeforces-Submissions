#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ull t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;

        ull arr[n], sum = 0;
        for(ull i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum += arr[i];

        }
        ull x = sqrt(sum);
        if(x*x == sum)
            YES;
        else NO;
    }
    
    return 0;
}
    