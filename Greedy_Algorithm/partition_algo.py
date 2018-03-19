def intervalScheduing(d):
	k=-1
	p=[]
	l=[]
	for i in d:
		if i[0] >= k :
			p.append(i)
			k=i[1]
		else:
			l.append(i)

	return p,l


def main():
	n=int(input("enter the total no of intervals : "))
	d=[]
	print("Enter the interval(x to stop)")
	while True:
		t=input().split()
		if t[0]=='x':
			break
		start=int(t[0])
		end=int(t[1])
		d.append((start,end))

	d.sort(key=lambda x: x[1],)
	#print(d)
	count=0
	while(len(d)!=0):
		p,d=intervalScheduing(d)
		print("Resourse 1 jobs :",end=' ')
		print(p)
		count=count+1
	print("Minimum number of resources : %s"%(count))







if __name__ == '__main__':
	main()