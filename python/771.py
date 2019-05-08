class Solution(object):
    def numJewelsInStones(self, J, S):
        """
        :type J: str
        :type S: str
        :rtype: int
        """
        a = 0
        J = list(J)
        S = list(S)
        for i in J:
            for j in S:
                if i == j:
                    a = a+1
        return a
                    
                    