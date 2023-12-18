#include<bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>> n;
        vector<int,int> v;
        vector<int> dupl;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>> temp;
            for (int j = 0; i < temp; j++)
            {
                int tp;
                cin>> tp;
                dupl.push_back(tp);
                v[i][j].push_back(tp);
            }
            sort(v[i].begin(), v[i].end);
            v[i].erase(unique(v[i].begin(), v[i].end()), v[i].end());
            
            
        }
        sort(dupl.begin(), dupl.end());
        dupl.erase(unique(dupl.begin(), dupl.end()), dupl.end());
        int flag = 1;
        for(int i=0; i<n; i++)
        {
            if(dupl.size() < v[i].size())
            {
                flag = 0;
                break;
            }

        }
        if(flag == 0)
            cout<< 0 <<'\n';
        else
            cout<< dupl.size() -1 << endl;  
    }

}