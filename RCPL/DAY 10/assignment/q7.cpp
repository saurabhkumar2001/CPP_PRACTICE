#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    ifstream ifs("saurabh.txt");
    char c;
    int count = 0;
    while (ifs.get(c))
    {
       count++;
    }
    cout<<"total word count is: "<<count;
}