#include<iostream>
using namespace std;

class fun{
    int wid,len;
public:
    fun();
    fun(int,int);
    fun(fun &);
    area(void){
        return len*wid;
    }
    ~fun();
};

fun::fun(){
    wid=2;
    len=5;
}
fun::fun(int a, int b){
    wid=a;
    len=b;
}
fun::fun(fun & a){
    wid=a.wid;
    len=a.len;
}
fun::~fun(){
    cout<<"yoo"<<endl;
}
int main(){
    fun a,b(6,7),c(b),d=a;
    cout<<a.area()<<endl;
    cout<<b.area()<<endl;
    cout<<c.area()<<endl;
    cout<<d.area()<<endl;
}
