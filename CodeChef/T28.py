def ee(a1,a2):
	global s1
	global s2
	global s3
	if a2==0:
		s1=a1
		s2=1
		s3=0
	else:
		ee(a2,a1%a2)
		t=s2
		s2=s3
		s3=t-(a1//a2)*s3




if __name__ == '__main__':
	mod=10**9+9
	nq=input().split()
	n=int(nq[0])
	q=int(nq[1])
	l={}
	for i in range(n):
		c=input().split()
		a=int(c[0])
		b=int(c[1])
		s=4*a*b+2*max(a,b)
		l[s]=l[s]+1
	k=list(map(int,input().split()))
	for i in range(q):
		d=k[i]*(k[i]+1)
		if(l[d]==0):
			print("-1")
		else:
			ee(l[d],mod)
			#print(s2)
			j=((s2%mod)+mod)%mod
			j=j%mod
			print(j)
			