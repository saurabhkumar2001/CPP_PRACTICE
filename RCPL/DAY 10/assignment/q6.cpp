#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;

void renameFile(string &oldname, string &newname){
    ifstream ifs(oldname);
    ofstream ofs(newname);
    char c;
    while (ifs.get(c)) {
        ofs.put(c);
    }
    ifs.close();
    ofs.close();
    // Remove the old file after copying its contents to the new file
    if(remove(oldname.c_str()) != 0) {
        cerr << "Error: Unable to delete the old file." << endl;
    }
}

int main(){
    string oldname, newname;
    cout << "Enter the old name of the file: " << endl;
    getline(cin, oldname);
    cout << "Enter the new name of the file: " << endl;
    getline(cin, newname);
    renameFile(oldname, newname);
    cout << "File renamed successfully." << endl;
    return 0;
}
