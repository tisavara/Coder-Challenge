#include <iostream>

using namespace std;

int main()
{
	unsigned int num;
	unsigned long long result = 1;

	cout << "input: ";
	cin >> num;

	if (num < 18) {
		for (int i = 1; i <= num; ++i)
		{
			result *= i;
		}

		cout << "output:" << result << endl;
	}
	else
	{
		cout << "not result" << endl;
	}

	system("pause");
	return 0;
	
}