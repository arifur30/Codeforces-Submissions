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
#define MOD 1000000007
#define all(x) x.begin(), x.end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        ll n,m, mx = INT_MIN;
        cin >> n >> m;
        ll a[n][m];
        arr2Din(a, n, m);
        ll sum1[n][m] = {0};
        ll sum2[n][m] = {0};



        for(ll i = 0; i < m; i++)
        {
            for(ll j = 0; j <n; j++ )
            {
                if(i == 0)
                {
                    sum1[j][i] = a[j][i];
                }
                else
                {
                    if(j+1 < n && i -1 >= 0)
                        sum1[j][i] = sum1[j+1][i-1] + a[j][i];
                    else
                        sum1[j][i] = a[j][i];
                }
            }
        }

        vector<vector<bool>> flag1(n, vector<bool>(m, false));


        fr(i,n)
        {
            fr(j,m)
            {
                
                if(flag1[i][j]) continue;

                flag1[i][j] = true;
                ll k = j, p = i;
            //    cout << "i: " << i << " j: " << j << " ele: " << sum1[i][j] << nl;
                while(p+1 < n && k-1 >= 0)
                {
                    sum1[p+1][k-1] = sum1[i][j];
                    flag1[p+1][k-1] = true;
                    p++;
                    k--;
                }
                
            }
        }

        // fr(i,n)
        //     fr(j,m)
        //         cout << sum1[i][j] << " \n"[j == m-1];

        for(ll i = m-1; i >=0 ; i--)
        {
            for(ll j = 0; j < n; j++)
            {
                if(i == m-1)
                {
                    sum2[j][i] = a[j][i];
                }
                else
                {
                    if(j+1 < n && i+1 < m)
                        sum2[j][i] = sum2[j+1][i+1] + a[j][i];
                    else
                        sum2[j][i] = a[j][i];
                }
            }
        }

        vector<vector<bool>> flag2(n, vector<bool>(m, false));

        fr(i,n)
            fr(j,m)
            {
                if(flag2[i][j]) continue;

                flag2[i][j] = true;
                ll k = j, p = i;
                while(p+1 < n && k+1 < m)
                {
                    sum2[p+1][k+1] = sum2[i][j];
                    flag2[p+1][k+1] = true;
                    p++;
                    k++;
                }
            }



        for(ll i = 0; i < n; i++)
        {
            for(ll j = 0; j < m; j++)
            {
                sum1[i][j] = sum1[i][j] + sum2[i][j] - a[i][j];
                mx = max(mx, sum1[i][j]);
            }
        }

        cout << mx << nl;
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
