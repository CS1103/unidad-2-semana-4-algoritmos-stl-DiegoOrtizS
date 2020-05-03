#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const int size_ = 3;

template <typename T>
void Ejerciciop482(array<T, size_> a1, array<T, size_> a2)
{
	array<T, size_> temp = a1, temp2;

	sort(temp.begin(), temp.end());

	for (int i = 0; i < a1.size(); ++i)
	{
		for (int j = 0; j < a1.size(); ++j)
		{
			if (a1[i] == temp[j])
			{
				temp2[j] = a2[i];
				break;
			}
		}
	}

	for (const auto& it : temp2)
		cout << it << ' ';
	cout << endl;
}

int main()
{
	int n, k;

	array<double, size_> a1, a2, a3 = {};

	cin >> n;

	cout << endl;
	cout << endl;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < size_ * 2; ++j)
		{
			if (j < size_)
			{
				cin >> a1[j];
			}

			else
			{
				k = j - size_;
				cin >> a2[k];
			}
		}

		Ejerciciop482(a1, a2);
		a1 = a3;
		a2 = a3;
		cout << endl;
		cout << endl;
	}

	return 0;
}