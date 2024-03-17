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
#define pb push_back
#define vll vector<ll>


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;
    ll arr[n], b[n], first = -1, second = -1, cnt = 0;
    arrin2(arr, b, n);
    sort(b, b+n);
    bool revflag = true;
    fr(i,n)
    {
        if(arr[i] != b[i])
        {
            cnt++;
            if(first == -1) first = i;
            else second = i;
        
        }
    }
    if(cnt == 0)    cout<<"yes\n1 1\n";
    else if(cnt == 2 && second == first+1)    
        cout<<"yes\n"<<first+1<<" "<<second+1<<nl;
    else{
        //cout<<cnt<<nl;
        for(ll i = first, j = second; i < j; i++, j--)
        {
            if(arr[i] != b[j] || arr[j] != b[i])
            {
                revflag = false;
                cout<<"no\n";
                break;
            }
        }
        if(revflag)
            cout<<"yes\n"<<first+1<<" "<<second+1<<nl;
    }
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
