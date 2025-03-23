#include <iostream>
#include <string>
using namespace std;
class Student{
public:
    string name;
    Student(){
        cout<<"non parametrized constructor"<<endl;
    }
    Student(string name){
        this->name = name;
        cout<<"parametrized constructor"<<endl;
    }
};
int main(){
    Student s1;
    s1.name = "Tony stark";
}