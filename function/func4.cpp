//function overloading it means we can make same function name of the same class but with other parameters
#include<iostream>
using namespace std;
int addition(int x,int y,int z){
    return x+y+z;
}
int addition(int x,int y){
    return x+y;
}
float addition(float x,float y,float z){
    return x+y+z;
}
int main( )
{int r,s;
float t;
 r = addition(45,78,90);
 s = addition(45,78);
 t = addition(45.4545f,78.654f,90.433);
 cout <<"the result of r = "<<r<<" \n the result of s = "<<s<<" \n the result of t = "<<t<<endl;
    return 0;
}
