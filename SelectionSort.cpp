#include <iostream>

int getMaxOfArray(const int arr[],const int size);
void selectionSort(int arr[], const int size);
void swap(int&, int&);

int main() {
	int arr[] = {14, 33, 277, 35, 19, 42, 44};
	int size = sizeof(arr) / sizeof(int);
	selectionSort(arr, size);
	for(int ix = 0; ix < size; ++ix) {
			std::cout << arr[ix] << "  " ;
	}	
}

void selectionSort(int arr[], const int size) {
		for(int ix = size - 1; ix >= 1; --ix) {
				int maxIndex = getMaxOfArray(arr, ix + 1);
				swap(arr[maxIndex], arr[ix]);
		}
}

int getMaxOfArray(const int arr[],const int size) {

		int indexOfMax = 0;
		for(int ix = 1; ix < size; ++ix) {
			if(arr[indexOfMax] < arr[ix]) {
				indexOfMax = ix;
			}	
		}

		return indexOfMax;		

}

void swap(int& a, int& b) {
		int tmp = a;
		a = b;
		b = tmp;
}
