class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        st = []
        ans = {}
        for i in range(len(nums2)):
            while(st and st[-1] < nums2[i]):
                ans[st[-1]] = nums2[i]
                st.pop()
            st.append(nums2[i])
        while(st):
            ans[st[-1]] = -1
            st.pop()

        res = []
        for i in range(len(nums1)):
            res.append(ans[nums1[i]])
        return res
