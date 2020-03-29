#include<iostream>
#include<string>
using namespace std;

class Student {
    public:
    string name;
    private:
    int semester;
    public:
    Student() {}
    Student(string name, int semester) {
        this->name = name;
        this->semester = semester;
    }
    void displayName() {
        cout<<name;
        cout<<endl;
    }

    void displayAge(int age) {
        cout<<age<<endl;
    }

    void setSemester(int sem) {
        semester = sem;
    }

    void displyaSemester() {
        cout<<semester;
        cout<<endl;
    }

};

