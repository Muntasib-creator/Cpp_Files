// example: one class, two objects
#include <iostream>
using namespace std;

class Complex_number {
  public:
    int real, img;
    Complex_number(){
      real = 0;
      img = 0;
    }
    Complex_number(int r, int i){
      real = r;
      img = i;
    }
    Complex_number operator+(Complex_number c){
      Complex_number temp;
      temp.real = real + c.real;
      temp.img = img + c.img;
      return temp;
    }
    Complex_number operator+(int i){
      Complex_number temp;
      temp.real = real + i;
      temp.img = img + i;
      return temp;
    }
    void operator++(){    // This is for ++var
      real = real + 1;
      img = img + 1;
    }
    void operator++(int){ // This is for var++
      real = real + 1;
      img = img + 1;
    }
    void display(){
      cout<<real<<" + "<<img<<"i"<<endl;
    }
};

int main () {
  Complex_number c1(2,3), c2(4,6);
  Complex_number c3=c1+c2;
  c3.display();
  c3 = c3 + 2;
  c3.display();
  
  Complex_number* c4 = new Complex_number();
  c4->real = 10;
  c4->img = 11;
  c4->display();
  c4=c4+4;
  c4->display();
  // we cannot do c3 = 2 + c3 because we cannot redefine int class
  return 0;
}
