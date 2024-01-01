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
        char s[n+1];
        cin>>s;
        cout<<s<<nl;
        vector<int>v1;

        for(int i = n-1; i >= 1; )
        {
            if((s[i] == 'a' || s[i] == 'e') && i != 1)
            {
                i -= 2;
                v1.push_back(i);
            }
            else{
                if(i- 3 >= 1)
                    {
                        i -= 3;
                        v1.push_back(i);
                    }
                else i -= 3;
            }
        }
        sort(v1.begin(), v1.end());
        cout_v_int(v1);
        for(int i = 0, j  = 0; i < n; i++)
        {
            if(i == v1[j])
            {
                cout<<'.';
                j++;
                cout<<s[i];
            }
            else
                cout<<s[i];
        }
        cout<<nl;
        
    }
    
    return 0;
}
    