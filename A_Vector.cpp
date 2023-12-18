#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    vector<int> v ;
    cin>>t;
    while (t--)
    {
        int res;
        cin>> res;
        if(res == 0)
        {
            int temp;   
            cin>> temp;
            v.push_back(temp);
        }
        else if(res == 1)
        {
            int temp;
            cin>> temp;
            
            cout<<v[temp] <<endl;
            

        }
        else if(res == 2)
        {
            v.pop_back();
        }
    }
    
    return 0;
}
