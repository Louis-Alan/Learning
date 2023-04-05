def findMaxAverage(nums, k):
        i = 0
        j = 0
        summ = 0
        maxAv = 0
        while(j<len(nums)):
            summ += nums[j]
            if (j-i+1 == k):
                avg = summ
                maxAv = max(avg, maxAv)
                summ -= nums[i]
                i += 1
            j += 1

        return maxAv/k

nums = [1,12,-5,-6,50,3]
k = 4
print(findMaxAverage(nums,k))