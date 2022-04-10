from unittest import result


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # nums = [5, 3, 7, 6]
        hashmap = {}
        result = []
        # populate the hashmap dictionary
        for i in range(len(nums)):
            hashmap[nums[i]] = i
        # hashmap = {
        #   5: 0,
        #   3: 1,
        #   7: 2,
        #   6: 3
        # }
        # O(n)
        for i in range(len(nums)):
            # calculate compliment
            complement = target - nums[i]
            # find compliment in hashmap O(1)
            if complement in hashmap and hashmap[complement] != i:
                result = [i, hashmap[complement]]
        return result
