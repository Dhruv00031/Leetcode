class Solution:
    def checkDivisibility(self, n: int) -> bool:
        temp = n
        dig = 0
        pro = 1
        while temp != 0:
            digit = temp % 10
            dig += digit
            pro *= digit

            temp //= 10

        ans = pro + dig

        if n % ans == 0:
            return True

        else:
            return False