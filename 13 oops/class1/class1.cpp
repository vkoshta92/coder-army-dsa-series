#include <iostream>
using namespace std;
class Student{
public:
string name;
int age,roll_number;
string grade;

};

 int main(){
Student *S= new Student;
(*S).name= "Rohit";
(*S).age= 10;
(*S).roll_number= 21;
(*S).grade= "A+";

cout<<S->name<<" ";
cout<<S->name<<" ";
cout<<S->roll_number<<" ";
cout<<S->grade<<" ";








 }