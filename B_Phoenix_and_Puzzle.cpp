#include<bits/stdc++.h>
using namespace std;
bool is_square(long long n)
{
    int y = sqrt(n);
    return (y*y == n);
}
 
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        
        if(n%2 == 0 && is_square(n/2) || n%4 == 0 && is_square(n/4))
            cout<<"Yes\n";
        else cout<<"No\n";

    }

    return 0;
}