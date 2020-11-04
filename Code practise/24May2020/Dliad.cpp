#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#define lld long long int
#define SIZE 10000000
#define fi first
#define se second
#define pf push_front
#define pb push_back
#define p push
#define po pop
#define pof pop_front
#define pob pop_back
#define mp make_pair
#define fbo find_by_order
#define ofk order_of_key
#define fo(i,a,b) for(lld i=a;i<=b;i++)
#define lb lower_bound
#define ub upper_bound
#define er equal_range
#define rs random_shuffle
#define inf 9000000000000000000
#define T int t;cin>>t;while(t--)
using namespace std;
using namespace __gnu_pbds;

typedef pair<int,int>ii;
typedef vector<ii>vii;
typedef vector<int>vi;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>indexed_set;

int isprime(lld n)
{
    if(n==2)
        return 1;
    if(n==1||n==0)
        return 0;
    for(int i=3; i<=sqrt(n)+1; i+=2)
    {
        if(n%i==0)
            return 0;
    }

    return 1;
}

int main()
{
    T
    {
        lld n,k,i,mn;
        int f;
        cin>>n>>k;
        if(k<n)
        {

            if(n%2!=0&&isprime(n))
            {
                cout<<n<<endl;
            }
            else
            {
                for(i=2;; i++)
                {
                    if((n/i)<=k&&n%i==0)
                    {
                        cout<<i<<endl;
                        break;
                    }
                }
            }
        }

        else if(k>=n)
            cout<<1<<endl;
    }
    return 0;
}
