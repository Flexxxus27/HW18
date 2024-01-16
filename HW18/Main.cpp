#include <iostream>


int Sum(int num1, int num2 = 0, int num3 = 0, int num4 = 0, int num5 = 0) {
	return num1 + num2 + num3 + num4 + num5;
}

inline double midlAr(double num1, double num2, double num3) {
	return (num1 + num2 + num3) / 3;
}

int Max(int num1, int num2, int num3) {
	std::cout << "Тип данных INT" << std::endl;
	int max = num1;
	if (max < num2)
		max = num2;
	if (max < num3)
		max = num3;
	return max;
}
double Max(double num1, double num2, double num3) {
	std::cout << "Тип данных DOUBLE" << std::endl;
	double max = num1;
	if (max < num2)
		max = num2;
	if (max < num3)
		max = num3;
	return max;
}
short Max(short num1, short num2, short num3) {
	std::cout << "Тип данных SHORT" << std::endl;
	short max = num1;
	if(max < num2) {
		max = num2;
	}
	if(max < num3) {
		max = num3;
	}
	return max;
}

template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++) {
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b }" << std::endl;
}

template <typename T>
void arr_null(T arr, const int length) {
	for (int i = 0; i < length; i++) {
		if(arr[i] < 0)
			for (int j = i + 1; j < length; j++) {
				arr[j] = 0;
			}
	}

}


int main() {
	setlocale(0, "");
	int n;

	//Задача 1.

	std::cout << "Задача 1.\n\n";
	std::cout << "Сумма чисел = " << Sum(2, 5, 3, 7, 5) << std::endl;

	//Задача 2. 

	std::cout << "Задача 2.\n\n";
	std::cout << "Среднее арифметическое --> " << midlAr(2, 5, 4) << std::endl;

	//Задача 3. 
	
	std::cout << "Задача 3.\n\n";
	std::cout << "Наибольшее число -> " << Max(2, 3, 5) << "\n\n";
	std::cout << "Наибольшее число -> " << Max(2.2, 3.4, 5.1) << std::endl;
	
	//Задача 4.

	std::cout << "Задача 4.\n\n";
	const int size = 5;
	int arr[size]{ 2, 10, -2, 5, 7 };
	print_arr(arr, size);
	arr_null(arr, size);
	print_arr(arr, size);


	return 0;
}


