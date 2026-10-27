#include <stddef.h>
#include <stdio.h>

int findMaxConsecutiveOnes(int* nums, int numsSize) {
	size_t	i;
	size_t	max;
	size_t	prev_max;

	i = 0;
	max = 0;
	prev_max = 0;
	while (i < numsSize)
	{
		if (nums[i] == 1)
			max++;
		else
		{
			if (max > prev_max)
				prev_max = max;
			max = 0;
		}
		i++;
	}
	if (max > prev_max)
			prev_max = max;
	return (prev_max);
}
