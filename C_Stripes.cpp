#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" ";cout<<nl

//bool isrow()

int main()
{
    
    ll t;
    cin>>t;
    while (t--)
    {
        
        string s;
         bool flag_row= false;
        for(ll i = 0; i < 8; i++)
        {
            cin>>s;
            if(s.compare("RRRRRRRR") == 0)
            {
                flag_row = true;
            }
            
            
        }
        if(!flag_row)
        {
            cout<<"B"<<nl;
            continue;
        }
        else
        {
            cout<<"R\n";
            continue;
        }
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
