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
    
    ll t;
    cin>>t;
    while (t--)
    {
        ll arr[8], s1, s2, temp1 , temp2 ;
        for(int i = 0; i < 8; i++)
        {
            cin>>arr[i];
            
        }
        for(int i = 0; i < 8; i++)
        {
            if(i>0 && i%2 ==  0 && arr[i] != arr[0] && arr[i+1] != arr[1])
            {
                temp1 = i;
                break;
            }
        }
        s1 = abs(arr[1] - arr[temp1+1]);
        s2 = abs(arr[0] - arr[temp1]);
        
        cout<<s1*s2<<nl;
    }
    
    return 0;
}
    