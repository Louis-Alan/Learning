def maxSum(arr, k):
    i = 0
    j = 0
    size = len(arr)
    summ = 0
    maxS = 0

    while(j < size):
        summ += arr[j]
        if(j - i + 1 == k):
            maxS = max(summ, maxS)
            summ -= arr[i]
            i += 1
        j += 1

    return maxS

arr = [2, 5, 1, 8, 2, 9, 1]
windowSize = 3
print(maxSum(arr, windowSize))