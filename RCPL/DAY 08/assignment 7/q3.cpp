#include<iostream>
using namespace std;
class student{
    public:
    int marks;
    student(int m = 0):marks(m){
    }
    student operaor*(student &){
        student obj;
        obj.marks = this->marks*other.marks;
        return result;
    }
      int getMarks() const {
            return marks;
        }
};
int main(){
    student s(80);
    student s1(90);
    student s3 = s*s1;
    cout<<"marks obtained in s1: "<<s1.getmarks()<<endl;
    cout<<"marks obtained in s2: "<<s2.getmarks()<<endl;
    cout<<"marks obtained in s3: "<<s3.getmarks()<<endl;
}