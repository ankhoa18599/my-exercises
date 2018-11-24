#include <iostream>
#include <conio.h>
#include<stdlib.h>//for srand
#include<time.h>//for srand
#include<iomanip>
#include<algorithm>//for swap
using namespace std;

void INPUT(int arr[][100], int &rows, int &columns);
void OUTPUT(int arr[][100], int &rows, int &columns);
void Sort2D(int arr[][100], int &rows, int &columns);
int main()
{
	int arr[100][100];
	int rows, columns;
	INPUT(arr, rows, columns);
	OUTPUT(arr, rows, columns);
	Sort2D(arr, rows, columns);
	OUTPUT(arr, rows, columns);
	system("pause");
	return 0;
}
void INPUT(int arr[][100], int &rows, int &columns)
{
	srand(time(0));
	cout << "\nNhap vao so dong cua mang:";
	cin >> rows;
	cout << "\nNhap cao so cot cua mang:";
	cin >> columns;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] = rand() % 10;
		}
		cout << endl;
	}
}
void OUTPUT(int arr[][100], int &rows, int &columns)
{
	cout << "\nDisplaying 2D array:\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << setw(5) << arr[i][j];
		}
		cout << endl;
	}
}
void Sort2D(int arr[][100], int &rows, int &columns)
{
	int n = rows*columns;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[i/columns][i%columns] > arr[j/columns][j%columns])
			{
				swap(arr[i / columns][i%columns] ,arr[j / columns][j%columns]);
			}
		}
	}
}