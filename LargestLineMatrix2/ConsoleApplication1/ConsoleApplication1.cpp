

#include "pch.h"
#include <iostream>

using namespace std; 
int main()
{
	
	       setlocale(LC_ALL, "rus");
	

			cout<<"\nПоиск номера строки с наибольшей суммой\n";


			int A[11][11];
			int n = 10;
			int S[10];
			

			for (int i = 0; i < n; i++) {
				S[i] = 0;
			}

			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					A[i][j] = (rand()%100);
					printf("%4d", A[i][j]);
					S[i] += A[i][j];
				}
				printf ("  сумма элементов в строке равна S[%d]=%d\n", i, S[i]);
			}


			int num = 0;
			int max = S[num];
			for (int i = 0; i < n; i++) {
				if (max < S[i])
				{
					max = S[i];
					num = i;
				}
			}

			printf("\n\n\tНаибольшая сумма в строке с номером %d\n\n", num + 1);

	system("pause");
	return 0;
}

