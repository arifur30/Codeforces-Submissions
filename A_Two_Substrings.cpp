#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl "\n"
#define arrin(arr, n) for(ll i = 0; i < n; i++) cin>>arr[i]
#define arrout(arr, n) for(ll i = 0; i < n; i++) cout<<arr[i]<<" ";cout<<nl
#define arrin2(arr, b, n) for(ll i = 0; i < n; i++) {cin>>arr[i];b[i] = arr[i];}
#define arr2Din(arr, n, m) for(ll i = 0; i < n; i++) for(ll j = 0; j < m; j++) cin>>arr[i][j]
#define fr(i, n) for(ll i = 0; i < n; i++)
#define frr(i,n) for(ll i = n-1; i >= 0; i--)
#define pb push_back
#define vll vector<ll>


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int ab = 0, ba = 0;
    bool f = false;
    for(ll i = 0; i < s.size() - 1; i++)
    {
        if(ab && ba)
        {
            cout << "YES\n";
            return 0;
        }
        if(i < s.size() - 2 && s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'A' )
        {
            //cout<<"1";
            f = true;
            if(!ba)
                ba++, i += 2;
            else
                ab++, i++;
            
        }
        else if(i < s.size() - 2 && s[i] == 'B' && s[i + 1] == 'A' && s[i + 2] == 'B')
        {
            //cout<<"2";
            f = true;
            if(!ab)
                ab++, i += 2;
            else
                ba++, i++;
        }
        else if(s[i] == 'A' && s[i + 1] == 'B')
        {
            ab++;
            i++;
        }
        else if(s[i] == 'B' && s[i + 1] == 'A')
        {
            ba++;
            i++;
        }
    }
    if(f)
    {
        if(!ba  && ab >=2)
            ba++;
        else if(!ab && ba >= 2)
            ab++;
    }

    if(!ab || !ba)
    {
        cout << "NO\n";
        return 0;
    }
    else
        YES;
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
