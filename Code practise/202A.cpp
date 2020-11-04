#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll          long long int
#define T           long long int t;cin>>t;while(t--)
#define CS          cout<<"Case "<<cs++<<": "
#define nd          endl
#define dd          double
#define ss          string
#define Y           cout<<"YES"<<endl
#define N           cout<<"NO"<<endl
#define for0(i,n)   for( i=0;i<n;i++)
#define forn(n,i)   for( i=n-1;i>=0;i--)
deque<ll>dq;
vector<ll>v;

int main()
{   //for(int xx=0;xx<4;xx++){
    ll n,k,i,sum,sum1;
    ss s;
    cin>>s;
    sort(s.begin(), s.end());
//    cout<<s<<endl;
    char target;
    target=s[s.size()-1];
    ll hi=s.size()-1;
    ll lo=0;
    ll mid;
    while(lo<=hi){
        mid=lo+(hi-lo)/2;
        if(s[mid]==target){
            while(s[mid]==target){
                mid--;
                if(mid==-1){
                    cout<<s[mid+1];
                    break;
                }
            }
            mid++;
            break;
        }

        else if(s[mid]!=target)
            lo=mid+1;
    }
//    cout<<"lo="<<lo<<" mid="<<mid<<" hi="<<hi<<endl;

    cout<<s.substr(mid,hi)<<endl;;
//}
    return 0;

}
//radar
//bowwowwow
//codeforces
//mississipp
