#include<iostream>
using namespace std;
class Distance{
    int feet,inches;
    public:
    void input(){
        cout<<"\nEnter the feet: "<<endl;
        cin>>feet;
        cout<<"Enter the inches: "<<endl;
        cin>>inches;
    }
    void output(){
        cout<<"\nthe distance is  "<<feet<<" feet "<<inches<<" inches ";
    }
    void add_distance(Distance d1, Distance d2){
        inches = d1.inches + d2.inches;
        feet =  (inches/12);
        inches = inches%12;
        feet = feet + d1.feet + d2.feet;
    }
};
int main(){
    Distance d1,d2,d3;
    d1.input();
    d2.input();
    d3.add_distance(d1,d2);
    d3.output();

}