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
    
    int a, b;
    cin>>a>>b;
    int ans = 6 - max(a,b) + 1;
    if(ans == 6)
        cout<<"1/1\n";
    else if(ans == 3)
        cout<<"1/2\n";
    else if(ans == 2)
        cout<<"1/3\n";
    else if(ans == 1)
        cout<<"1/6\n";
    else if(ans == 4)
        cout<<"2/3\n";
    else if(ans == 0)
        cout<<"0/1\n";
    else
        cout<<ans<<"/6\n";
    return 0;
}
    