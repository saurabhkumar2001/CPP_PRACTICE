//local variable --> local variable is use in a local scope of a function we cant use it outside of the loop and also we cant make duplicate variables in a scope it gives compile time error
//Global variable is the variable that is declare outside of the main and can be use throught the programme that variable is common to every scopes in the programme but the preference is given to the local variable in case of the same name of the variable 
// if we want to use the global variable then we have to mark :: this sign and if there is same variable name in global and local preference is given to the global
#include<iostream>
using namespace std;
int global = 200;
int x = 205;
int greet(){
    int local = 500;
    int x = 300 ;
    int global = 200;
    cout<<local<<global<<endl;
}
int main( )
{
    cout<<x<<global<<endl;
   int local = 300;
   int x = 40068;
    cout<<local<<global<<x;

    return 0;
}

