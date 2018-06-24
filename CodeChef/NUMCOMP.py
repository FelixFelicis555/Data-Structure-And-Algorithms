if __name__ == '__main__':
	t=int(input())
	for _ in range(t):
		k=input().split()
		a=int(k[0])
		b=int(k[1])
		n=int(k[2])
		a1=a**n
		b1=b**n
		if a1>b1:
			print("1")
		elif a1<b1:
			print("2")
		else:
			print("0")