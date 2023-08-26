// Suppose, we have a class A which is the base class and we have a class B which is derived from class A and we 
// have a class C which is derived from class B, we can access the functions of both class A and class B by 
// creating an object for class C. Hence, this mechanism is called multi-level inheritance.Create a class called 
// Equilateral which inherits from Isosceles and should have a function such that the output is as given below.
#include<iostream>
using namespace std;
class Triangle{
    public:
        void triangle(){
            cout << "I am a Triangle" << endl;
        }
};
class Isoceles : public Triangle{
    public:
        void isoceles(){
            cout << "I am an isoceles triangle" << endl;
        }
};
class Equilateral : public Isoceles{
    public:
        void equilateral(){
            cout << "I am an equilateral triangle" << endl;
        }
};
int main()
{
    Equilateral e;
    e.equilateral();
    e.isoceles();
    e.triangle();
}