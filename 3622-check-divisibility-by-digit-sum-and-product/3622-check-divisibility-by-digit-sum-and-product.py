class Solution:
    def checkDivisibility(self, n: int) -> bool:
        dig = 0
        pro = 1
        for i in str(n):
            dig += int(i)
            pro *= int(i)

        if(n % (dig + pro) == 0):
            return True

        return False