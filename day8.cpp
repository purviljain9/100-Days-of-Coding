//Write a program to find roots of a quadratic equation Description.
//Get the values of a, b and c (coefficients of quadratic equation) as input from 
//the user and calculate the roots and print as the output.
#include<iostream>
#include<math.h>
using namespace std;
//CHECK THIS CODE AND DO THE CHANGES NECESSARY                                                          
int main()
{
    int a,b,c;
    cout << "Enter value of coefficient a" << endl;
    cin>>a;
    cout << "Enter value of coefficient b" << endl;
    cin>>b;
    cout << "Enter value of coefficient c" << endl;
    cin>>c;

    float root = pow(pow(b,2) - 4*a*c, 0.5);
    float root1 = (-b + root)/2*a;
    float root2 = (-b - root)/2*a;

    if(root1 == root2){
        cout << "Roots are equal" << endl;
        cout << "Root 1 = Root2 = " << root1 << endl;
    }
    else{
        cout << "Roots are not equal" << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
}








//FORMULA>>>>>>>>>>>
//x = -b+-underroot(sq(2) - 4*a*c)/2*a



//METHOD == 1
// {
//     int a,b,c;
//     cin>>a;
//     cin>>b;
//     cin>>c;

//     float sq = pow(b,2);
//     float product = 4*a*c;

//     float diff = sq - product;
//     float root = pow(diff, 0.5);

//     float root1 = (-b + root)/2*a;
//     float root2 = (-b - root)/2*a;

//     cout << root1 <<" " << root2 << endl;
// }


//METHOD ==2;
// {
//     int a,b,c;
//     cin>>a;
//     cin>>b;
//     cin>>c;

//     float sq = pow(b,2) - 4*a*c;
//     float root = pow(sq, 0.5);

//     float root1 = (-b + root)/2*a;
//     float root2 = (-b - root)/2*a;

//     cout << root1 <<" " << root2 << endl;
// }
