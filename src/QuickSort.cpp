#include "../include/QuikSort.h"

void display(int *array,int size , int hang){
	for(int i = 0;i < size; i++){
		printf("%d ",array[i]);
		if(i!=0&&i%hang==0){
			printf("\n");
		}
	}
	printf("\n");
}

void QuickSort(int *array, int left, int right){
	if(left<right){
		int zuo = left;
		int midnum = array[left];
		int you = right;
		while(zuo < you){
			while(zuo < you && array[you] >= midnum){
				you -- ;
			}
			if(zuo < you){
				array[zuo] = array[you];
			}
			while(zuo < you && array[zuo] <= midnum){
				zuo ++;
			}
			if(zuo < you){
				array[you] = array[zuo];
			}
		}
		array[zuo] = midnum;
		QuickSort(array,left,zuo -1);
		QuickSort(array,zuo+1,right);
	}
}

