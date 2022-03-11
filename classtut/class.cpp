#include <iostream>
#include <string>
using namespace std;

class Geeks
{
public:
    string geekName;
    int id;
    Geeks(){
        cout << "Default constructor called" << endl;
        id = -1;
    }
    Geeks(int i){
        cout << "default constructor with parameter is called" << endl;
        id = i;
    }
    ~Geeks(){
        cout << "destructor is clled " << id << endl;
    }
    void printName()
    {
        cout << "Geekname is: " << geekName;
    }
    void printid();
};
void Geeks::printid(){
    cout << "Geek Id: " << id<< endl;
}
int main()
{
    Geeks obj1(2);
    obj1.geekName = "Abhi";
    obj1.id = 12;
    obj1.printName();
    obj1.printid();
    return 0;
}