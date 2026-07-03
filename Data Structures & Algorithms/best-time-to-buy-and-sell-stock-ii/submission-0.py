class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l = 0
        r = 0
        currProfit = 0
        maxProfit = 0
        while(r < len(prices)):
            if(prices[l] <= prices[r]):
                currProfit = prices[r] - prices[l]
                maxProfit += currProfit
            l = r
            r += 1
        return maxProfit