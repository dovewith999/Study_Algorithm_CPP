#include <iostream>

int main()
{
	int numArr1[3] = { 0, 0, 0 };

	int numArr2[3] = { 0, 0, 0 };

	int num1 = 0;

	int num2 = 0;

	std::cin >> num1 >> num2;

	numArr1[0] = num1 / 100;
	numArr1[1] = (num1 - (numArr1[0] * 100)) / 10;
	numArr1[2] = num1 - (numArr1[0] * 100) - numArr1[1] * 10;

	numArr2[0] = num2 / 100;
	numArr2[1] = (num2 - (numArr2[0] * 100)) / 10;
	numArr2[2] = num2 - (numArr2[0] * 100) - numArr2[1] * 10;

	int reverseNum1 = numArr1[2] * 100 + numArr1[1] * 10 + numArr1[0];

	int reverseNum2 = numArr2[2] * 100 + numArr2[1] * 10 + numArr2[0];

	if (reverseNum1 > reverseNum2)
	{
		std::cout << reverseNum1 << std::endl;
	}

	else if(reverseNum2 > reverseNum1)
	{
		std::cout << reverseNum2 << std::endl;
	}

	else
	{
		std::cout << "잘못된 입력입니다." << std::endl;
	}


	return 0;
}