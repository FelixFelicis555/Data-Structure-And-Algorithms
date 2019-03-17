if __name__ == '__main__':
	t=int(input())
	for _ in range(t):
		nm=input().split()
		n=int(nm[1])
		m=int(nm[0])
		a=m%3
		b=n%3
		c=(a*b)%3
		print(c)