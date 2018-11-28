#include "Header.h"

int main()
{
	int size, start, end;
	bool type;
	printf("Give a number how large the table should be: ");
	scanf_s("%d", &size);
	printf("Enter the starting number for random value generator: ");
	scanf_s("%d", &start);
	printf("End: ");
	scanf_s("%d", &end);
	printf("\n");
	int* arr = new int[size];
	randomizer(arr, size, start, end);
	for (int i = 0; i < size; i++)printf("%d, ", arr[i]);
	printf("\n\nChoose if the table should be ascending (press 0) or descending (press 1): ");
	scanf_s("%d", &type);
	printf("\n\n");

	if (type == 0) {
		sortasc(arr, size);
		for (int i = 0; i < size; i++)printf("%d, ", arr[i]);
	}
	else if (type == 1) {
		sortdesc(arr, size);
		for (int i = 0; i < size; i++)printf("%d, ", arr[i]);
	}
	else {
		printf("You put the wrong value");
	}
	delete[] arr;
	printf("\n\nPress anything to close program");
	_getch();
	_getch();
	return 0;
}
