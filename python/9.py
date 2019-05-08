import sys
import copy

class Solution(object):
    def isPalindrome(self, x):
        a = map(str,str(x))

        b = a[::-1]

        return a==b

