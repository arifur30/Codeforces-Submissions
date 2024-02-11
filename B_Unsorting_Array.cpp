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
    
    ll n;
    cin>>n;
    
        ll arr[n], arr_sort1[n], arrsort2[n];
        for(ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr_sort1[i] = arr[i];
            arrsort2[i] = arr[i];
        }
    if(n <=2)
    {
        cout<<-1<<nl;
        return 0;
    }
else
    {
        sort(arr_sort1, arr_sort1+n);
        sort(arrsort2, arrsort2+n, greater<ll>());
        ll first = 0;
        ll x = arr[first], i = 1;
        while(x == arr[i] && i < n)
        {
            i++;
        }
        if(i == n)
        {
            cout<<-1<<nl;
            return 0;
        }
        else{
            if(i == n-1 && arr[0] == arr[1]){
                swap(arr[1], arr[i]);
                first = 1;
            }
            else
                swap(arr[i], arr[0]);
            bool flag1 = true, flag2 = true; 
            for(ll j = 0; j < n; j++)
            {
                if(arr[j] != arr_sort1[j])
                {
                    flag1 = false;
                }
                if(arr[j] != arrsort2[j])
                {
                    flag2 = false;
                }
                
            }
           if(flag1 || flag2)
           {
                cout<<-1<<nl;
                  
                return 0; 
           }
           else
                cout<<first+1<< " "<<i+1<<nl;
        }
        
    }
    

    return 0;
}
    