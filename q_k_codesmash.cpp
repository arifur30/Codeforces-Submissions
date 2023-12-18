
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cnt = 0;

        while(n % 4 != 0)
        {
            ++cnt;
            n -= 5;
        }
        if(n % 4 == 0)
        {
            for(int i = 0; i < n/4 ; i++)
            {
                cout<<4<<" ";
            }
        }
    for(int i = 0; i < cnt; i++)
        cout<<5<<" ";
    cout<<'\n';
    }

}
