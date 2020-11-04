// #include <bits/stdc++.h>
// using namespace std;
// #define T int t;cin>>t;for(;t!=0;t--)
// #define lld long long int
// int main(){
//     lld n,d,i,j,c,cnt;
//     T{
//         cin>>n;
//         d=n;c=0,cnt=0;
//         for(;d!=0;d=d/10){
//             c++;
//             if(d%10!=0)cnt++;
//         }
//         cout<<cnt<<endl;
//         for(d=n,i=0;i<c;i++){
//             if(d%10!=0){
//                 cout<<d%10;
//                 for(j=0;j<i;j++)cout<<"0";
//                 cout<<" ";
//             }

//             d=d/10;
//         }
//         cout<<endl;
//     }
//     return 0;
// }







#include<stdio.h>
#include <iostream>
void sol(int a[], int num,int p,int q){
    int i = 0;
    for(i=num; i>=p; i--)
    {
        a[i]= a[i-1];
    }
    a[p-1]=q;
}
int main()
{
    int a[100],i,num,p,q;

    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&q, &p);

    for(i=num; i>=p; i--)
    {
        a[i]= a[i-1];
    }
    a[p-1]=q;
    // sol(a,num,p,q);
    for(i=0;i<=num;i++)
    {
        printf("%d ",a[i]);
    }
}










// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int aa;
//     cin>>aa;
//     cout<<aa;
// }













