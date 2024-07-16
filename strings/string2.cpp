
#include<iostream>
using namespace std;
main()
{
    char string[20],ch,skj;
    int status=0;
    cout<<"Enter name: "<<endl;
    cin.getline(string,20);
    cout<<"name= "<<string<<endl;
    cout<<endl;
   cout<<"Enter a char to Search: "<<endl;
   cin>>ch;
   cout<<endl;
    cout<<"new character to change "<<skj<<endl;
              cin>>skj;
   for(int i=0;string[i]!='\0';i++)
   {
          if(string[i] == ch)
          {
                string[i]=skj;
                status=1;
          }
   }
   cout<<endl;
   cout<<"name= "<<string<<endl;
   if(status==0)
   {
       cout<<ch<<" is not found"<<endl;
   }


}

