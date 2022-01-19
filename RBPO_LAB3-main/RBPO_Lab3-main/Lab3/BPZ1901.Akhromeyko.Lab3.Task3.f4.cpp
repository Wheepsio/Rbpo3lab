module BPZ1901.Akhromeyko.Lab3.Task3;

namespace RBPO {
	namespace Lab3 {
		namespace Task3 {
			double f4(double eps) {
				double pred = a(0);
				double sled = a(1);
				double sum = pred + sled;
				int i = 2;
				do {
					sum += a(i);
					i++;
				} while (abs(a(i) - a(i - 1)) > eps);
				return sum;
			}
		}
	}
}