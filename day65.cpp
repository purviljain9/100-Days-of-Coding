// New Tablet
// Ajinkya decided to buy a new tablet. His budget is B, so he cannot buy a tablet whose price is greater than B.
// Other than that, he only has one criterion — the area of the tablet's screen should be as large as possible. 
// Of course, the screen of a tablet is always a rectangle.
// Ajinkya has visited some tablet shops and listed all of his options. In total, there are N available tablets,
// numbered 1 through N. For each valid i, the i-th tablet has width Wi, height Hi and price Pi.
// Help Ajinkya choose a tablet which he should buy and find the area of such a tablet's screen, or determine 
// that he cannot buy any tablet.
// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description 
// of T test cases follows.
// The first line of each test case contains two space-separated integers N and B. N lines follow.
// For each i (1≤i≤N), the i-th of these lines contains three space-separated integers Wi, Hi and Pi.
// Output
// For each test case, print a single line. If Ajinkya cannot buy any tablet, it should contain the string 
// "no tablet" (without quotes).
// Otherwise, it should contain a single integer — the maximum area of the screen of a tablet Ajinkya can buy.
#include<iostream>
using namespace std;
void choosetablet(int n, int b)
{
    int w,h,p;
    int ans;
    int maxarea = 0;
    for(int i=0; i<n; i++){
        cout <<"Enter the width, height and price of current tablet" << endl;
        cin>>w>>h>>p;

        if(p <= b){
            maxarea = max(maxarea, w*h);
        }
    }
    if(maxarea == 0){
        cout << "No Tablet" << endl;
    }
    else{
        cout << maxarea << endl;
    }
}
int main()
{
    int n,b;
    cout << "Enter the number and budget of tablets" << endl;
    cin>>n>>b;

    choosetablet(n, b);
}


// METHOD: 1>>>>>>>>>>>>>>>>>>>>>
// #include<iostream>
// using namespace std;
// int choosetablet(int n, int b)
// {
//     int w,h,p;
//     int ans;
//     int max = 0;
//     for(int i=0; i<n; i++){
//         cout <<"Enter the width, height and price of current tablet" << endl;
//         cin>>w>>h>>p;

//         if(p > b){
//             ans = -1;
//         }
//         else{
//             int area = w*h;
//             ans = area;
//         }

//         if(ans > max){
//             max = ans;
//         }
//     }
//     return max;
// }
// int main()
// {
//     int n,b,w,h,p;
//     cout << "Enter the number and budget of tablets" << endl;
//     cin>>n>>b;

//     //int ans = choosetablet(n, b);
//     choosetablet(n, b);
// }


// METHOD 2>>>>>>>>>>>>>>>>
// FOR CODECHEF>>>>>>>>>>>

// #include <iostream>
// using namespace std;
// int main() {
 
//     // * Initializing variables
//     int numberOfTestCases, numberOfTablets, budget, width, height, price, maxArea;
 
//     // * Accepting the number of test cases
//     cin>>numberOfTestCases;
 
//     // * Executing each test case one by one
//     while(numberOfTestCases--) {
 
//         // * Initializing maximum area to 0 for current test case
//         maxArea = 0;
 
//         // * Accepting the number of tablets and budget for current test case
//         cin>>numberOfTablets>>budget;
 
//         // * Looping the number of tablets
//         for(int i=0; i<numberOfTablets; i++) {
 
//             // * Accepting width, height and price for current tablet
//             cin>>width>>height>>price;
 
//             /*
//             *   If price of the current tablet is under budget,
//             *   we update the maximum area if the area of current tablet
//             *   is greater than the current maximum area
//             */
//             if(price<=budget) {
//                 maxArea = max(maxArea, width*height);
//             }
//         }
 
//         /*
//         *   Displaying no tablet if maximum area is still 0
//         *   Otherwise, displaying the value of maximum area
//         */
//         if(maxArea==0) {
//             cout<<"no tablet"<<endl;
//         } else {
//             cout<<maxArea<<endl;
//         }
//     }
// }