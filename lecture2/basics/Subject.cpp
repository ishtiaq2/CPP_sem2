#include<iostream>
#include<string>
using namespace std;
#include "HelloWorld.h"

class Subject : public Student {
    string subject;
    public:
    Subject(string name, int semester, string subject) : Student(name, semester) {
        this->subject = subject;
    }

    void displaySubject() {
        cout<<subject;
        cout<<endl;
    }

    string to_string() const {
	    return name + ", " + subject;
	}
};

ostream& operator<< (ostream& outs, const Subject& obj) {
	return outs << obj.to_string();
}
 
ostream& operator<< (ostream& outs, const Subject* obj) {
	return outs << obj->to_string();
}

int main() {
    /**Student object("Abbas", 2);
    object.displayName();
    object.displayAge(20);
    object.displyaSemester();

    object.setSemester(4);
    object.displyaSemester();*/

    Subject objChild("waqas", 4, "Politics");
    cout<<objChild<<endl;
    objChild.displayName();
    objChild.displyaSemester();
    objChild.displaySubject();
    objChild.displayAge(20);
}