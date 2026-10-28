#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int i;
	int j;
	int size;
	int alloc_size;
	int *array;

	alloc_size = 2;
	array = malloc(sizeof(int) * alloc_size);

	i = 0;
	size = numsSize;
	while (i < size)
	{
		j = i+1;
		while (j < numsSize)
		{
			if (nums[i] + nums[j] == target)
			{
				array[0] = i;
				array[1] = j;
				break;
			}
			j++;
		}
		i++;
	}
	*returnSize = alloc_size;
	return (array);
}
