class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        def validSpeed(speed):
            hours_needed = 0
            for i in piles:
                hours_needed += math.ceil(i/speed)

            if(hours_needed) <= h:    
                return True
            else:
                return False
        
        
        l = math.ceil(sum(piles)/h)
        r = max(piles)

        while(l < r):
            speed = l + (r - l) // 2

            if(validSpeed(speed) == True):
                r = speed
            else:
                l = speed + 1
        return l



