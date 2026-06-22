class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        prefix = 0
        n = len(nums)
        pre = [0] * n
        for i in range(n):
            pre[i] = prefix
            prefix += nums[i]
        
        suffix = 0
        suff = [0] * n
        for i in range(n-1, -1 , -1):
            suff[i] += suffix
            suffix += nums[i]
        
        for i in range(n):
            if(pre[i] == suff[i]):
                return i
        return -1