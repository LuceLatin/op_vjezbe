#include "header.hpp"


//sortiranje niza.Napišite specijalizaciju te
//funkcije za niz char - ova u kojoj neæe biti razlike izmeðu malih i velikih slova.

template<typename T>
void sort(T arr[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; i < j; j--) {
			if (arr[j] < arr[j - 1])
				swap(arr[j], arr[j - 1]);
		}
	}
}

template<>
void sort<char>(char arr[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; i < j; j--) {
			if (tolower(arr[j]) < tolower(arr[j - 1]))
				swap(arr[j], arr[j - 1]);
		}
	}
}

int main()
{
	//zad1
	char array2[] = { 'L', 'p', 'l','m','o','O', 'K', 't', 'K','M','d','U' };
	int n = sizeof(array2) / sizeof(array2[0]);
	sort<char>(array2, n);
	cout << "Example: " ;
	for (int i = 0; i < n; i++)
		cout << array2[i] << " ";
	cout << endl;

	//zad2
	Stack<int> stack;
	stack.push(7);
	stack.push(5);
	stack.push(3);
	cout << "Removed element: " << stack.pop() << endl;

}