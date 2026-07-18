class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        prefix = 0
        sums = []
        for i in nums:
            prefix += i
            sums.append(prefix)
        count = 0
        m = {}
        for i in range(len(nums)):
            tofind = sums[i] - k

            if(sums[i] == k): count += 1

            if(tofind in m): 
                count += m[tofind] 
            if(sums[i] not in m):
                m[sums[i]] = 0
            m[sums[i]] += 1
        return count
