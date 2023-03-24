//Practice Switch, Continue, Break, For Loop, While Loop, do While Loop in C++

#include<iostream>
using namespace std;

int main() {

	int arr[5] = { 1,2,3,4,5 }, choice = 0;

	for (int l = 0; l < 5;l++) {

		cout << "\nenter a number between 1-5: ";
		cin >> choice;

		switch (choice) {

		case 1: {
			for (int i = 0; i < 5;i++)
			{
				cout << "\nIn for loop: number - " << arr[i];
			}
			break;
		}

		case 2: {
			int j = 0;
			while (j < 5)
			{
				cout << "\n In while loop: number - " << arr[j];
				j++;
			}
			break;

		}

		case 3: {
			int k = 0;
			do {
				cout << "\n In do while loop: number - " << arr[k];
				k++;
			} while (k < 5);
			break;
		}

		case 4: {

			for (int i = 0; i < 5;i++)
			{
				if (i == 4)
					continue;

				cout << "\nIn for loop with continue: number - " << arr[i];
			}
			break;
		}

		default:
			cout << "\nin default";

		}
	}




	return 0;
}
