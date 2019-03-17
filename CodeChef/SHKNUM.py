
import math
def power_two(n):
    return int(math.log(n, 2))
def gre_power_two(n):
	p = 1
	if (n and not(n & (n - 1))):
		return n
	while (p < n) :
		p <<= 1
	return p


if __name__ == '__main__':
	t=int(input())
	for _ in range(t):
		n=int(input())
		a=power_two(n)
		b=2**a
		if(b==n):
			a=a-1
			b=2**a
		#print(b)
		k=n-b
		a1=power_two(k)
		if(a1==a):
			a1=a1-1
		b1=2**a1
		if(b1==k):
			ans=0
		else:
			ans=k-b1
		a2=gre_power_two(k)
		if (a2==a):
			a2=a2+1
		b2=2**a2
		aa=b2-k
		h=gre_power_two(n)
		bb=2**h
		bb=bb+1-n

		if(ans>aa):
			ans=aa
		if(ans>bb):
			ans=bb

		print(ans)

