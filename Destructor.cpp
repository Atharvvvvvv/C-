#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    double * cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr =cgpa;

    }
    ~Student(){
        cout<<"Hi I am destructor and i delete everything\n";
    }
    void getinfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"cgpa:"<<*cgpaPtr<<endl;

    }
};
int main(){
    Student s1("rahul Kumar", 8.9);
    s1.getinfo();
}