class Solution:
    def count_non_minimum(self, nums):
        minimum=min(nums)
        count=0
        for x in nums:
            if x!=minimum:
                count+=1
        return count
        # write your code here
        

