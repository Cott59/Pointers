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

	// ��������� �� ����������
	//n = 10; m = 45;
	//std::cout << " n= " << n << std::endl;
	//std::cout << " &n= " << &n << std::endl; // ��������� ������ �������

	//int* pn = &n; // �������� ���������� ������������� �� ���������� n
	//
	//std::cout << " pn= " << pn << std::endl; // ����� ������ ����������� � ��������� 
	//std::cout << " *pn= " << *pn << std::endl;/* ����� n ����� �������������*/
	//*pn = 15;
	//std::cout << " ����� n = " << n << std::endl;
	//pn = &m; // ��������������� ��������� �� ����� m
	//std::cout << " m= " << m << std::endl;
	//std::cout << " &m= " << &m << std::endl;
	//std::cout << " pn= " << pn << std::endl;
	//std::cout << " *pn= " << *pn << std::endl;

	//int* pm = &m;

	// ��������� � �������
	//const int size = 5;
	//int arr[size]{ 4, 5,6,7,88 };
	//int* pa2 = &arr[2];
	//std::cout << " *pa2 = " << *pa2 << std::endl;
	//pa2++;
	//std::cout << " *pa2 = " << *pa2 << std::endl;
	//pa2 -= 2;
	//std::cout << " *pa2 = " << *pa2 << std::endl;
	//pa2 = &arr[0];
	//std::cout << " ������ \n";
	//for (int i = 0; i < size; i++)
	//	std::cout << *(pa2 + i) << ' ';
	//std::cout << std::endl;

	//std::cout << "arr= " << arr << std::endl;
	//std::cout << "arr+1= " << arr+1 << std::endl;


	// ��������� � �������
	n = 7; m = 3;
	std::cout << n << ' ' << m << std::endl;
	//my_swap(n, m); // �� ��������, �.� ��������� ��� �����

	p_swap(&n, &m);

	std::cout << n << ' ' << m << std::endl;





	return 0;
}