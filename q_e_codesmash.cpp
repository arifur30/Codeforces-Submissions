
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b, c,d;
    cin>> a >> c >> b>> d;

    if(c == 2 && b != 8 && d!= 8|| c ==  8&& b != 2 && d!= 2)
    {
        cout<<"YES\n";
    }
    else if(c == 4 && b != 6 && d!= 6|| c ==  6&& b != 4 && d!= 4)
        cout<<"YES\n";
    else if(c == 3 && b != 7 && d!= 7|| c ==  7&& b != 3 && d!= 3)
        cout<<"YES\n";
    else if(c == 1 && b != 9 && d!= 9|| c ==  9&& b != 1 && d!= 1)
        cout<<"YES\n";
    else
        cout<<"No\n";
}
