class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp = {}

        for i in nums:
            if i not in mp:
                mp[i] = 0

            mp[i] += 1

        ans = sorted(mp, key=mp.get, reverse=True)

        return ans[:k]