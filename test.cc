// Example program
#include <iostream>
using namespace std;
 
class Rectangle{
  private:
  int width;
  int length;
  
  public:
  Rectangle();
  Rectangle(int w, int l);
  
  void set(int w, int l)
  {
     width=w;
     length=l;
  }
  int area();
    
};

  Rectangle::Rectangle()
  {
    width=3;
    length=5;
  }
  Rectangle::Rectangle(int w, int l){
      width=w;
      length=l;
      }

  int Rectangle::area()
  {
    return width*length;  
  }


int main()
{
//Rectangle r1; //default constructor
Rectangle r1(5,8);//constructor with 2 parameters
Rectangle r2(8,10);

Rectangle r3;
//r1.set(5,8);
cout<<r1.area()<<endl;

//r2.set(8,10);
cout<<r2.area()<<endl;


return 0;
}