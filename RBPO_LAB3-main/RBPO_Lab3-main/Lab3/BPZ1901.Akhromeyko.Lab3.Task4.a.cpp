#include <iostream>
module BPZ1901.Akhromeyko.Lab3.Task4:a;

namespace RBPO {
	namespace Lab3 {
		namespace Task4 {
			double a(int i) {
				return  (pow(-1.0, i) * ((i + 1) / (pow(i, 3) + 2)));
			}
		}
	}
}