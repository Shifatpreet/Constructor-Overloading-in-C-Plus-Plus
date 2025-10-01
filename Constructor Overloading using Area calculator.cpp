//Shifatpreet Singh 24070123098 exp-13
#include <iostream>
#include <cmath>
using namespace std;
class Area{
    public:
    float Ar1;
    float Ar2;
    void display1();
    void display2();
    Area(int l)
    {
        Ar1 =l*l;
    }
    Area(int l, int b)
    {
        Ar2 =l*b;
    }
};
void Area::display1(){
    cout <<"The Area of the square is: "<<Ar1<<endl;
}
void Area::display2(){
    cout <<"The Area of the rectangle is: " <<Ar2<<endl;
}
int main() {
   int a=0,b=0;
   cout<<"Enter the dimensions of rectangle/square: ";
   cin>>a>>b;
   Area a1(a);
   Area a2(a,b);
   a1.display1();
   a2.display2();
}
/*
Output:
Enter the dimensions of rectangle/square: 3 4
The Area of the square is: 9
The Area of the rectangle is: 12
*/
