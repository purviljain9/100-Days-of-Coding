// There are N students in a class, where the i-th student has a score of Ai?.
// The i-th student will boast if and only if the number of students scoring less than or equal Ai? is greater 
// than the number of students scoring greater than Ai?.
// Find the number of students who will boast.
// Input Format
// The first line contains T - the number of test cases. Then the test cases follow.
// The first line of each test case contains a single integer N - the number of students.
// The second line of each test case contains N integers 1,2,…,A1?,A2?,…,AN? - the scores of the students.
// Output Format
// For each test case, output in a single line the number of students who will boast.
#include<iostream>
using namespace std;
int boast(int arr[], int n)
{
    int count = 0;
    int count1 = 0;
    int count2 = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i] >= arr[j]){
                count1++;
            }
            else{
                count2++;
            }
        }
        if(count1 > count2){
            count++; 
            count1 = 0;
            count2 = 0;
        }
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter the number of the students" << endl;
    cin>>n;

    int arr[100];
    cout << "Enter the scores of the students" << endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout << boast(arr, n) << endl;
}


            // if(i == j){
            //     continue;
            // }
            // else{