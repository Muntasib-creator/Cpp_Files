#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
int main(){
    T{
        lld n,k,i,j,f=0;
        cin>>n>>k;
        if(n<=k){
            cout<<1<<endl;continue;
        }
        if(n%k==0){
            cout<<n/k<<endl;continue;
        }

//        else{
//            i=n/k+1;
//        }
        if(n%2==0){
            f=1;
        }
        else{
            for(j=3; j<=ceil(sqrt(n))+1  ;j=j+2){
                if(n%j==0){     //cout<<"dddddd"<<endl;

                    f=1;
                    break;
                }
            }
        }
        if(f==0){   //cout<<"dhurkse"<<endl;
            cout<<n<<endl;continue;
        }
        for(i=2;; i++){
            if((n/i)<=k&&n%i==0){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}


//#include<bits/stdc++.h>
//#define lld long long int
//#define T int t;cin>>t;for(;t!=0;t--)
//using namespace std;
//int main(){
//    T{
//        lld n,k,i,j,f=0;
//        cin>>n>>k;
//        if(n<=k){
//            cout<<1<<endl;continue;
//        }
//        if(n%k==0){
//            cout<<n/k<<endl;continue;
//        }
//        else{
//            i=n/k+1;
//        }
//        for(j=i; (j<=ceil(sqrt(n)) ) && (j<=k) ;j++){
//            if(n%j==0){     //cout<<"dddddd"<<endl;
//                cout<<j<<endl;
//                f=1;
//                break;
//            }
//        }
//        if(f==0){   //cout<<"dhurkse"<<endl;
//            cout<<n<<endl;
//        }
//
//    }
//    return 0;
//}










//#include<bits/stdc++.h>
//#define lld long long int
//#define T int t;cin>>t;for(;t!=0;t--)
//using namespace std;
//int main(){
//    T{
//        lld n,k,i,j;
//        cin>>n>>k;
//        if(n<=k){
//            cout<<1<<endl;continue;
//        }
//        if(k>sqrt(n)){
//            i=sqrt(n);
//        }
//        else{
//            i=k;
//        }
//        for(j=i;j>0;j--){
//            if(n%j==0){
//                cout<<n/j<<endl;
//                break;
//            }
//        }
//
//    }
//    return 0;
//}

