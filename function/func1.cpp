//no argument and no return type
#include<iostream>
using namespace std;
void fibo();
void armstrong_number();
void fact();
void palindrome();
void prime();
void sum_of_digit();
void len();
void power();
int main()
{
    char ch = 'y';
    do
    {
        system("color 0A");
        system("cls");
       int choice;
       cout<<"LETS try func !!"<<endl;
       cout<<"enter 1 for fibonacci "<<endl;
       cout<<"enter 2 for armstrong_number "<<endl;
       cout<<"enter 3 for factorial "<<endl;
       cout<<"enter 4 for palindrome "<<endl;
       cout<<"enter 5 for to check whether prime or not"<<endl;
       cout<<"enter 6 for sum_of_digit "<<endl;
       cout<<"enter 7 for to find length of the number"<<endl;
       cout<<"enter 8 for power of the number  "<<endl;
       cout<<"enter the choice"<<endl;
       cin>>choice;
       switch (choice)
       {
       case 1:
        fibo();
        break;
       case 2:
        armstrong_number();
        break;
       case 3:
        fact();
        break;
       case 4:
        palindrome();
        break;
       case 5:
        prime();
        break;
       case 6:
        sum_of_digit();
        break;
       case 7:
        len();
        break;
       case 8:
        power();
        break;
       
       default:
       cout<<"Enter a valid input!!"<<endl;
        break;
       }
        cout << " \n do you want to continue ?? " << endl;
        cout<<"then press 'y' if not then press any button"<<endl;
        cin >>ch;
    } while (ch=='y');

    return 0;
    
}

void fibo(){
      int num;
    cout << "enter the number" << endl;
    cin >> num;
    cout<<"the fibonacci series of "<<num<<endl;
    int a = 0, b = 1, c = 0;
    cout<<a<<","<<b<<",";
    for(int i = 1; i <= num-2; ++i) //yeh num-2 kyu hua h 
    {
        c = a + b;
        cout<< c <<",";
        a = b;
        b = c;
    }
}

void armstrong_number(){
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
void fact(){
 int fact=1,num;
    cout<<"Enter the number for finding the factorial"<<endl;
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        fact=fact*i;
    }
    cout<<"the factorial of the num "<<num<<" is "<<fact<<endl;
}
void palindrome(){
     int num,temp,r;
    int sum = 0;
    cout<<"Enter the number "<<endl;
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        r = temp%10;
        sum = sum*10+r;
        temp=temp/10;
    }
    if(sum==num){
        cout<<"yes \n the number "<<num<<" is palindrome"<<endl;
    }
    else
        cout<<"No\nthe number "<<num<<" is not palindrome"<<endl;
    
}
void prime(){
     int skj = 0;
    int num;
    cout<<"Enter the number!! "<<endl;
    cin>>num;
    if (num == 0 || num == 1)
    {
        cout << "the number is not prime" << endl;
    }
    for (int i = 2; i < num; i++)
    {
        if (num%i== 0)
        {
            skj = 1;
            break;
        }
    }
        if (skj != 0)
        {
            cout << "the number is not prime!!" << endl;
        }
        else
        {
            cout << "the number is prime! " << endl;
        }
}
void sum_of_digit(){
       int num, l = 0,temp,digit;
    cout << "enter the number " << endl;
    cin >> num;
    temp=num;
    int sum = 0;
    while (temp!= 0)
    {
        digit = temp%10;
        temp = temp / 10;
        sum += digit;
    }
    cout<<"the sum of the digit "<<num<<" is = "<<sum<<endl; 
}
void len(){
      int num,l=0;
    cout<<"enter the number "<<endl;
    cin>>num;
    while(num!=0){
        num=num/10;
        l++;
    }
    cout<<"the length of the number is = " <<l<<endl;
}
void power(){
     int num,pow;
    cout<<"Enter the number "<<endl;
    cin>>num;
    cout<<"Enter the power "<<endl;
    cin>>pow;
    int f=1;
    for (int i = 1; i <= pow; i++)
    {
       f=f*num;
    }
    cout<<"your number is = "<<f<<endl;
    
    
}