#include <stdbool.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
  int i;
  int j;
  int* result;
  bool resultIsFound;
  
  *returnSize = 0;
  resultIsFound = false;
  result = (int *)calloc(2, sizeof(int));
  /* for each number in the nums array */
  for(i=0; i<numsSize; i++)
  {
    /* compare it against all other number in the array */
    for(j=0; j<numsSize; j++)
    {
      /* make sure I'm not comapring myself against myself */
      if(j != i)
      {
        if(nums[i] + nums[j] == target)
        {
          /* target found */
          result[(*returnSize)++] = i;
          result[(*returnSize)++] = j;
          resultIsFound = true;
          break;
        }
      }
    }
    if(resultIsFound)
    {
      break;
    }
  }
  return result;
}