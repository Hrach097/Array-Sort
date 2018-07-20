#include <iostream>

void bubbleSort(int* arr, const int size);

int main() {
	int arr[] = {29, 10, 14, 37, 13};
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, size);
	for(int ix = 0; ix < size; ++ix) {
			std::cout << arr[ix] << "  ";
	}
}

void bubbleSort(int* arr, const int size) {
		bool sorted = false;
		int pass = 0;
		while(!sorted && (pass < size - 1) ) {
				sorted = true;
				for(int ix = 0; ix < size - 1; ++ix) {
						if(arr[ix] > arr[ix + 1]) {
								std::swap(arr[ix], arr[ix + 1]);
								sorted = false;
						}
				}
				++pass;
		}
}
