
#include <iostream>
using namespace std;

void swap1(int* x, int* y)
{
	int z = *x;
	*x = *y;
	*y = z;
}

void swap2(int& x, int& y)
{
	int z = x;
	x = y;
	y = z;
}

template<class T>
int count(T* arr, int arr_size, T x)
{
	int num_of_x = 0;
	for (int i = 0; i < arr_size; i++)
		if (x == arr[i])
			num_of_x++;

	return num_of_x;
}


int main()
{
	/* no.1 */
	/*int a = 45, b = 35;
	cout << "Before Swap1\n";
	cout << "A = " << a << " b = " << b << "\n";

	swap1(&a, &b);

	cout << "After Swap1 with pass by pointers\n";
	cout << "a = " << a << " b = " << b << "\n";*/


	/* no.2 */
	/*int a = 45, b = 35;
	cout << "Before Swap2\n";
	cout << "A = " << a << " b = " << b << "\n";

	swap2(a, b);

	cout << "After Swap2 with pass by pointers\n";
	cout << "a = " << a << " b = " << b << "\n";*/

	/* no.3 - chapter 1 - exercise 2 */
	/*int arr1[] = { 1,1,1,2,2,2,2,2,3,3,3,3 };
	//int n = sizeof(arr1) / sizeof(arr1[0]);
	int n = *(&arr1 + 1) - arr1;
	
	cout << "The number of 2 in arr1 is "
		<< count(arr1,n,2);*/


	/* no.4 - chapter 1 - exercise 8 */
	/* int abc(int a, int b, int c)
	float abc(int a, int b, int c)

	선언을 두 개 따로 해야 할 필요가 있는가?
	*/


	/* no.5 - chapter 2 - exercise 22*/
	/*	Q. swap이 몇 번 일어나는가?
	template<class T>
	void transpose(T **a, int rows)
	{
		for (int i = 0; i < rows; i++)
			for (int j = i + 1; j < rows; j++)
				swap(a[i][j], a[j][i]);
	}*/
	

	return 0;
}
