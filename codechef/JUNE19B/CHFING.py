mod = 1000000007
t = int(input())
for _ in range(t):
    N, K = map(int, input().split())
    d = 1-N
    l = K-1
    n = ((K-1)/(N-1))+1
    res = (n*(2*l+(n-1)*d))//2
    print(int(res) % mod)