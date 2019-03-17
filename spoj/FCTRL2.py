if __name__ == '__main__':
	fact=[]
	fact.append(1)
	for i in range(1,101):
		fact.append(fact[i-1]*i)
	t=int(input())
	for _ in range(t):
		n=int(input())
		print(fact[n])