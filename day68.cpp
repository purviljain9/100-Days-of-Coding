// You will be given Q queries. Each query is of one of the following three types:
// Add an element x to the set.
// Delete an element x from the set. (If the number x is not present in the set, then do nothing).
// If the number x is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).
// Input Format :
// The first line of the input contains Q where Q is the number of queries. The next Q lines contain 1 query each. 
// Each query consists of two integers x and y where y is the type of the query and x is an integer.
// Output Format :
// For queries of type 3 print "Yes"(without quotes) if the number x is present in the set and if the number is not 
// present, then print "No"(without quotes).
// Each query of type 3 should be printed in a new line.
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cout << "Enter number of queries" << endl;
    cin>>n;

    for(int i=0; i<n; i++){
        int q,x;
        cout << "Enter the query and integer" << endl;
        cin>>q>>x;

        if(q == 1){
            s.insert(x);
        }
        else if(q == 2){
            s.erase(x);
        }
        else{
            set<int>::iterator itr=s.find(x);
            if(itr == s.end()){
                cout << "No" << endl;
            }   
            else{
                cout << "Yes" << endl;
            }         
        }
    }
}