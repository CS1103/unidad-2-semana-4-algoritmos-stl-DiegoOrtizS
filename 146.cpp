#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

template <typename T>
void permutaciones(T str)
{
	T temp = str;
	sort(temp.begin(), temp.end());

	while (next_permutation(temp.begin(), temp.end()));

	next_permutation(str.begin(), str.end());

	if (str == temp)
		cout << "No Successor" << endl;
	else
		cout << str << endl;
};

int main()
{
	string str = "";

	while (str != "#")
	{
		do
		{
			cout << "String: ";
			cin >> str;
		} while (str.length() > 50);
		permutaciones(str);
	}

	return 0;
}