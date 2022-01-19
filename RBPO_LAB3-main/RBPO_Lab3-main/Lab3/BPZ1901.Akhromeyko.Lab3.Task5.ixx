export module BPZ1901.Akhromeyko.Lab3.Task5;
#define M_PI
import <cmath>;

export namespace RBPO {
	namespace Lab3 {
		namespace Task5 {
			double f1(double x);
			double f2(double x);
			double a(int i);
			double f3(int n);
			double f4(double eps);
		}
	}
}

module:private;
double RBPO::Lab3::Task5::f1(double x) {
	return (2 * pow(sin(3 * M_PI - 2 * x), 2) * (pow(cos(5 * M_PI + 2 * x), 2)));
}
double RBPO::Lab3::Task5::f2(double x) {
	if (x <= 3.0) {
		return pow(x, 2) - 3 * x + 9;
	}
	else {
		return (1 / (pow(x, 3) + 6));
	}
}
double RBPO::Lab3::Task5::a(int i) {
	 return (pow(-1.0, i) * ((i + 1) / (pow(i, 3) + 2)));
}
double RBPO::Lab3::Task5::f3(int n) {
	double sum = 0.0;
	for (int i = 0; i <= n; i++) {
		sum += a(i);
	}
	return sum;
}
double RBPO::Lab3::Task5::f4(double eps) {
	double prev = a(0);
	double next = a(1);
	double sum = prev + next;
	for (int i = 2; abs(a(i) - a(i - 1)) > eps; i++) {
		sum += a(i);
	}
	return sum;
}