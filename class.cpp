#include <iostream>
using namespace std;
class student{
public: //Access Specifer
    int id; //data member(also instance variable)
    string name; //data member(also instance variable)
};
int main(){
    student s1; //creating object s1 of class student
    s1.id = 75;
    s1.name = "Adarsh";
    cout<<s1.id<<endl;
    cout<<s1.name<<endl;
    return 0;

}
