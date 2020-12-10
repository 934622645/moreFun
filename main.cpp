#include "include/QuikSort.h"

int main()
{
	int array[200]={10,2,4,20,50,20,82,12};
	QuickSort(array,0,7);
	display(array,8,20);
	return 0;
}