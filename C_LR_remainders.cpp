
#include<iostream>
#include<vector>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int mul=1;
    vector<int>v(a);
    cout<< "case 1";
    for(int i=0;i<a;i++){
        cin>>v[i];
        mul *= v[i];
    }
    string s;
    cin>>s;
    cout<< "case 2";

    for(int i=0;i<a;i++){
        cout<<mul%b<<" ";
        if(s[i]=='L'){
            mul=mul/v[0];
            auto it = v.begin();
            v.erase(it);
    }
    else if(s[i]=='R'){
    mul=mul/v.back();
    auto it = v.end();
    --it;
    v.erase(it);
        }
    }
    cout<<endl;
    }
}