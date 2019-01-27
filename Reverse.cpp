#include <iostream>
#include <string>
using namespace std;

void reverse(const string& a);

int main()
{
	string str;
	cout << "Input:";
	getline(cin, str);
	cout << "Output:";
	reverse(str);
	system("pause");
	return 0;
}

void reverse(const string & str)
{
	size_t numOfChars = str.size();

	
	if (numOfChars == 1)
		cout << str << endl;
	else
	{
		cout << str[numOfChars - 1];
		reverse(str.substr(0, numOfChars - 1));
	}
}