#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x=0,i,t,j,m,n,o,p;
    char a[100][100];
    cin>>t;
    for(i=0;i<t;i++){
        for(j=0;j<t;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<t;i++){
        for(j=0;j<t;j++){
            x=0;
            if(i!=t-1){if(a[i+1][j]=='o'){x++;}}
            if(i!=0){if(a[i-1][j]=='o'){x++;}}
            if(j!=t-1){if(a[i][j+1]=='o'){x++;}}
            if(j!=0){if(a[i][j-1]=='o'){x++;}}
                //cout<<"......."<<x<<endl;
            if(x%2==1){cout<<"NO";return 0;}
        }
    }
    cout<<"YES";
    return 0;
}







//
//            m=(i==t-1)?0:1;
//            n=(i==0)?0:1;
//            o=(j==t-1)?0:1;
//            p=(j==0)?0:1;









//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    long long int x=0,i,t,j,m;
//    char a[100][100];
//    cin>>t;
//    for(i=0;i<t;i++){
//        for(j=0;j<t;j++){
//            cin>>a[i][j];
//        }
//    }
//    for(i=0;i<t;i++){
//        for(j=0;j<t;j++){
//            x=0;
//            for(m=0;m<t;m++){
//                if(m==i)continue;
//                if(a[m][j]=='o')x++;
//            }
//            for(m=0;m<t;m++){
//                if(m==j)continue;
//                if(a[i][m]=='o')x++;
//            }
//            cout<<"......."<<x<<endl;
//            if(x%2==1){
//                cout<<"NO";
//                return 0;
//            }
//        }
//    }
//    cout<<"YES";
//    return 0;
//}
