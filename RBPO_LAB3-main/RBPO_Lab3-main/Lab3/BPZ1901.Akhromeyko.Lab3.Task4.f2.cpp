#include <iostream>
module BPZ1901.Akhromeyko.Lab3.Task4:f2;

namespace RBPO {
	namespace Lab3 {
		namespace Task4 {
			double f2(double x) {
				if (x <= 3.0) {
					return pow(x, 2) - 3 * x + 9;
				}
				else {
					return (1 / (pow(x, 3) + 6));
				}
			}
		}
	}
}