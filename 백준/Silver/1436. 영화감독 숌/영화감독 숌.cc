#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int numOfInput = 0;

	cin >> numOfInput;

	int count = 1;
	int numOfOutput = 666;
	string transStr = "";

	while(true)
	{
		transStr = to_string(numOfOutput);

		for (int i = 0; i < transStr.length() - 2; ++i)
		{
			if (transStr[i] == '6' && transStr[i + 1] == '6' && transStr[i + 2] == '6')
			{
				if (count < numOfInput)
				{
					++count;
					break;
				}
				
				cout << numOfOutput << '\n';
				return 0;
			}
		}

		++numOfOutput;
	}

	return 0;
}