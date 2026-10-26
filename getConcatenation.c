#include <stdio.h>
#include <stdlib.h>

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
	int	i;
	int	x;
	int	j;
	int *ans;

	ans = (int *)malloc((numsSize * 2) * sizeof(int));
	if (!ans)
		return (NULL);
	i = 0;
	x = 0;
	while (i++ < 2)
	{
		j = 0;
		while (j < numsSize )
			ans[x++] = nums[j++];
	}
	return (ans);
}
