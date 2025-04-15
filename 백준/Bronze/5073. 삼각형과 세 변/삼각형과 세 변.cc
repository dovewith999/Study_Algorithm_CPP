#include <iostream>
#include <vector>
#include <tuple>

enum class Eresult
{
	None,
	Invalid,
	Equilateral,
	isosceles,
	Scalene
};

bool CheckInvalid(std::tuple<int, int, int> triangle)
{
	int num1 = std::get<0>(triangle);
	int num2 = std::get<1>(triangle);
	int num3 = std::get<2>(triangle);

	if (num1 >= num2 + num3)
		return false;
	else if (num2 >= num1 + num3)
		return false;
	else if (num3 >= num1 + num2)
		return false;

	return true;
}
bool CheckEquilateral(std::tuple<int, int, int> triangle)
{
	int num1 = std::get<0>(triangle);
	int num2 = std::get<1>(triangle);
	int num3 = std::get<2>(triangle);

	if (num1 == num2 && num2 == num3 && num1 == num3)
		return false;

	return true;
}
bool CheckIsosceles(std::tuple<int, int, int> triangle)
{
	int num1 = std::get<0>(triangle);
	int num2 = std::get<1>(triangle);
	int num3 = std::get<2>(triangle);

	if (num1 == num2)
	{
		if (num1 != num3 && num2 != num3)
			return false;
	}

	else if (num1 == num3)
	{
		if (num1 != num2 && num3 != num2)
			return false;
	}

	else if (num2 == num3)
	{
		if (num2 != num1 && num3 != num1)
			return false;
	}

	return true;
}
bool CheckScalene(std::tuple<int, int, int> triangle)
{
	int num1 = std::get<0>(triangle);
	int num2 = std::get<1>(triangle);
	int num3 = std::get<2>(triangle);

	if (num1 != num2 != num3)
		return false;

	return true;
}

Eresult CheckTriangle(std::tuple<int, int, int> triangle)
{
	if (!CheckInvalid(triangle))
		return Eresult::Invalid;

	else if (!CheckEquilateral(triangle))
		return Eresult::Equilateral;

	else if (!CheckIsosceles(triangle))
		return Eresult::isosceles;

	else if (!CheckScalene(triangle))
		return Eresult::Scalene;

	return Eresult::None;
}

int main()
{
	int num1 = 0, num2 = 0, num3 = 0;

	std::vector<std::tuple<int, int, int>> trianlgles;
	
	while (true)
	{
		std::cin >> num1 >> num2 >> num3;

		if (num1 == 0 && num2 == 0 && num3 == 0)
			break;

		auto triangle = std::make_tuple(num1, num2, num3);
		trianlgles.emplace_back(triangle);
	}

	for (auto triangle : trianlgles)
	{
		switch (CheckTriangle(triangle))
		{
		case Eresult::Invalid:
			std::cout << "Invalid" << std::endl;
			break;
		case Eresult::Equilateral:
			std::cout << "Equilateral" << std::endl;
			break;
		case Eresult::isosceles:
			std::cout << "Isosceles" << std::endl;
			break;
		case Eresult::Scalene:
			std::cout << "Scalene" << std::endl;
			break;
		default:
			break;
		}
	}

	return 0;
}