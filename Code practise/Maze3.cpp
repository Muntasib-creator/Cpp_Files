#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
int main(){
    int i=23,j=0;
//    char path[100]="SBLLLBLRBLLLLSLBSRBLLLR";
    char path[100]="SBLLSLBRLLLSRSBLBLLLRBLLRS"; i=26;
    cout<<"i=";
    cin>>i;
    for(j=0;j<i;j++)cin>>path[j];
    j=i;
    while (true) {
    int n = i;
    int flag=0;
    for (i = 0; i < n; i++) {
      if (path[i] == 'B') {
        flag=1;
        if (path[i - 1] == 'L' && path[i + 1] == 'L') {
          path[i - 1] = 'S';
          path[i] = 'X';
          path[i + 1] = 'X';
        }
        else if (path[i - 1] == 'L' && path[i + 1] == 'R') {
          path[i - 1] = 'B';
          path[i] = 'X';
          path[i + 1] = 'X';
        }
        else if (path[i - 1] == 'L' && path[i + 1] == 'S') {
          path[i - 1] = 'R';
          path[i] = 'X';
          path[i + 1] = 'X';
        }
        else if (path[i - 1] == 'R' && path[i + 1] == 'L') {
          path[i - 1] = 'B';
          path[i] = 'X';
          path[i + 1] = 'X';
        }
        else if (path[i - 1] == 'S' && path[i + 1] == 'L') {
          path[i - 1] = 'R';
          path[i] = 'X';
          path[i + 1] = 'X';
        }
        else if (path[i - 1] == 'S' && path[i + 1] == 'S') {
          path[i - 1] = 'B';
          path[i] = 'X';
          path[i + 1] = 'X';
        }
      }
    }
    if(flag==0){
      break;
    }
    char temp[100];
    for (i = 0, j = 0; i < n; i++) {
      if (path[i] == 'X') {
        continue;
      }
      else {
        temp[j++] = path[i];
      }
    }
    for (i = 0; i < j; i++) {
      path[i] = temp[i];
    }
//    for(j=0;j<i;j++){cout<<path[j];}cout<<endl;
  }
    cout<<"i= "<<i<<endl;
    for(j=0;j<i;j++){cout<<path[j];}cout<<endl;
    return 0;
}

