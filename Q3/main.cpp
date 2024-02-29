#include<iostream>
#include<string>
using namespace std;

void convert(string temp){
	string palindrome;
	for (char k : temp){
		if(isalpha(k)) palindrome += toupper(k);
		if(isspace(k)) palindrome += " ";
		if(isdigit(k)) palindrome += "*";
	}
	cout << palindrome << endl;
}

void isPalindrome(string text){
	string temp;
	if (text.size() < 1 || text.size() > 100);
	else{
		for (int i = text.size()-1; i >= 0; i--) temp += text[i];
		if (temp == text) convert(temp);
		else cout << "NO\n";
	}
}

int main(){
	string text;
	while (getline(cin, text)){
		isPalindrome(text);
	}
	return 0;
}