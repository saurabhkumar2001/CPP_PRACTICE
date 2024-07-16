#include<iostream>
using namespace std;

class student{
    int studid, marks[5];
    double percentage;
    string studname;
public:
    void getdata(){
        cout<<"studid: ";
        cin>>studid;
        cout<<"studname: ";
        cin>>studname;
        cout<<"marks of 5 subject: "<<endl;
        for (int i = 0; i < 5; i++){
            cout<<"enter the marks of subject "<<i+1<<": ";
            cin>>marks[i];
        }        
    }
    void show(){
        cout<<"\n\n\n\nstudid: "<<studid<<endl;
        cout<<"studname: "<<studname<<endl;
        cout<<"marks of 5 subjects are: "<<endl;
        for (int i = 0; i < 5; i++){
            cout<<"marks of subject "<<i+1<<": "<<marks[i]<<endl;
        }
    }
    int displaypercentage(){
        double per = getpercentage();
        return per;
    }
private:
    double getpercentage(){
        int totalmarks = 0;
        for (int i = 0; i < 5; i++){
            totalmarks += marks[i];
        }
        percentage = static_cast<double>(totalmarks) / 5;
        return percentage;
    }
};

int main(){
    int num;
    cout<<"Enter the number of students you want to add: ";
    cin>>num;
    student ob[num];
    for (int i = 0; i < num; i++){
        ob[i].getdata();
    } 
    cout<<"Details of students are: \n"<<endl;
    for (int i = 0; i < num; i++){
        ob[i].show();
    } 

    cout<<"The details of students who secured percentage over 70% are: \n\n"<<endl;
    for (int i = 0; i < num; i++){
        if(ob[i].displaypercentage() > 70){
            ob[i].show();
        } 
    }
    
    return 0;
}
