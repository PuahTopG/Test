// Example program
#include <iostream>
using namespace std;
 
class Rectangle{
  private:
  int width;
  int length;
  
  public:
  
  Rectangle(){
      cout<<"Default constructor"<<endl;
      }
  
  
  void set(int w, int l)
  {
     width=w;
     length=l;
  }
  int area()
  {
    return width*length;  
  }
    
};

int main()
{
Rectangle r1;
Rectangle r2;
r1.set(5,8);
cout<<r1.area()<<endl;

r2.set(8,10);
cout<<r2.area()<<endl;


return 0;
}