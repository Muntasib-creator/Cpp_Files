//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef string SS;
struct student{
    SS name;
    int roll;
    float cgpa;
};

int main(){
    struct student s1;
    s1.name="john";
    s1.roll=1;
    s1.cgpa=3.5;
    cout<<s1.name<<endl<<s1.roll<<endl<<s1.cgpa<<endl;

    return 0;
}
