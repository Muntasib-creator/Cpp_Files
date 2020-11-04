#include<bits/stdc++.h>
#define lld long long int
using namespace std;
int main(){
    lld diff,mn,a,n,m,i,l,r,num1=0,num2=0;
    scanf("%lld%lld",&n,&m);
    for(  i=0;i<n;i++){
        scanf("%lld",&a);
        if(a==-1)num1++;
    }
    num2=n-num1;
//    diff=(r-l+1)/2;
    mn=min(num1,num2);
    for(i=0;i<m;i++){
        scanf("%lld%lld",&l,&r);
        if((r-l)%2==0){
            printf("0\n");
        }
        else if (mn>=(r-l+1)/2){
            printf("1\n");
        }
        else {printf("0\n");}
    }
    return 0;
}
