#include"index_firs_zero.h"
int index_first_zero(int arr_size, int arr[]){
	int index_first = -1;
	for (int i=0; i<arr_size; i++){
		if (arr[i]==0){
			index_first = 1;
			break;
		}
	}
	return index_first;
}
