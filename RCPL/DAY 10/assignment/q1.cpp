#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main(){
    ifstream ob("saurabh.txt");
    string str;
    int count = 0;
    while (getline(ob,str))
    {
        count++;
    }
    cout<<"count of line: "<<count<<endl;
 return 0;   
} 
