#include<iostream>
using namespace std;

string studentName;
string studentId;
string studentGrade;
string cmd ="yes";
bool repeat = true;
int counter = 0;

int main() {
    while(repeat){
        cout<<"Enter student name";
        cin>>studentName;
        cout<<"Enter student id";
        cin>>studentId;
        cout<<"Enter student grade";
        cin>>studentGrade;
        cout<<"Enter yes to continue or no to exit";
        cout<<counter++;
        cout<<endl;
        cin>>cmd;
        if(cmd == "yes"){
            repeat = true;
        } else if(cmd == "no") {
            repeat = false;
        }
    }return 0 ;
}