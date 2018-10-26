#include"index_last_zero.h"
int index_last_zero(int arr[], int arr_size){
	int index_last = -1;
	int i;
	for (i = arr_size - 1; i>=0; i--){
		if(arr[i]==0){
			index_last = i;
			break;
		}
	}
	return index_last;
}
