n,k = map(int, input().split())
if((n//2) + (n%2!=0)<k):
    rem = k - (n//2) - (n%2!=0)
    ans = 2*(rem)
else:
    ans = 2*(k-1) + 1

print(ans)