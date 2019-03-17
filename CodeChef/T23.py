import math
if __name__ == '__main__':
	t=int(input())
	
	for _ in range(t):
		n=int(input())
		a=list(map(int,input().split()))
		r=a[0]
		for i in range(1,n):
			r=math.gcd(a[i],r)
		if (r>1):
			print("NO")
		else:
			print("YES")