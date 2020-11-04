#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if (n == 0) {return 1;}
    return n * factorial(n - 1);
}
int main(){
    int i,a,j,x[8],y[8],n;
    double s=0;
    cin>>n;         //cout<<factorial(n)<<endl;
    a=(n-1)*factorial(n-2)*2;   //cout<<a;
    for(i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            s=s+sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
        }
    }
    printf("%0.10lf\n",(s*a)/factorial(n));
    return 0;
}

