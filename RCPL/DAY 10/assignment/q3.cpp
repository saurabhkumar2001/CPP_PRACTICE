#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream ob("saurabh1.txt",ios::app);
        ob<<"\nthis line is appended in already existing file"<<endl;
        cout<<"done!"<<endl;
    return 0;
}