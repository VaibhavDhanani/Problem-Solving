class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        map_st = {}
        map_ts = {}

        for c1, c2 in zip(s, t):
            if map_st.get(c1, c2) != c2 or map_ts.get(c2, c1) != c1:
                return False

            map_st[c1] = c2
            map_ts[c2] = c1

        return True