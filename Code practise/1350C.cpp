#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
lld psize=1229,prime[20000];
void Prime(){
	int a, b, i, j,k=0, flag,c=0;
//	cout << "Enter lower bound of the interval: ";
//	cin >> a;
	a=2;
//	cout << "\nEnter upper bound of the interval: ";
//	cin >> b;
	b=100000;
	for (i = a; i <= b; i++) {
		if (i == 1 || i == 0)
			continue;
		flag = 1;
		for (j = 2; j <= i / 2; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1){
//            cout << i << ",";
            prime[k++]=i;
        c++;}
	}
	psize=c;
//	cout<<endl<<"count="<<c<<endl;
}

int main(){
//    T{
        Prime();
        lld i,j,n,ans=1;
        cin>>n;
        vector<lld>v(n);
        for(i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());        //cout<<v[n-1]<<endl;
        lld limit=v[n-1]/2;
        for(i=0;i<psize&&prime[i]<limit;i++){
//            cout<<"dhukse"<<endl;
//            cout<<" prime["<<i<<"]="<<prime[i]<<"  v[n-1]="<<v[n-1]<<endl;
            for(;;){
                int c=0;
                for(j=0;j<n;j++){
                    if(v[j]%prime[i]==0){
                        c++;
                        v[j]=v[j]/prime[i];
                    }
                }
                if(c>=n-1){        //cout<<"c="<<c<<" prime["<<i<<"]="<<prime[i]<<endl;
                    ans=ans*prime[i];
                }
                else {             //cout<<"c="<<c<<" prime["<<i<<"]="<<prime[i]<<endl;
                    break;
                }
            }
        }
        cout
//        <<"Ans="
        <<ans<<endl;
//    }
    return 0;
}
//3
//2
//1 1
//4
//10 24 40 80
//10
//540 648 810 648 720 540 594 864 972 648
