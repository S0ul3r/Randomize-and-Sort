#include "Header.h"

void visiting_card(char *p)
{
	printf("\311");
	int k = strlen(p);
	for (int i = 0; i < k - 2; i++) {
		printf("\315");
	}
	printf("\273\n");
	printf("%s", p);
	printf("\n\272 Wydzia\210 Elektroniki");
	int n = strlen(" Wydzia\210 Elektroniki");
	if (n < k) {
		for (int i = 0; i < k - (n + 2); i++) printf(" ");
	}
	printf("\272\n");
	printf("\310");
	for (int i = 0; i < k - 2; i++) {
		printf("\315");
	}
	printf("\274\n\n");
}