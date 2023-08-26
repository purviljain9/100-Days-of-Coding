// Akhil has many balls of white and black colors. One day, he was playing with them. During the play, he arranged
// the balls into two rows both consisting of N number of balls. These two rows of balls are given to you in the 
// form of strings X, Y. Both these string consist of 'W' and 'B', where 'W' denotes a white colored ball and 'B'
// a black colored. He wants to create another row of N balls, Z in such a way that the sum of hamming distance
// between X and Z, and hamming distance between Y and Z is maximized.
// Hamming Distance between two strings X and Y is defined as the number of positions where the color of balls in
// row X differs from the row Y ball at that position. e.g. hamming distance between "WBB", "BWB" is 2, as at 
// position 1 and 2, corresponding colors in the two strings differ.
// Akhil wants you to find the lexicographically smallest arrangement which will maximize the above value.
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string x;
	cin>>x;
	string y;
	cin>>y;

	string z;

	for(int i=0; i<x.length(); i++){
		if(x[i] == 'W' && y[i] == 'W')
			z += 'B';
		else if(x[i] == 'B' && y[i] == 'B')
			z += 'W';
		else	
			z += 'B';
	}
	cout << z << endl;
}




// int main()
// {
// 	string x;
// 	cin>>x;
// 	string y;
// 	cin>>y;

// 	string z;

// 	for(int i=0; i<x.length(); i++){
// 		if(x[i] == 'W' && y[i] == 'W')
// 			z.insert(i, 1, 'B');
// 		else if(x[i] == 'B' && y[i] == 'B')
// 			z.insert(i, 1, 'W');
// 		else	
// 			z.insert(i, 1, 'B');
// 	}

// 	cout << z << endl;
// }






















// int main() 
// {
// 	string x;
// 	cin>>x;
// 	string y;
// 	cin>>y;
	
// 	for(int i=0;i<x.size();i++){
// 		if(x[i]==y[i] && (int)x[i]==66) 
// 			cout<<'W';
// 		else if(x[i]==y[i] && (int)x[i]==87) 
// 			cout<<'B';
// 		else cout<<'B';
// 	}
// 	cout<<endl;
// }