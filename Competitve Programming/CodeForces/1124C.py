t = int(input())
while t:
    t -= 1
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    score = 0
    while n > 0:
        l = k - 1
        r = n - k
        if l >= n or r < 0:
            break
        if arr[l] >= arr[r]:
            score += arr[l]
            arr.pop(l)
        else:
            score += arr[r]
            arr.pop(r)
        n -= 1
    print(score)