if __name__ == '__main__':
	t=int(input())
	for _ in range(t):
		nm=input().split()
		n=(nm[0])
		m=(nm[1])
		a=""
		b=""
		for i in range(len(n)):
			if n[i]!='0':
				a=a+n[i]
		for i in range(len(m)):
			if m[i]!='0':
				b=b+m[i]
		if a!="" and b!="":
			a=int(a)
			b=int(b)
			print(a*b)
		else:
			print("0")