#include"sum_before_and_after.h"
#include"index_first_zero.h"
#include"index_last_zero.h"
int sum_before_and_after(int arr[], int arr_size){
	int index_first, index_last;
	int sum_before_and_after = 0;
	index_first = index_first_zero(arr_size, arr);
	index_last = index_last_zero(arr, arr_size);
	int i;
	for (i = 0; i < index_first; i++){
		sum_before_and_after += abs(arr[i]);}
	int j;
	for (j = index_last +1; j < arr_size; j++){
		sum_before_and_after += abs(arr[j]);}
	if (index_first == -1)
		sum_before_and_after = -1;
	return sum_before_and_after;
}
