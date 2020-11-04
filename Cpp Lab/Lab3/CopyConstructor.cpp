// copy constructors
#include <iostream>
using namespace std;

class CRectangle {
    int width, height;
  public:
    CRectangle ();
    CRectangle (int,int);
    CRectangle (CRectangle &);//copy constructor
    int area (void) {return (width*height);}
};

CRectangle::CRectangle () {
  width = 5;
  height = 5;
}

CRectangle::CRectangle (int a, int b) {
  width = a;
  height = b;
}
CRectangle::CRectangle (CRectangle & X) {
//copy constructor definition
  width = X. width;
  height = X. height;
}

int main () {
  CRectangle rect (3,4);
  CRectangle rectb(rect);// copy constructor called
  CRectangle rectc = rectb; // copy constructor called again
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  cout << "rectc area: " << rectc.area() << endl;
  return 0;
}
