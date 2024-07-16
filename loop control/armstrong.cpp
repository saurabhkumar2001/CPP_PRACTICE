#include <iostream>
using namespace std;
main()
{
    int num, temp, r,l=0;
    cout << "ENter the number" << endl;
    cin >> num;
    temp = num;
    int sum = 0;
    while(temp != 0)
    {
        temp = temp / 10;
        l++;
    }
    temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        temp = temp / 10;
        int f=1;
    for(int i=1;i<=l;i++){
        f=f*r;
    }
        sum = sum + f;
    }
    if(sum==num){
        cout<<"the number is armstrong"<<endl;
    }else
    {
        cout<<"the number is not armstrong"<<endl;
    }
    
}