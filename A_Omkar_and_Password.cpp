
#include<bits/stdc++.h>
using namespace std;

void cin_v_int(vector<int>&v)
{
    int temp;
    cin>>temp;
    v.push_back(temp);
}




int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v1;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            v1.push_back(temp);
            
        }

        sort(v1.begin(), v1.end());
        
        if(v1[0] != v1[n-1])
            cout<<1<<'\n';
        else cout<<n<<endl;
    }

    return 0;
}

