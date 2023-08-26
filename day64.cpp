// Lots of geeky customers visit our Amit's restaurant everyday. So, when asked to fill the feedback form, these 
// customers represent the feedback using a binary string (i.e a string that contains only characters '0' and '1'.
// If the string contains the substring "010" or "101", then the feedback is Good, else it is Bad. Note that, 
// to be Good it is not necessary to have both of them as substring.
// So given some binary strings, you need to output whether according to the Amit, the strings are Good or Bad.
#include<iostream>
#include<string>
using namespace std;
//Using loops>>>>>>>>>>>>>>>>>>>>>>
bool usingloops(string s)
{
    for(int i=0; i<s.length()-2; i++){
        if((s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') 
            || (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')){
                return true;
        }
        else{
            return false;
        }
    }
}
// Using find() function>>>>>>>>>>>>>>>>
bool goodorbad(string s, string s1, string s2)
{
    if(s.find(s1) != -1 || s.find(s2) != -1){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    string s;
    cout <<"Enter the customer's feedback string" << endl;
    cin>>s;
    string s1 = "101";
    string s2 = "010";

    if(goodorbad(s, s1, s2)){
        cout << "Good" << endl;
    }
    else{
        cout << "Bad" << endl;
    }

    if(usingloops(s)){
        cout << "Good" << endl;
    }
    else{
        cout << "Bad" << endl;
    }
}








// if(usingloops(s)){
//         cout << "Good" << endl;
//     }
//     else{
//         cout << "Bad" << endl;
//     }

