#include <iostream>
import BPZ1901.Akhromeyko.Lab3.Task1;
import BPZ1901.Akhromeyko.Lab3.Task2;
import BPZ1901.Akhromeyko.Lab3.Task3;
import BPZ1901.Akhromeyko.Lab3.Task4;
import BPZ1901.Akhromeyko.Lab3.Task5;

using namespace std;
void task1(double x,  int n, double eps);
void task2(double x,  int n, double eps);
void task3(double x,  int n, double eps);
void task4(double x,  int n, double eps);
void task5(double x,  int n, double eps);
int main() {
	setlocale(LC_ALL, "Russian");
	double x;
	double y;
	double eps;
	int n;
	cout << "x = ";
	cin >> x;
	cout << "eps = ";
	cin >> eps;
	cout << "n = ";
	cin >> n;
	while (true) {
		int choose = 1;
		printf("C����� �1 - Task1\nC����� �2 - Task2\nC����� �3 - Task3");
		printf("\nC����� �4 - Task4\nC����� �5 - Task5\n����� - 6\n");
		cin >> choose;
		printf("\n");
		switch (choose) {
		case 1:
			task1(x, n, eps);
			printf("\n");
			break;
		case 2:
			task2(x, n, eps);
			printf("\n");
			break;
		case 3:
			task3(x, n, eps);
			printf("\n");
			break;
		case 4:
			task4(x, n, eps);
			printf("\n");
			break;
		case 5:
			task5(x, n, eps);
			printf("\n");
			break;
		case 6:
			return 0;
		default:
			printf("������!\n");
		}
	}
	return 0;
}

void task1(double x, int n, double eps) {
	cout << "f1(" << x << ") : " << RBPO::Lab3::Task1::f1(x) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task1::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task1::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task1::f4(eps) << endl;
}

void task2(double x, int n, double eps) {
	cout << "f1(" << x << ") : " << RBPO::Lab3::Task2::f1(x) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task2::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task2::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task2::f4(eps) << endl;
}

void task3(double x, int n, double eps) {
	cout << "f1(" << x << ") : " << RBPO::Lab3::Task3::f1(x) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task3::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task3::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task3::f4(eps) << endl;
}

void task4(double x, int n, double eps) {
	cout << "f1(" << x << ") : " << RBPO::Lab3::Task4::f1(x) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task4::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task4::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task4::f4(eps) << endl;
}
void task5(double x, int n, double eps) {
	cout << "f1(" << x << ") : " << RBPO::Lab3::Task5::f1(x) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task5::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task5::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task5::f4(eps) << endl;
}
