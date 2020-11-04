#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a[100],k=0,i,j,x=0,row,col,ans=0;
    char c;
    cin>>row>>col;
    for(i=0;i<row;i++){
        int f=1;
        for(j=0;j<col;j++){
            cin>>c;
            if(c=='S'){
            f=0;
            a[k++]=j;
            }
        }
        if(f==1){
            ans=ans+col;
            x++;
        }
    }
    sort(a,a+k);
    //for(i=0;i<k;i++){ cout<<a[i]<<" ";}cout<<endl;
    for(i=0;i<k-1;i++){
        if(a[i+1]-a[i]>1){
            ans=ans+(row-x)*(a[i+1]-a[i]-1);
        }
    }
    ans+=(a[0]+col-a[k-1]-1)*(row-x);
    cout<<ans;
    return 0;
}
