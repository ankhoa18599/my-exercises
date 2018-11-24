#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<stdlib.h>
#include<time.h>
using namespace std;

void input2d(vector<vector<int>> &arr, int &rows, int &columns);
void output2d(vector<vector<int>> arr);
void cover2to1(vector<vector<int>> &arr, vector<int> &arr2);
void output1d(vector<int>&arr2);
void cover1to2(vector<int> &arr2);

int main()
{
	srand(time(0));
	vector<vector<int>> arr;
	vector<int> arr2;
	int rows,columns;
	input2d(arr, rows, columns);
	output2d(arr);
	cover2to1(arr, arr2);
	sort(arr2.begin(), arr2.end());
	output1d(arr2);
	cover1to2(arr2);
	system("pause");
	return 0;
}

void input2d(vector<vector<int>> &arr, int &rows, int &columns)
{
	srand(time(0));
	cout << "Nhap so hang cua mang: ";
	cin >> rows;
	cout << "Nhap so cot cua mang: ";
	cin >> columns;
	arr.resize(rows);
	for (int i = 0; i < rows; i++)
	{
		arr.at(i).resize(columns);
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}
void output2d(vector<vector<int>> arr)
{ 
	cout << "\nMang hai chieula:\n";
	int rows = arr.size();
	int columns = arr.at(0).size();
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << setw(5) << arr[i][j];
		}
		cout << endl;
	}
}
void cover2to1(vector<vector<int>> &arr, vector<int> &arr2)
{
	int rows = arr.size();
	int columns = arr.at(0).size();
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arr2.push_back(arr[i][j]);
		}
		cout << endl;
	}
	cout << "\nMang 1 chieu:\n";
	for (int k = 0; k < arr2.size(); k++)
	{
		cout << setw(5) << arr2[k];
	}
	cout << endl;
}
void cover1to2(vector<int> &arr2, vector<vector<int>> &arr)
{
	int rows = arr.size();
	int columns = arr.at(0).size();
	int k = 0;
	vector<vector<int>> arr3;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			arr3[i][j] = arr2[k++];
		}
	}
}
void output1d(vector<int>&arr2)
{
	cout << "\nMang 1 chieu da sap xep:\n";
	for (int k = 0; k < arr2.size(); k++)
	{
		cout << setw(5) << arr2[k];
	}
	cout << endl;
}

