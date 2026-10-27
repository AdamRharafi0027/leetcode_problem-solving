#include <stdlib.h>
#include <stddef.h>
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
	size_t	allocation_size;
	size_t	i;
	size_t	x;
	size_t	j;
	int *ans;

	allocation_size = numsSize;
	ans = malloc(allocation_size * sizeof(int));
	i = 0;
	x = n;
	j = 0;
	if (!ans)
		return (NULL);
	while (j < n)
	{
		ans[i] = nums[j];
		i++;
		ans[i] = nums[x + j];
		i++;
		j++;
	}
	*returnSize = allocation_size;
	return (ans);
}
