//Shifatpreet Singh 24070123098 exp-13
#include <iostream>
#include <cmath>
using namespace std;
class Volume{
    public:
    float vol2;
    float vol;
    void display1();
    void display2();
    Volume(int l)
    {
        vol=pow(l,3);
    }
    Volume(float l,float b,float h)
    {
        vol2=l*b*h;
    }
};
void Volume::display1(){
    cout<<"The volume of the cube is: "<<vol<<endl;
 
}
void Volume::display2(){
    cout<<"The volume of the cubiod is: "<<vol2<<endl;
}
int main() {
   int a=0,b=0,c=0;
   cout<<"Enter the dimentions of cuboid/cube";
   cin>>a>>b>>c;
   Volume v1(a);
   Volume v2(a,b,c);
   v1.display1();
   v2.display2();
}
/*
Output:
Enter the dimentions of cuboid/cube3
4
5
The volume of the cube is: 27
The volume of the cubiod is: 60
*/
