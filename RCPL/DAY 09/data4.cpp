#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    char char* sname = "saurabh.txt";
    char char* dname = "priya.txt";
    if (!sname)
    {
        cerr<<"Error opening source file for reading ";
        return 1;
    }
    ofstream dfile(dname);
    if (!dname)
    {
      cerr<<"Error opening destination file for ";
      sfile.close();
      return 1;
    }
    char ch;
    while (sfile.get(ch))
    {
        dfile.put(ch);
    }
    sfile.close();
    dfile.close();
    cout<<"Data copied from"<<sname<<"to"<<dname;

    return 0;    
}