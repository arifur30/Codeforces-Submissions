#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"


int main()
{
    
    ll t;
    cin>>t;
    while (t--)
    {
        int n, diff = 0 , freq_s1 = 0, freq_s2 = 0;
        cin>>n;
        char s1[n+1], s2[n+1];
        scanf("%s %s", s1, s2);
        for(int i = 0; i < n;i++)
        {
            if(s1[i] != s2[i]){
                diff++;
                if(s1[i] == '1')
                    freq_s1++;
                else
                    freq_s2++;
            }
            
            
        }
        if(freq_s1 > freq_s2)
            diff -= freq_s2;
        else
            diff -= freq_s1;
        cout<<diff<<nl;

    }
    
    return 0;
}
    