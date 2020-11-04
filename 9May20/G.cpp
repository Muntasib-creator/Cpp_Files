#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
///#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define inf 1e18
#define MAX 2010
#define mod 1000000007
#define sf(a) scanf("%lld",&a)
#define sff(a,b) scanf("%lld %lld",&a,&b)
#define sfff(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
#define Case(i) printf("Case %lld: ",i)
#define setpre(number) cout<<fixed<<setprecision(10)<<number<<endl
#define pf(a) printf("%lld ",a)
#define pff(a,b) printf("%lld %lld\n",a,b)
#define FOR(i,n) for(ll i=0;i<n;i++)
#define FOR1(i,n) for(ll i=1;i<=n;i++)
#define LOOP(x,y) for(ll i=x;i<=y;i++)
#define RFOR(i,n) for(ll i=n-1;i>=0;i--)
#define RFOR1(i,n) for(ll i=n;i>0;i--)
#define RLOOP(x,y) for(ll i=y;i>=x;i--)
#define m_p make_pair
#define ff first
#define ss second
#define p_b push_back
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
map<ll,ll>mp1,mp;
vector<pair<ll,pair<ll,ll> > >vpp1;
vector<pair<ll,ll> >vp,vp1;
vector<ll>v,v1,v2,fin;
map<pair<ll,ll>,bool>mbb;
map<ll,bool>mb;
ll n,k,a,b,c,d,e,f,ta,sum=0,cnt=0,m,l,req,sz,maxi;
bool sortbysec(const pair<pair<ll,ll>,ll> &a,const pair<pair<ll,ll>,ll> &b)
{
    return (a.second < b.second);
}
ll solve(ll n)
{
    return (3*n*n + n)/2;
}
int main()
{
    fast;
    cin>>ta;
    FOR(test,ta)
    {
        cin>>n;
        if(n<4)
        {
            cout<<-1<<endl;
            continue;
        }
        deque<ll>dq;
        dq.push_back(1LL);
        dq.push_front(3LL);
        dq.push_back(4LL);
        dq.push_back(2LL);
        if(n>=5)
        {
            dq.push_back(5);
        }
        if(n>=6)
        {
            dq.push_front(6);
        }

        ll cnt=0;
        for(ll i=7; i<=n; i++)
        {
            if(cnt%2==0)
                dq.push_back(i);
            else
                dq.push_front(i);
            cnt++;
        }

        while(!dq.empty())
        {
            cout<<dq.front()<<" ";
            dq.pop_front();
        }
        cout<<endl;
    }
    return 0;
}
