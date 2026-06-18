class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        def product(curridx):
            prod = 1
            for i in range(len(nums)):
                if(i != curridx):
                    prod = prod * nums[i]
            return prod
        
        
        curridx = 0;
        mylist = [];

        while(curridx < len(nums)):
            mylist.append(product(curridx))
            curridx += 1

        return mylist


        
        

                