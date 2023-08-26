// "Pass or Fail
// Anusree is struggling to pass a certain college course.
// The test has a total of N question, each question carries 3 marks for a correct answer and −1 
// for an incorrect answer. Anusree is a risk-averse person so he decided to attempt all the questions. 
// It is known that Anusree got X questions correct and the rest of them incorrect. 
// For Anusree to pass the course he must score at least P marks.
// Will Anusree be able to pass the exam or not?
// Input Format
// First line will contain T, number of testcases. Then the testcases follow.
// Each testcase contains of a single line of input, three integers N, X, P.
// Output Format
// For each test case output ""PASS"" if Chef passes the exam and ""FAIL"" if Chef fails the exam.
// You may print each character of the string in uppercase or lowercase (for example, the strings 
// ""pAas"", ""pass"", ""Pass"" and ""PASS"" will all be treated as identical).

#include<iostream>
using namespace std;
bool result(int n, int m, int p)
{
    int correctmarks = n*3;
    int wrongmarks = m*-1;

    int actualmarks = correctmarks + wrongmarks;

    if(actualmarks >= p){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int totalquestions;
    int correctanswers;
    int passingmarks;

    cout << "Enter totalquestions, correctanswers and passingmarks of Anusree" << endl;
    
    cin>>totalquestions;
    cin>>correctanswers;
    cin>>passingmarks;

    int wronganswers =totalquestions - correctanswers;

    if(result(correctanswers, wronganswers, passingmarks)){
        cout << "Pass" << endl;
    }
    else{
        cout << "Fail" << endl;
    }

}