#include"sum_before_and_after.h"
#include"index_firs_zero.h"
#include"index_last_zero.h"
int sum_before_and_after(int arr[], int arr_size){
	int index_first, index_last;
	int sum_before_and_after = 0;
	index_first = index_first_zero(arr_size, arr);
	index_last = index_last_zero(arr, arr_size);
	for (int i = 0; i < index_first; i++){
		sum_before_and_after += abs(arr[i]);}
	for (int i = index_last +1; i < arr_size; i++){
		sum_before_and_after += abs(arr[i]);}
	if (index_first == -1)
		sum_before_and_after = -1;
	return sum_before_and_after;
}
