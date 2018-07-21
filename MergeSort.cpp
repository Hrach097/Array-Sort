#include <iostream>                                                                                            

void merge(int*, int, int, int);                                                                              
void sort(int*, int, int);                                                                                    
void printArr(int*, int);                                                                                     

int main() {                                                                                                  

		int arr[] = {38, 27, 43, 3, 9, 82, 10, -9, 978};                                                               
		int size = sizeof(arr) / sizeof(arr[0]);                                                              
		sort(arr, 0, size - 1);                                                                               
		printArr(arr, size);                                                                                           

}                                                                                                             

void merge(int* arr, int low, int mid, int high) {                                                            

		int tmpArr[high];                                                                         
		int first1, first2, ix;                                                                               
		for(first1 = low, first2 = mid + 1, ix = low; first1 <= mid && first2 <= high; ++ix) {              

				if(arr[first1] <= arr[first2]) {                                                              
						tmpArr[ix] = arr[first1++];                                                              
				} else {                                                                                      
						tmpArr[ix] = arr[first2++];                                                              
				}                                                                                             

		}                                                                                                     

		while (first1 <= mid) {                                                                               
				tmpArr[ix++] = arr[first1++];                                                                   
		}                                                                                                     
		while (first2 <= high) {                                                                              
				tmpArr[ix++] = arr[first2++];                                                                   
		}         

		for(int i = low; i <= high; ++i) {                                                                       
				arr[i] = tmpArr[i];                                                                              
		}                                                                                                     

}	 

void sort(int* arr, int low, int high) {                                                                      

		int mid;                                                                                              
		if(low < high) {                                                                                      
				mid = (low + high) / 2;                                                                       

				sort(arr, low, mid);                                                                          
				sort(arr, mid + 1, high);                                                                     
				merge(arr, low, mid, high);                                                                   
		} else {                                                                                              
				return;                                                                                       
		}                                                                                                     

}                                                                                                             

void printArr(int* arr, int size) {                                                                           
		for(int ix = 0; ix < size; ++ix) {                                                                    
				std::cout << arr[ix] << "  ";                                                                 
		}                                                                                                     
}    

