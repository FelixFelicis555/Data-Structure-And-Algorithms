if __name__ == '__main__':
	prime=[2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97]
	t=int(input())
	for _ in range(0,t):
		n=int(input())
		a=list(map(int,input().split()))
		a.sort()
		if 1 in a:
			for i in a:
				if i in prime:
					print(i)
					break
		else:
			print(-1)
