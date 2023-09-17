#include <iostream>

using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial()
{
	int n;
	int fact = 1;

	cout << "Enter a positive integer: ";
	cin >> n;

	if (n < 0)
		cout << "Error! Factorial of a negative number doesn't exist.";
	else
	{
		for (int i = 1; i <= n; i++)
		{
			fact *= i;
			if (i != n)
				std::cout << i << " * ";
			else
				std::cout << n << " = ";
		}
		cout << fact;
	}
}
void arithmetic() {
	int n1, df, n2, i, ln;
	int s1 = 0;
	cout << "Find out the sum of A.P.";
	cout << endl;
	cout << "Starting Number: ";
	cin >> n1;

	cout << "Number OF: ";
	cin >> n2;

	cout << "Difference: ";
	cin >> df;

	s1 = (n2 * (2 * n1 + (n2 - 1) * df)) / 2;
	ln = n1 + (n2 - 1) * df;

	cout << "The Sum of the  A.P. series are : " << endl;
	for (i = n1; i <= ln; i = i + df)
	{
		if (i != ln)
			cout << i << " + ";
		else
			cout << i << " = " << s1 << endl;
	}
}
void geometric()
{
	int a, r, n;

	cout << "Enter the start number" << endl;
	cin >> a;
	cout << "Enter the number of times" << endl;
	cin >> n;
	cout << "Enter the Ratio" << endl;
	cin >> r;

	for (int i = 1; i <= n; i++) {

		a = a * r;
		cout << " " << a;
	}

}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			cout << "maybe pick a actual number i can use next time" << endl;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << endl;
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}