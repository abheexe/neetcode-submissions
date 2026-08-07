class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        def canEat(k):
            hours = 0
            for i in piles:
                hours += math.ceil(i/k)
            return hours <= h

        l , r = math.ceil(sum(piles)/h) , max(piles)
        while(l < r):
            k = l + (r - l) // 2
            if(canEat(k)):
                r = k
            else:
                l = k + 1
        return l