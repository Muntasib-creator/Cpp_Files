#include <bits/stdc++.h>
using namespace std;
long long int a[3][200005];
int main()
{
int q,l;
scanf("%d",&q);
for(l=1;l<=q;l++){
    int f=0 ;
    long long int v1,v2,i,j,n,pi=1;
    scanf("%lld",&n);
    scanf("%lld",&v1);
    scanf("%lld",&v2);
    for(j=n;v1!=0;j--){
        a[1][j]=v1%10;
        v1=v1/10;
    }
    for(j=n;v2!=0;j--){
        a[2][j]=v2%10;
        v2=v2/10;
    }
    for(j=01;j<=n;j++){cout<<a[1][j]<<" ";}cout<<endl;
    for(j=01;j<=n;j++){cout<<a[2][j]<<" ";}cout<<endl;
    for(j=1,i=1; j<=n; j++){
        if( pi!=i && (a[i][j]>=3&&a[i][j]<=6) ){
            pi=i;
            continue;
        }
        if(  (f==0) && (pi!=i) && (a[i][j]>=1&&a[i][j]<=2) ){
           // printf("no j= %d ",j);
            printf("NO\n");
            f=1;
            break;
        }
        if(a[i][j]>=3&&a[i][j]<=6){
            pi=i;
            if(i==1){i=2;}
            else if(i==2){i=1;}
           // printf("rowchange j= %d ",j);
            j--;
        }
    }
    if(j>=n&&i==2&&f==0){printf("YES\n");}
    else if(f==0){printf("NO\n");}
}
    return 0;
}
