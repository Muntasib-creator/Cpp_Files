#include<bits/stdc++.h>
using namespace std;
void removeDuplicates(long long int arr[],long long int n);
int main()
{
    long long int l,t,f,sign,i,j,k,ii,n,x,mx,a[200000];
    cin>>t;
    for(;t!=0;t--){
            f=0;
        cin>>n;
        for(;n>1;n--){
            cin>>ii;
            if(f==0){
                for(i=0;i<ii;i++){
                    cin>>a[i];
//                    cout<<a[i]<<" ";
                }
                l=i;f=1;
            }
            else{
                for(i=0,k=0;i<ii;i++){
                    cin>>x;
                    for(j=0;j<l;j++){if(x==a[j]){break;}}
//                    cout<<x<<" ";
                    a[l+k]=x;
                    k++;
                }
                l=l+k;
            }
        }
        removeDuplicates(a,l);
        cout<<endl;
    }
    return 0;
}
void removeDuplicates(long long int arr[],long long int n)
{

    int i;

    // Initialise a set
    // to store the array values
    set<int> s;

    // Insert the array elements
    // into the set
    for (i = 0; i < n; i++) {

        // insert into set
        s.insert(arr[i]);
    }

    set<int>::iterator it;

    // Print the array with duplicates removed
    for (it = s.begin(); it != s.end(); ++it)
        cout << *it << " ";

}

