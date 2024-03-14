// 16.5.Практическая работа с массивами данных и преобразованием типов данных


#include <iostream>
#include <time.h>

using namespace std;


int main()
{
	const int N = 5;
	int array[N][N];
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			array[i][j] = i + j;
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);
	int CurrentDay = buf.tm_mday;
	cout << endl << "Current day of the month: " << CurrentDay << endl;
	
	int Row = CurrentDay % N;
	int SumOfRow = 0;
	for (int k = 0; k < N; ++k)
	{
		SumOfRow += array[Row][k];
	}
	cout << "The sum of the elements in the " << Row+1 << " row: " << SumOfRow << endl;	
}
