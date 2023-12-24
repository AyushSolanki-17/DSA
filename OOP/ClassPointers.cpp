#include <iostream>
using namespace std;
class Student
{

    
public:
    int rollNo;
    string name;
    Student(int r, string s);
    
};

Student::Student(int r,string s)
{
    this->name = s;
    this->rollNo = r;
}

void check1(Student* s)
{
    cout<<"Student Check 1"<<endl;
    cout<<"Roll No: "<<s->rollNo;
    cout<<"Name: "<<s->name;
    cout<<"Addr: "<<&s;
}

class Main
{
public:
    void run()
    {
        // Write you Code Here
        Student st(1,"Dhruva");
        check1(&st);
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\DSA\\CPP\\input.txt", "r", stdin);
    freopen("D:\\DSA\\CPP\\output.txt", "w", stdout);
#endif
    Main main;
    main.run();
}