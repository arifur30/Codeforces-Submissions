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
    
    string s1,s3;
    ll n;
    cin>>n>>s1;

    string s2 = s1.substr(0,n);
    s3 = s1.substr(n,n);
    sort(s2.begin(), s2.end());
    sort(s3.begin(), s3.end());
    //cout<<s2<<" "<<s3;
    bool flag = true;
    int prev;
    (s2[0] < s3[0]) ? prev = -1 : prev = 1;
    for(ll i = 0; i < n; i++)
    {
        if(s2[i] == s3[i])
        {
            flag = false;
            NO;
        //    cout<<" case1 "<<nl;
            break;
        }
        if(s2[i] > s3[i] && prev == -1)
        {
            flag = false;
            NO;
            //cout<<" case2 "<<nl;
            break;
        }
        if(s2[i] < s3[i] && prev == 1)
        {
            flag = false;
            NO;
            //cout<<" case3 "<<nl;
            break;
        }
    }
    if(flag)
        YES;
    return 0;
}
    