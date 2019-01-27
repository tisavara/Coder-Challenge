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
	size_t numofchars = str.size();

	
	if (numofchars == 1)
		cout << str << endl;
	else
	{
		cout << str[numofchars - 1];
		reverse(str.substr(0, numofchars - 1));
	}
}