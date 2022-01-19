#include <iostream>
#define M_PI
module BPZ1901.Akhromeyko.Lab3.Task1;

namespace RBPO {
	namespace Lab3 {
		namespace Task1 {
			double f1(double x) {
				return (2*pow(sin(3*M_PI-2*x),2)*(pow(cos(5*M_PI+2*x),2)));
			}
			double f2(double x) {
				return (x <= 3.0) ? (pow(x,2)-3*x+9) : (1/(pow(x,3)+6));
			}
			double a(int i) {
				return  (pow(-1.0, i) * ((i+1)/(pow(i,3)+2)));
			}
			double f3(int n) {
				double sum = 0.0;
				for (int i = 0; i <= n; i++) {
					sum += a(i);
				}
				return sum;
			}
			double f4(double eps) {
				double pred = a(0);
				double sled = a(1);
				double sum = pred+sled;
				for (int i = 2; abs(a(i) - a(i - 1)) > eps; i++) {
					sum += a(i);
				}
				return sum;
			}
		}
	}
}
