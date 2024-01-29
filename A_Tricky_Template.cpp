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
        int n;
        cin>>n;
        bool flag = true;
        string s1, s2, s3;
        cin>>s1>>s2>>s3;
        for(int i = 0; i < n;i++)
        {
            if(s1[i] == s3[i] || s2[i] == s3[i])
            {
                flag = false;
                break;
            }
            else
                continue;
            
        }
        if(flag)
            YES;
        else
            NO;
    }
    
    return 0;
}
    