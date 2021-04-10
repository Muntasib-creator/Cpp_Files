//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    /**By default class is private**/
class student{
private:
/**As by default private so private na dileo cholbe**/
    float cgpa=3.53;
public:
    string name;
    int roll;
    void view_cgpa();
    void set_cgpa(float p){
        if(p>4.0||p<2.25){
            cout<<"Invalid";
        }
        else{
            cgpa=p;
            view_cgpa();
        }
    }
};
void student :: view_cgpa(){
//    cgpa=3.4;
    cout<<cgpa<<endl;
}
int main(){
    student s1;
    float x;
    s1.name="moon";
//    s1.cgpa=3.5;
    cin>>x;
    cout<<s1.name<<endl;
//    cout<<s1.cgpa<<endl
    s1.set_cgpa(x);
    return 0;
}
