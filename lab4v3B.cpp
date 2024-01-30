#include <iostream>

using namespace std;

int main() {
	int size;
	cout << "Введите размер массива: ";
	cin >> size;
	int * arr = new int[size];
	int i, k, num, b, max_b;
	for (i = 0; i < size; ++i) {
		cin >> arr[i];
	}
	cout << endl;
	num = arr[0];
	max_b = 1;
	for (i = 0; i < size ; ++i) {
		b = 1;
		for (k = i + 1; k < size; ++k)
			if (arr[i] == arr[k]) b++;
		if (b > max_b) {
			max_b = b;
			num = arr[i];
		}
	}
	delete[] arr;
	if (max_b > 1) cout << max_b << " раз(а) встречается число " << num << endl;
	else cout << "Все элементы встречаются только один раз"<<endl;
}