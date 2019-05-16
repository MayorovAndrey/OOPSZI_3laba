#include <iostream>
#include <math.h>
#include "func.h"

using namespace std;
using namespace for_loop;

int main()
{

	int k;
	double n;

	while(true)
	{
		printf("1) Zadanie 1\n");
		printf("2) Zadanie 2\n");
		printf("3) Zadanie 3\n");
		printf("4) Zadanie 4\n");
		printf("5) Zadanie 5\n");
		printf("6) Vykhod\n");

		cin >> k;

		switch(k)
		{
			case 1:
				printf("Vvedite n:\n");

				cin >> k;
				cout << "Result: " << summ(k) << endl;
				break;
			case 2:
				printf("Vvedite epsilon:\n");

				cin >> n;
				cout << "Result: " << endl;
				cout << summ2(n) << endl;
				break;
			case 3:
				printf("Vvedite n, k:\n");

				cin >> n;
				cin >> k;
				print(n, k);
				break;
			case 4:
				printf("Vvedite epsilon:\n");

				cin >> n;
				cout << "Result: " << findFirstElement(n) << endl;
				break;
			case 5:
				printf("Vvedite epsilon:\n");

				cin >> n;
				cout << "Result: " << findFirstNegativeElement(n) << endl;
				break;
			case 6:
				return 1;
			default:
				break;
		}
	}

	return 0;
}