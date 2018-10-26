#include"index_firs_zero.h"
#include"index_last_zero.h"
#include"sum_between.h"
#include"sum_before_and_after.h"
int main(){
	int result;
        int number,arr[100];
        int arr_size=0;
        scanf("%d",&number);
        while(getchar()!='\n'){
                scanf("%d",&arr[arr_size]);
                arr_size++;
        }

        switch (number) {
        case 0:{
                result = index_first_zero (arr_size, arr);
                break;
        }
        case 1:{
                result = index_last_zero (arr, arr_size);
                break;
        }
        case 2:{
                result = sum_between (arr, arr_size);
                break;
        }
        case 3:{
                result = sum_before_and_after (arr, arr_size);
                break;
        }
        default:{
                result = -1;
                break;
        }
        }
        if (result == -1)
                printf("Данные некорректны\n");
        else
                printf("%d\n", result );

        return 0;
}
