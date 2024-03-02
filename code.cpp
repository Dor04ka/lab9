#include <iostream>
using namespace std;

template <typename T>
void Foo(const T* array, size_t N) {

	T mi = array[0];      // min value
	T ma = array[0];      // max value
	for (size_t i = 1; i < N; i++) {
		mi = min(mi, array[i]);
		ma = max(ma, array[i]);
	}
	cout << "Min value in Array is " << mi << "." << endl;
	cout << "Max value in Array is " << ma << "." << endl;

}


int main() {

	int a[] = { -490, 139, 0, 67, 459083, -3472 };
	Foo(a, sizeof(a) / sizeof(a[0]));
	cout << endl;

	double b[] = { 6.23, -79.12 , 0.78, 7.452, -18, 0.12, 7.93 };
	Foo(b, sizeof(b) / sizeof(b[0]));
	cout << endl;

	char c[] = { 'A' , 'b' , 'C' , 'd' , 'E' };
	Foo(c, sizeof(c) / sizeof(c[0]));
	cout << endl;

	string d[] = { "123", "9", "56", "29", "10000", "78" };
	Foo(d, sizeof(d) / sizeof(d[0]));

}