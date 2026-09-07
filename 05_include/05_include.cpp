#include <iostream>
using namespace std;
int main()
{
	int N = 10;
	for (int i = 0; i < N; i++)// виконується 1 раз
	{
		for (int j = 0; j < N; j++)
		{
			if (i >= j && i + j >= N - 1)
			{
				cout << "|===|";
			}
			else {
				cout << "     ";
			}
		}
}

