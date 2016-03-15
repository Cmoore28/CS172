#include <iostream>
#include <string>
#include <stack>

using std::string;
using std::stack;
using std::cout;
using std::cin;
using std::endl;

bool isPalindrome(const string& s)
{
	string possiblePal;
	string input = s;
	stack<char> palCheck;

	for (int i = 0; i < input.size(); i++)
	{
		palCheck.push(input[i]);
	}
	for (int i = 0; i < input.size(); i++)
	{
		possiblePal[i] = palCheck.top();
		palCheck.pop();
	}

	if (input == possiblePal)
	{
		cout << "Yay! That word is a palindrome! \n";
		return true;
	}
	else
	{
		cout << "Woops, I guess that one's not a palindrome :( \n";
		return false;
	}
}