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
        ll n, k, sum = 1;
        cin>>n>>k;
        ll arr[n], flag = 0;
        for(ll i = 0; i < n;i++){
            cin>>arr[i];
            sum *= arr[i];
            
        }
        if(2023 % sum == 0 && sum <= 2023)
        {
            flag = 1;
        }

        if(flag == 1)  { 
            YES;
            if(sum < 2023)
            {
                cout<<2023/sum<<" ";
                k--;
                for(int i = 0; i < k;i++)
                    cout<<"1 ";
                cout<<nl;
            }
            else if(sum == 2023)
            {
                for(int i = 0; i < k;i++)
                    cout<<"1 ";
                cout<<nl;
            }
}
        else NO;
        
    }
    
    return 0;
}
    