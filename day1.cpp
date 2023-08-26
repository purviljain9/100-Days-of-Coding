//Take an input character from the user and check whether the given input is a vowel or consonant.
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a Character" << endl;
    cin>>ch;

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
      || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        cout << "vowel" << endl;
    }

    else if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
        cout << "consonant" << endl;
    }

    else{
        cout << "Invalid input" << endl;
    }
}




















// {
//     char ch;
//     cin>>ch;

//     if(ch == 'a'|| ch == 'e'|| ch == 'i'||ch == 'o'||ch== 'u'
//         ||ch== 'A'||ch== 'E'||ch== 'I'||ch== 'O'||ch== 'U'){
//         cout<< "vowel" << endl;
//     }
//     else if(ch>='1' && ch<='9'){
//         cout << "invalid" << endl;
//     }
//     else{
//         cout << "consoant" << endl;
//     }
// }
