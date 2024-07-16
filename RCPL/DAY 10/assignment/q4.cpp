#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    const char* filename = "saurabh1.txt";
    if (remove(filename)!=0){
        cerr << "File is not found.\n";
        return 1;
    }
    cout<<"file deleted successfully.\n";
    return 0;
}