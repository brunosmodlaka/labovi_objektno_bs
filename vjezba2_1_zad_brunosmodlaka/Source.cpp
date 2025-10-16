#include <iostream>
using namespace std;

int* funkcija(int n) {
	int* novi = new int[n + 1];
	novi[0] = 1;
	novi[1] = 1;

	for (int i = 2; i < n; i++) {
		novi[i] = novi[i - 1] + novi[i - 2];
	}

	return novi;
}

int main() {
	int n = 10;
	int* rezultat = funkcija(n);

	for (int i = 0; i < n; i++) {

		cout << rezultat[i] << " ";
	}
	cout << endl;
	delete[] rezultat;
	rezultat = nullptr;

	return 0;
}
