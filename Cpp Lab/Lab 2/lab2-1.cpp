#include<iostream>
#include<string.h>
using namespace std;
void fun (int a=11){
    cout<<a<<endl;
}
int volume(int x=0){
    return (x*x*x);
}
double volume (double r, double h){
    return (3.14159*r*r*h);
}
int main(){
    cout<<volume(1.1,1.1)<<endl;
    return 0;
}
