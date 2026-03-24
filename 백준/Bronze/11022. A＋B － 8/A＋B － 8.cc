#include <iostream>

int main()
{
	int n;

	int a, b;

	std::cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		std::cin >> a >> b;

		std::cout << "Case #" << i << ": " << a << " + " << b << " = "<<  a + b << std::endl;
	}

	return 0;

}