class Solution(object):
    def maxProfit(prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        p1 = prices[0]
        i = 1
        profit = 0

        while i <= len(prices)-1:
            if i < len(prices)-1 and prices[i] >= p1:
                i += 1
                while i < (len(prices)-1) and prices[i] >= prices[i-1]:
                    i += 1
                
                if prices[i] >= prices[i-1]:
                    profit += prices[i] - p1
                    break

                profit += prices[i-1] - p1
                p1 = prices[i]
            
            elif prices[i] >= p1 :
                profit = prices[i] - p1
                i += 1

            else:
                p1 = prices[i]
                i += 1
        
        return profit
    
    print(maxProfit([1,2]))