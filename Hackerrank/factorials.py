import math
if __name__ == '__main__':
	q=int(input())
	for j in range(q):
		nt=input().split()
		n=int(nt[0])
		t=int(nt[1])
		a=math.factorial(1+t)
		sum=a
		for i in range(2,n+1):
			a=a*((i+t)//i)
			sum=sum+a
		sum=sum%(1000000007)
		print(int(sum))