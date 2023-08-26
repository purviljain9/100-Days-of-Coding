// Body Mass Index
// Category 1: Underweight if BMI ≤18 , Category 2: Normal weight if BMI ∈{19, 20,…, 24}
// Category 3: Overweight if BMI ∈{25, 26,…, 29}, Category 4: Obesity if BMI ≥30
#include<iostream>
using namespace std;
int bmicheck(int m, int h)
{
    int ans = m/(h*h);

    if(ans <= 18){
        return 1;
    }
    else if(ans >= 19 && ans <= 24){
        return 2;
    }
    else if(ans >= 25 && ans <= 29){
        return 3;
    }
    else{
        return 4;
    }
}
int main()
{
    int mass;
    int height;
    cout <<"Enter the mass and height of Anusree in kilograms and meters respectively" << endl;
    cin>>mass>>height;

    cout << bmicheck(mass, height) << endl;
}