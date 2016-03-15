//Cassadie Moore
//Homework 3; programming exercise 10.5
//Checking for palindromes

#include <iostream>
#include <string>
#include <stack>

//this is me avoiding carrying around the websters dictionary
//instead, I just ripped out the pages I need xD
using std::string;
using std::stack;
using std::cout;
using std::cin;
using std::endl;

bool isPalindrome(const string& s);//function prototype to let int main know it's a thing

int main()
{
	string word;//setting a variable for the user to input
	cout << "Please enter a word. I will check to see if it is a palindrome: ";//asking for a word
	cin >> word;//bringing the word into the compiler
	cout << endl;
	isPalindrome(word);//and now we delve into the function to check if the word is a palindrome

	return 0;
}

bool isPalindrome(const string& s)
{
	string possiblePal = "";/*this is the string that will hold the reverse of the input and will check
							to see if the word the user entered is indeed a palindrome*/
	string input = s;//this is what the user inputted, just given a different name
	stack<char> palCheck;//this stack will help me reverse the word the user gave me

	for (int i = 0; i < input.size(); i++)/*this loop goes through and converts all of the chars in the string the user gave
										  me to upper case letters in order to avoid any case sensative words*/
	{
		input[i] = toupper(input[i]);
	}
	for (int i = 0; i < input.size(); i++)/*this loop pushes all of the chars in the string the user gave me into
										  the stack I created*/
	{
		palCheck.push(input[i]);
	}
	for (int i = 0; i < input.size(); i++)/*this loop adds the top char of the stack to my palindrome checking string
										  and then pops the top char off of the stack while goign through the whole size
										  of the stack*/
	{
		possiblePal += palCheck.top();
		palCheck.pop();
	}

	if (input == possiblePal)/*this if else will check to see if the input is the same as
							 the reverse of said input and will spit out a message according
							 to whether the input and reverse are the same and thus a palindrome
							 or elsewise not.*/
	{
		cout << "Yay! That word is a palindrome! \n";
		return true;//the bool function is true if we found a palindrome
	}
	else
	{
		cout << "Woops, I guess that one's not a palindrome :( \n";
		return false;//the bool function is false if there's not a palindrome
	}
}