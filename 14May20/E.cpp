#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
int main(){
    T{
        lld iin,n,nof1=0,k,i,sum=0,sum0=0,sum1=0,ans=9999999,ps=9999999,j,in,en,f1=0,f2=0,ff1=0,ff2=0;
        cin>>n>>k;
        in=0;en=n-1;
        string s;
        cin>>s;             //cout<<s<<endl;

        for(i=0;i<n;i++){
            if(s[i]=='1')nof1++;
        }
//        cout<<s<<endl;
        for(i=0;i<n;i++){
            if(s[i]=='1'){f1=1;in=i;iin=i;break;}
        }
        if(f1==0){cout<<0<<endl;continue;}

        for(i=n-1;i>=0;i--){
            if(s[i]=='1'){f2=1;en=i;break;}
        }
        if(f1==0){cout<<0<<endl;continue;}
        /************************/
        for(j=0;j<k&&in<=en;j++,in++){ //cout<<"..DHUKSE"<<endl;
            sum=0;sum0=0;sum1=0;
//            if(s[in]=='0')sum0++;
//            if(s[in]=='1')sum1++;
            for(i=in;i<=en;i=i+k){
                if(s[i]=='0')sum1++;
                if(s[i]=='1')sum1--;
                sum1=min(sum,sum1);
                ps=min(ps,nof1+sum1);
            }

//            for(i=in-1;i>=iin;i=i-k){
//                if(s[i]=='0')sum0++;
//                if(s[i]=='1')sum1++;
//            }
//            sum=min(0,sum1)+nof1-sum1;       //cout<<"sum1="<<sum1<<endl;
//            ps=min(sum,ps);
        }
        ans=min(ps,nof1-1);
//        cout<<"...";
        cout<<ps<<endl;
    }
    return 0;
}

//10
//23 3
//00100100010100100100001
//13 3
//1101000000001
//13 3
//1101001000001
//4 2
//1111
//9 3
//111100000
//9 3
//000001111
//
//6
//9 2
//010001010
//9 3
//111100000
//7 4
//1111111
//10 3
//1001110101
//1 1
//1
//1 1
//0
//
//
//#include<bits/stdc++.h>
//#define ll long long
//#define ld long double
//#define pi acos(-1)
//#define mod 1000000007
//#define all(x) x.begin(), x.end()
//using namespace std;
//
//
//main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//
//    int t;
//    cin >> t;
//    while(t--){
//        int n, k;
//        cin >> n >> k;
//        string s;
//        cin >> s;
//        int cnt = count(all(s), '1');       cout<<"cnt="<<cnt<<endl;
//        int ans = n;
//        for(int i = 0; i < k; i++){         cout<<"dhukse"<<endl;
//            int x = 0;
//            for(int j = i; j < n; j += k){
//                if(s[j] == '0') x++;
//                else x--;
//                x = min(x, 0);              cout<<"x="<<x;
//                ans = min(ans, cnt + x);    cout<<"  ans="<<ans<<endl;
//            }
//        }
//        cout<<"...";
//        cout << ans << endl;
//    }
//}
