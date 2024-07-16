#include<iostream>
using namespace std;
main(){
    char str[20],ch,skj;
    int status = 0;
    cout<<"Enter the name: "<<endl;
    cin.getline(str,20);
    cout<<"the name: "<<str<<endl;
    cout<<"ENter the alphabet which has to be search "<<endl;
    cin>>ch;
    cout<<endl;
    for (int i = 0;str[i]!='\0'; i++)
    {
        if(str[i]==ch){
             cout<<ch<<" is found at "<<i<<" index."<<endl;
                status=1;
                cout<<"new character in "<<i<<" index"<<endl;
                cin>>skj;

                str[i]=skj; 
        }
    }
    cout<<endl;
    cout<<"after changes name is "<<str<<endl;
    if(status == 0)
    {
        cout<<ch<<" is not found "<<endl;
    }
}