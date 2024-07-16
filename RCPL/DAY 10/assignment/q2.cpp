#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream ob("saurabh.txt");
    ofstream ob1("saurabh1.txt",ios::app);
    char c;
    while (ob.get(c))
    {
        ob1.put(c);
    }
    ob.close();
    ob1.close();
    cout<<"file is copied is done !"<<endl;
}