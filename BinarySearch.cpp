#include<bits/stdc++.h>
using namespace std;
int main()
{   for(;;){
    long long int mid,x,i,a[200000],mn=0,mx=20000-1;
    for(i=0;i<20000;i++){
        a[i]=i;
    }
    //cout<<"a[99]="<<a[99]<<endl;
    cin>>x;
//    for(x=0;x<20000;x++){
    for(;mn<=mx;){
        mid=(mx+mn-1)/2;
//        cout<<"iMin="<<mn<<"  iMax="<<mx<<"  iMid="<<mid<<endl;
//        cout<<"a[mn]="<<a[mn]<<"  a[mid]="<<a[mid]<<"  a[mx]="<<a[mx]<<endl;
        if(a[mn]<x&&a[mid]>x){
//            if(a[mid]==x){cout<<mid;return 0;}
//            else if(a[mn]==x){cout<<mn;return 0;}
            mx=mid-1;      //cout<<"Min="<<mn<<"  Max="<<mx<<"  Mid="<<mid<<endl;
        }
        else if(a[mid]==x){cout<<"....."<<mid<<endl;break;}
//        else if(a[mn]==x){cout<<"....."<<mn<<endl;break;}
        else{
            mn=mid+1;     //cout<<"min="<<mn<<"  max="<<mx<<"  mid="<<mid<<endl;
        }

    }
//    cout<<a[i-1];
}return 0;
}
