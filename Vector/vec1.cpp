#include <bits/stdc++.h>
using namespace std;
#define lld long long int
int main(){
    int i;
    vector <int> v;
    vector<int> :: iterator it;
    v.push_back(5);
    v.push_back(90);
    v.push_back(8);
    v.push_back(7);
    v.push_back(152);
    v.push_back(65);
    v.push_back(197);
    it=v.begin();
    sort(v.begin(),v.end());
    for(it=v.begin();it!=v.end();it++){cout<<*it<<"\t";} cout<<endl;
    it=lower_bound(v.begin(),v.end(),207);
    cout<<"value="<<*it<<" position="<<distance(v.begin(),it)<<endl;


    vector<lld> v1;
    for(int i=0;i<2e7;i++){
        v1.push_back(i+2);
    }cout<<endl;
    cout<<v1[2e7-1]<<endl;
    auto s=lower_bound(v1.begin(),v1.end(),2);
    cout<<"value="<<*s<<" position="<<distance(v1.begin(),s)<<endl;
    return 0;
}
