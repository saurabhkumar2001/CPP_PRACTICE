//to obtain whatever return in the file into the screen .
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream ob("saurabh.txt");
    string str;
    while (getline(ob,str))
    {
        cout<<str<<endl;
    }
    ob.close();
    return 0;
    
}