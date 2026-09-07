#include <iostream>
using namespace std;
int main()
{

	/*
	for(int i =0;i<7;i++)// виконується 1 раз
	{
		for (int j = 0; j < 10; j++) {
			cout << "|###|";
		}
		cout << endl;
	}


	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << "*" << j << "=" << i * j << endl;
		}
		cout << "\n____________________________________\n";
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++) {
			cout << " +";
		}
		cout << endl;
	}



	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			if (i == j)
			{
				cout << "= ";
			}
			else {
				cout << "+ ";
			}
		}cout << endl;
	}

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			if (i + j == 10-1)
			{
				cout << "= ";
			}
			else {
				cout << "+ ";
			}
		}cout << endl;
	}


		*/




		//8

	int r = 10;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r; j++)
		{
			if (i + j <= r - 1) {
				cout << "***";
			}
			else {
				cout << "   ";
			}
		}
		cout << endl;
	}


	//1

	int N = 10;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i + j >= N - 1) {
				cout << "***";
			}
			else {
				cout << "   ";
			}
		}
		cout << endl;
	}


	//2
	cout << endl;
	cout << endl;
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i <= j) {
				cout << "***";
			}
			else {
				cout << "   ";
			}
		}
		cout << endl;
	}

	//3

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i >= j) {
				cout << "***";
			}
			else {
				cout << "   ";
			}
		}
		cout << endl;
	}

	//4
	cout << endl;
	cout << endl;
	cout << endl;
	int a = 10;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (i <= j && i + j <= a - 1) {
				cout << "***";
			}
			else {
				cout << "   ";
			}
		}
		cout << endl;
	}

	//5


	int n = 10;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i >= j && i + j >= n - 1) {
				cout << "***";
			}
			else {
				cout << "   ";
			}
		}
		cout << endl;
	}

	//6
	cout << endl;
	cout << endl;
	cout << endl;
	int q = 10;
	for (int i = 0; i < q; i++)
	{
		for (int j = 0; j < q; j++)
		{
			if (i >= j && i + j <= q - 1) {
				cout << "***";
			}
			else {
				cout << "   ";
			}
		}
		cout << endl;
	}

	//7

	int w = 10;
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (i <= j && i + j >= w - 1) {
				cout << "***";
			}
			else {
				cout << "   ";
			}
		}
		cout << endl;
	}


	//===================================//

	//2
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			if (i == j)
			{
				cout << "0 ";
			}
			else {
				cout << "1 ";
			}
		}cout << endl;
	}



	//6
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << "*" << j << "=" << i * j << endl;
		}
		cout << "\n____________________________________\n";
		cout << "\n____________________________________\n";
		cout << "\n____________________________________\n";
	}


	//3
	int x = 0;
	for (int i = 10; i >= 1; --i) {
		for (int j = 0; j < i; ++j) {
			cout << i << " ";
		}
		x += i * i;
	}

	cout <<  x << endl;

	//4

	for (int row = 1; row <= 15; ++row) {
		if (row % 2 == 0) {

			for (int i = 0; i < 8; ++i) {
				cout << row << " ";
			}
		}
		else {

			for (int i = 0; i < 10; ++i) {
				cout << 1 << " ";
			}
		}

		cout << "\n__________________________\n";
	}




}