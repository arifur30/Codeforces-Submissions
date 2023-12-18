#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string>names;
    for(int i =0; i < n; i++)
    {
        string temp;
        cin>>temp;
        names.push_back(temp);
    }

    vector<int>a_i, b_i;
    for(int i =0; i < n; i++)
    {
        int temp;
        cin>>temp;
        a_i.push_back(temp);
    }
     for(int i =0; i < n; i++)
    {
        int temp;
        cin>>temp;
        if(a_i[i] < temp)
            temp = a_[i];
        b_i.push_back(temp);


    }
   int status[n];

    for(int i = 0; i < n; i++)
    {
        int arr[a_i[i]];
        status[i] = 1;
        for(int j = 0; j < a_i[i]; j++)
        {
            cin>>arr[j];
            if(arr[j] < 0)
                status[i] = 0;
        }

    }



    return 0;
}
