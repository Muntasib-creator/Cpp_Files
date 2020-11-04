    #include<bits/stdc++.h>
    #define lld long long int
    using namespace std;
    int main(){
        lld n,a,mn,mx,i,j,pa,f=0;
        cin>>n;
        vector<lld>v(n);

        for(i=0;i<n;i++){cin>>v[i];}
        for(i=2;i<n;i++){
            for(j=0;j<i;j++){
                if(v[i]>min(v[j],v[j+1]) && v[i]<max(v[j],v[j+1]) && (v[i-1]>max(v[j],v[j+1]) || v[i-1]<min(v[j],v[j+1])) )
                {
                    cout<<"yes"<<endl;
                    return 0;
                }
                else if( v[i-1]>min(v[j],v[j+1]) && v[i-1]<max(v[j],v[j+1]) && (v[i]>max(v[j],v[j+1]) || v[i]<min(v[j],v[j+1])) ){
                    cout<<"yes"<<endl;
                    return 0;
                }
            }
        }

        cout<<"no"<<endl;
        return 0;
    }










    //#include<bits/stdc++.h>
    //#define lld long long int
    //using namespace std;
    //int main(){
    //    lld n,a,mn,mx,i,j,pa,f=0;
    //    cin>>n;
    //
    //    for(i=0;i<n;i++){
    //        cin>>a;
    //        if(i==0){       cout<<"D1"<<endl;
    //            pa=a;
    //        }
    //        else if(i==1){        cout<<"D2"<<endl;
    //            mn=min(a,pa);
    //            mx=max(a,pa);
    //            if (a>pa)f=1;
    //            else f=0;
    //            pa=a;
    //        }
    //        else if ((a<mx&&f==1&&pa!=mx)||(a>mn&&f==0&&pa!=mn)){       cout<<"D3"<<endl;
    //            cout<<"yes"<<endl;
    //            return 0;
    //        }
    //        else if(a<pa){      cout<<"D4"<<endl;
    //            mn=min(a,mn);
    //
    //        }
    //        else if(a>pa){      cout<<"D5"<<endl;
    //            mx=max(a,mx);
    //            pa=a;
    //            f=1;
    //        }
    //
    //    }
    //    cout<<"no"<<endl;
    //    return 0;
    //}
    //
