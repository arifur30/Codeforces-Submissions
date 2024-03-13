#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"

void cout_v_int(vector<int> &v)
{
    for(auto it = v.begin(); it != v.end(); it++) 
    {
        cout << *it <<" ";   // for printing the vector
    }
    cout<<'\n';
}

bool is_vowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}


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
        string s;
        cin>>s;
        if(n<=2)
        {
            cout<<s<<nl;
            continue;
        }
        ll arr[n+1] = {0};
        for(ll i = n-2; i>=1;i--)
        {
            if(i == n-2)
            {
                if(!is_vowel(s[i-1]) && is_vowel(s[i]) && !is_vowel(s[i+1]))
                {
                    arr[i-1] = 1;
                    i--;
                }
                else
                {
                    arr[i] = 1;
                    continue;
                }

            }
            else{
                if(!is_vowel(s[i]))
                {
                    arr[i-2] = 1;
                    i -=2;
                }
                else
                {
                    arr[i-1] = 1;
                    i--;
                }
            }
            
             
            
            
            
        }
        for(ll i = 0; i<n;i++)
        {
            if(arr[i]>0 && i != 0)
            {
                cout<<"."<<s[i];
            }
            else
            {
                cout<<s[i];
            }
        }
    cout<<nl;
    }
    return 0;
}
    