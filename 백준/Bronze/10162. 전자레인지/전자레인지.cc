#include <iostream>
#include <vector>

using namespace std;

const int ButtonA = 300;
const int ButtonB = 60;
const int ButtonC = 10;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cookingTime = 0;
	cin >> cookingTime;

	if (cookingTime % 10 != 0)
	{
		cout << -1 << '\n';
		return 0;
	}

	int countOfPressA = 0;
	int countOfPressB = 0;
	int countOfPressC = 0;

	while (cookingTime > 0)
	{
		if (cookingTime >= ButtonA)
		{
			cookingTime -= ButtonA;
			++countOfPressA;
		}

		else if(cookingTime >= ButtonB)
		{
			cookingTime -= ButtonB;
			++countOfPressB;
		}

		else if(cookingTime >= ButtonC)
		{
			cookingTime -= ButtonC;
			++countOfPressC;
		}
	}

	cout << countOfPressA << " " << countOfPressB << " " << countOfPressC << '\n';

	return 0;
}