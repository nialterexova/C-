#include "stdafx.h"

void func(double**A, double**B, double**C, int N) {		//ФУНКЦИЯ перемножения матриц A и B, с результатом в С. Принимает указатели на матрицы и размерность.
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			C[i][j] = 0;										//Обнуление элемента матрицы
			for (int k = 0; k < N; k++)
				C[i][j] += A[i][k] * B[k][j];					//Произведение строки на столбец А и В
		}
}

void funcPrint(double**mass, int N) {					//ФУНКЦИЯ вывода матрицы размера N
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << mass[i][j] << " ";							//Вывод элемента матрицы
		}
		cout << endl;
	}
}

int main()												//Главный код
{
	int N;
	cout << "Enter count Row and Column" << endl;				//Ввод размерности матрицы
	cin >> N;

	double **A = new double*[N];								//Создание матрицы размерности N
	double **B = new double*[N];
	double **C = new double*[N];
	for (int i = 0; i < N; i++) {
		A[i] = new double[N];
		B[i] = new double[N];
		C[i] = new double[N];
	}

	srand(time(0));												//Инициализация генератора случайных чисел

	for (int i = 0; i < N; i++) {								//Заполнение матрицы рандомными числами от 1 до 5
		for (int j = 0; j < N; j++) {
			A[i][j] =(double)rand() /(double)RAND_MAX*(5-1) + 1;
			B[i][j] =(double)rand() / (double)RAND_MAX*(5-1) + 1;
		}
	}

	func(A, B, C, N);											//Расчет произведения

	cout << endl << "Array A " << N << "x" << N << "" << endl;	//Вывод мариц
	funcPrint(A, N);
	cout << endl << "Array B " << N << "x" << N << "" << endl;
	funcPrint(B, N);
	cout << endl << "Array C " << N << "x" << N << "" << endl;
	funcPrint(C, N);

	for (int i = 0; i < N; i++) {								//Очищение памяти
		delete[] A[i];
		delete[] B[i];
		delete[] C[i];
	}
	delete[] A;
	delete[] B;
	delete[] C;

	cout << endl << "END";
	system("pause");
    return 0;
}

