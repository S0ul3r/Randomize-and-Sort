#include "Header.h"

int main()
{
	int size, start, end;
	printf("Give a number how large the table should be: ");
	scanf_s("%d", &size);
	printf("Enter the numerical range of random, starting number: ");
	scanf_s("%d", &start);
	printf("End: ");
	scanf_s("%d", &end);
	int* arr = new int[size];
	randomizer(arr, size, start, end);
	for (int i = 0; i < size; i++)printf("%d, ", arr[i]);
	printf("\n\n");
	printf("Press anything to sort an array\n\n");
	_getch();

	sort(arr, size);
	for (int i = 0; i < size; i++)printf("%d, ", arr[i]);
	delete[] arr;
	printf("\n\nPress anything to close program");
	_getch();
	_getch();

	return 0;
}