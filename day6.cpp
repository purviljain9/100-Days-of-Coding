#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout << "Enter your x-coordinate" << endl;
    cin>>x;
    cout << "Enter your y-coordinate" << endl;
    cin>>y;

    if(x>0 && y>0){
        cout << "This point lies in first quadrant." << endl;
    }
    else if(x<0 && y>0){
        cout << "This point lies in second quadrant" << endl;
    }
    else if(x<0 && y<0){
        cout << "This point lies in third quadrant" << endl;
    }
    else if(x>0 && y<0){
        cout << "This point lies in fourth quadrant" << endl;
    }
    else if(x == 0){
        cout << "This point lies on y-axis" << endl;
    }
    else if(y == 0){
        cout << "This point lies on x-axis" << endl;
    }
    else{
        cout << "This point lies on origin" << endl;
    }
}