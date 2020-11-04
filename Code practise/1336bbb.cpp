#include <bits/stdc++.h>
using namespace std;
long long fun(long long x,long long y,long long z)
{
    return ((x-y)*(x-y)+(x-z)*(x-z)+(y-z)*(y-z));
}
int main()
{
long long y,z,x1,x2,y1,y2,i,k,t,j,st,x,r,m,pos,kmin,l,k1,k2n,d,v1,smin,z1,kmax,q,p,n,mi,ma,k2,rk,gk,bk,pmin,i1,i2;
cin>>t;
for(j=0;j<t;j++)
{
   cin>>rk;
   cin>>bk;
   cin>>gk;
   vector <long long> r(rk),g(gk),b(bk);


for(i=0;i<rk;i++)
{
    cin>>r[i];
}
for(i=0;i<bk;i++)
{
    cin>>b[i];
}
for(i=0;i<gk;i++)
{
    cin>>g[i];
}
    sort(r.begin(),r.end());
   sort(b.begin(),b.end());
   sort(g.begin(),g.end());
   pmin=fun(r[0],g[0],b[0]);
   for(i=0;i<rk;i++)
   {
       x=r[i];
       i1=lower_bound(b.begin(), b.end(), x)-b.begin();
       i2=lower_bound(g.begin(), g.end(), x)-g.begin();
       if(i1!=0 and i2!=0)
       {    //cout<<"v1="<<fun(r[i],b[i1-1],g[i2-1]);
           pmin=min(pmin,fun(r[i],b[i1-1],g[i2-1]));
       }
       if(i1!=0 and i2!=gk)
       {    //cout<<"v2="<<fun(r[i],b[i1-1],g[i2]);
          pmin=min(pmin,fun(r[i],b[i1-1],g[i2]));
       }
       if(i1!=bk and i2!=0)
       {    //cout<<"v3="<<fun(r[i],b[i1],g[i2-1]);
           pmin=min(pmin,fun(r[i],b[i1],g[i2-1]));
       }
       if(i1!=bk and i2!=gk)
       {    //cout<<"v4="<<fun(r[i],b[i1],g[i2]);
           pmin=min(pmin,fun(r[i],b[i1],g[i2]));
       }
   }
    for(i=0;i<bk;i++)
   {
       x=b[i];
       i1=lower_bound(r.begin(), r.end(), x)-r.begin();
       i2=lower_bound(g.begin(), g.end(), x)-g.begin();
       if(i1!=0 and i2!=0)
       {    //cout<<"v1="<<fun(b[i],r[i1-1],g[i2-1]);
           pmin=min(pmin,fun(b[i],r[i1-1],g[i2-1]));
       }
       if(i1!=0 and i2!=gk)
       {    //cout<<"v2="<<fun(b[i],r[i1-1],g[i2]);
          pmin=min(pmin,fun(b[i],r[i1-1],g[i2]));
       }
       if(i1!=rk and i2!=0)
       {    //cout<<"v3="<<fun(b[i],r[i1],g[i2-1]);
           pmin=min(pmin,fun(b[i],r[i1],g[i2-1]));
       }
       if(i1!=rk and i2!=gk)
       {    //cout<<"v4="<<fun(b[i],r[i1],g[i2]);
           pmin=min(pmin,fun(b[i],r[i1],g[i2]));
       }
   }

    for(i=0;i<gk;i++)
   {
       x=g[i];
       i1=lower_bound(b.begin(), b.end(), x)-b.begin();
       i2=lower_bound(r.begin(), r.end(), x)-r.begin();
       //cout<<"i1="<<i1<<" i2="<<i2<<endl;
       if(i1!=0 and i2!=0)
       {   //cout<<"v1="<<fun(g[i],b[i1-1],r[i2-1])<<endl;
            //cout<<g[i]<<endl;
            //cout<<b[i1-1]<<endl;
            //cout<<r[i2-1]<<endl;
           pmin=min(pmin,fun(g[i],b[i1-1],r[i2-1]));
       }
       if(i1!=0 and i2!=rk)
       {    //cout<<"v2="<<fun(g[i],b[i1-1],r[i2]);
          pmin=min(pmin,fun(g[i],b[i1-1],r[i2]));
       }
       if(i1!=bk and i2!=0)
       {    //cout<<"v3="<<fun(g[i],b[i1],r[i2-1]);
           pmin=min(pmin,fun(g[i],b[i1],r[i2-1]));
       }
       if(i1!=bk and i2!=rk)
       {    //cout<<"v4="<<fun(g[i],b[i1],r[i2]);
           pmin=min(pmin,fun(g[i],b[i1],r[i2]));
       }
   }
   cout<<pmin<<endl;

}
 return 0;
}
