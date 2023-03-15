#include <iostream>

template <typename T>
void my_swap(T num1, T num2) {

	T tmp = num1;
	num1 = num2;
	num2 = tmp;
}
template <typename T>
void p_swap(T* pnum1, T* pnum2) {
	T tmp =*pnum1;
	*pnum1 = *pnum2;
	*pnum2 = tmp;

}




int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;

	// указатели на переменные
	//n = 10; m = 45;
	//std::cout << " n= " << n << std::endl;
	//std::cout << " &n= " << &n << std::endl; // получение адреса объекта

	//int* pn = &n; // создание указаттел€ направленного на переменную n
	//
	//std::cout << " pn= " << pn << std::endl; // вывод адреса хран€щегос€ в указателе 
	//std::cout << " *pn= " << *pn << std::endl;/* вывод n через разыменование*/
	//*pn = 15;
	//std::cout << " нова€ n = " << n << std::endl;
	//pn = &m; // перенаправление указател€ на адрес m
	//std::cout << " m= " << m << std::endl;
	//std::cout << " &m= " << &m << std::endl;
	//std::cout << " pn= " << pn << std::endl;
	//std::cout << " *pn= " << *pn << std::endl;

	//int* pm = &m;

	// ”казатели и массивы
	//const int size = 5;
	//int arr[size]{ 4, 5,6,7,88 };
	//int* pa2 = &arr[2];
	//std::cout << " *pa2 = " << *pa2 << std::endl;
	//pa2++;
	//std::cout << " *pa2 = " << *pa2 << std::endl;
	//pa2 -= 2;
	//std::cout << " *pa2 = " << *pa2 << std::endl;
	//pa2 = &arr[0];
	//std::cout << " ћассив \n";
	//for (int i = 0; i < size; i++)
	//	std::cout << *(pa2 + i) << ' ';
	//std::cout << std::endl;

	//std::cout << "arr= " << arr << std::endl;
	//std::cout << "arr+1= " << arr+1 << std::endl;


	// указатели и функции
	n = 7; m = 3;
	std::cout << n << ' ' << m << std::endl;
	//my_swap(n, m); // не работает, т.к параметры это копии

	p_swap(&n, &m);

	std::cout << n << ' ' << m << std::endl;





	return 0;
}