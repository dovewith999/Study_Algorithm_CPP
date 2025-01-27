#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string numOfInput;
	cin >> numOfInput;

	int count = 0;
	int i = 0;

	char firstNum = numOfInput[0];
	char changeNum = firstNum;
	bool isChanged = false;

	while (i < numOfInput.length() - 1)
	{
		++i;

		if (numOfInput[i] == changeNum)
		{
			if (isChanged == true)
				isChanged = false;
			continue;
		}


		if(isChanged == true)
			continue;

		++count;
		isChanged = true;
	}

	cout << count << "\n";

	return 0;
}