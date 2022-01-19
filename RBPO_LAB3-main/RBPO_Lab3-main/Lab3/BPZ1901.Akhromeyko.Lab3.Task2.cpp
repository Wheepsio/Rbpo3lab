#include <iostream>
#define M_PI
module BPZ1901.Akhromeyko.Lab3.Task2;

namespace RBPO {
	namespace Lab3 {
		namespace Task2 {
			double f1(double x) {
				return (2 * pow(sin(3 * M_PI - 2 * x), 2) * (pow(cos(5 * M_PI + 2 * x), 2)));
			}
			double f2(double x) {
				if (x <= 3.0) {
					return pow(x, 2) - 3 * x + 9;
				}
				else {
					return (1 / (pow(x, 3) + 6));
				}
			}
			double a(int i) { 
				return  (pow(-1.0, i) * ((i + 1) / (pow(i, 3) + 2)));
			}
			double f3(int n) {
				double sum = 0.0;
				int i = 0;
				while (i <= n) {
					sum += a(i);
					i++;
				}
				return sum;
			}
			double f4(double eps) {
				double pred = a(0);
				double sled = a(1);
				double sum = pred + sled;
				int i = 2;
				while (abs(a(i) - a(i - 1)) > eps) {
					sum += a(i);
					i++;
				}
				return sum;
			}
		}
	}
}
