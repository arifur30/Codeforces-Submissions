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

        ll t;
        cin>>t;
        while (t--)
        {
            
            ll n, cnt = 0, k;
            cin>>n;
            k = ceil(n/2.0);
            vll a(n);
            arrin(a, n);
            

            sort(a.begin(), a.end());
            ll item  = a[k-1];
            for(ll i = k-1; i < n; i++)
            {
                if(a[i] != item)
                    break;
                if(a[i] == item)
                    cnt++;
            }
            cout<<cnt<<nl;
        }
        
        return 0;
    }




    // .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
