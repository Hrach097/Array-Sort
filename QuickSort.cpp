#include <iostream>

int partition(int*, int, int);
void quickSort(int *, int, int);
void sortFirstMiddleLast(int*, int, int, int);
void print(int*, int);
void swap(int&, int&);


int main() {
		int arr[] = {5, 8, 6, 4, 9, 3, 7, 1, 2, -99, 257, 989, -99999};

		int size = sizeof(arr) / sizeof(arr[0]);
		print(arr, size);
		quickSort(arr, 0, size - 1);

		std::cout << std::endl;
		print(arr, size);
}

int partition(int* arr, int first, int last) {
		int mid = (first + last) / 2;
		sortFirstMiddleLast(arr, first, mid, last);
		swap(arr[mid], arr[last - 1]);
		
		int privotIndex = last - 1;
		int privot = arr[privotIndex];
		int indexFromLeft = first + 1;
		int indexFromRight = last - 2;


		bool done = false;
		while(!done) {
				while(arr[indexFromLeft] < privot) {
						++indexFromLeft;
				}

				while(arr[indexFromRight] > privot) {
						--indexFromRight;
				}

				if(indexFromLeft < indexFromRight) {
						swap(arr[indexFromRight], arr[indexFromLeft]);
						++indexFromLeft;
						++indexFromRight;
				} else {
						done = true;
				}
		}	
				swap(arr[privotIndex], arr[indexFromLeft]);
				privotIndex = indexFromLeft;
				std::cout << "    " << privotIndex;
				return privotIndex;
}

void quickSort(int* arr, int first, int last) {
		if(last - first < 3 ) {
				int mid = (first + last)/2;
				sortFirstMiddleLast(arr, first, mid, last);
				return;
		} else {
				int privotIndex = partition(arr, first, last);
				quickSort(arr, first, privotIndex);
				quickSort(arr, privotIndex + 1, last);
		}
}

void sortFirstMiddleLast(int* arr, int first, int mid, int last) {
		if(arr[first] > arr[mid]) {
				swap(arr[first], arr[mid]);
		}

		if(arr[mid] > arr[last]) {
				swap(arr[mid], arr[last]);
		}
		
		if(arr[first] > arr[mid]) {
				swap(arr[first], arr[mid]);
		}

}

void print(int* arr, int size) {
		for(int ix = 0; ix < size; ++ix) {
				std::cout << arr[ix] << "  ";
		}
}

void swap(int& a, int& b) {
		int tmp = a;
		a = b;
		b = tmp;
}
