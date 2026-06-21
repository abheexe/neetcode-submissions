class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l = 0
        currProfit = 0
        maxProfit = 0
        for r in range(len(prices)):
            currProfit = prices[r] - prices[l]
            maxProfit = max(maxProfit, currProfit)
            if(prices[r] < prices[l]):
                l = r
        
            r += 1
        return maxProfit

            