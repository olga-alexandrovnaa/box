#include"sum_between.h"
#include"index_last_zero.h"
#include"index_firs_zero.h"
int sum_between(int arr[], int arr_size){
	int sum_between = 0;
	int index_first, index_last;
	index_first = index_first_zero(arr_size, arr);
	index_last = index_last_zero(arr, arr_size);
	for (int i = index_first + 1; i < index_last; i++){
		sum_between += abs(arr[i]);
	}
	if (index_first == -1)
		sum_between = -1;
return sum_between;
}
