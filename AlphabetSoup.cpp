#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cout << "Input:";
	getline(cin, str);
	cout << "Output:";
	int i, t[256][1];
	for (i = 0; i < 256; i++)
		t[i][0] = 0;
	for (i = 0; str[i]; i++)
		t[str[i] & 0xFF][0]++;
	for (i = 0; i < 256; i++)
		while (t[i][0]--)
			putchar(i);
	puts("");
	system("pause");
	return 0;
}

