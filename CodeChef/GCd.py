import math
t = int(input())

for _ in range(t):
	nn=input().split()
	a=int(nn[0])
	b=int(nn[1])
	n=int(nn[2])
	m = 10**9+7
	x = pow(a,n,abs(a-b))
	y = pow(b,n,abs(a-b))
	ans=(a == b) ?  print((x+y)%m):print(math.gcd((x+y)%abs(a-b),abs(a-b))%m) 