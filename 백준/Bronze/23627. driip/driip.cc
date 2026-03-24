#include <iostream>
using namespace std;

string inputStr;
string cuteStr = "driip";
string compareStr = "";

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> inputStr;

	int strlen = inputStr.length();

	for (int i = strlen - 5; i < strlen; ++i)
		compareStr += inputStr[i];

	if(compareStr == cuteStr)
		cout << "cute";

	else 
		cout << "not cute";

	return 0;
}
