#include <iostream>

void insertionSort(int* arr, const int size);

int main() {
		int arr[] = {29, 10, 14, 37, 13};
		int size = sizeof(arr) / sizeof(arr[0]);
		insertionSort(arr, size);
		for(int ix = 0; ix < size; ++ix) {
				std::cout << arr[ix] <<"  ";
		}
}

void insertionSort(int* arr, const int size) {
		for(int unsorted = 1; unsorted < size; ++unsorted) {
				int key = arr[unsorted];
				int loc = unsorted;
				while((loc > 0) && (arr[loc - 1] > key)) {
						arr[loc] = arr[loc - 1];
						--loc;
				}
				arr[loc] = key;
				
		}
}
