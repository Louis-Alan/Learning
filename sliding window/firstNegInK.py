def FirstNeg(arr, k):
    i = 0
    j = 0
    neg = []
    ans = []
    while(j < len(arr)):
        if(arr[j] < 0):
            neg.append(arr[j])
        if(j-i+1 == k):
            ans.append(neg[0])
            if(arr[i] == neg[0]):
                neg.pop(0)
            i += 1
        j += 1
    return ans

arr = [12, -1, -7, 8, 9, -15, 30, 18]
k = 3
print((FirstNeg(arr,k)))