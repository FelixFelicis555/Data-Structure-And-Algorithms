
def interval_schedule(l):
	
	k=-1
	p=[]
	L=[]
	for i in l:
		if i[0] >=k :
			p.append(i)
			k=i[1]
		else :
			L.append(i)

	return p,L


def mergesort(a,low,high): 
	if low < high :
		mid=(low+high)//2
		mergesort(a,low,mid)
		mergesort(a,mid+1,high)
		merge(a,low,mid,high)

def merge(a,low,mid,high):
	first=[]
	second=[]
	for i in a[low:(mid+1)]:
		first.append(i)
	for i in a[(mid+1):(high+1)]:
		second.append(i)
	firstp=0
	secondp=0
	ap=low
	while firstp< len(first) and secondp <len(second):
		if first[firstp][0]<second[secondp][0]:
			a[ap]=first[firstp]
			firstp=firstp+1
		else:
			a[ap]=second[secondp]
			secondp=secondp+1
		ap=ap+1
	if firstp< len(first):
		a[ap:(high+1)]=first[firstp:]
	else:
		a[ap:(high+1)]=second[secondp:]

def main():
	n=int(input("enter number of intervals\n"))
	interval=[]
	print("enter intervals")
	for i in range(0,n):
		s=input()
		s=s.split()
		interval.append((int(s[0]),int(s[1])))
	mergesort(interval,0,len(interval)-1)
	count=0
	while len(interval)!=0:
		p,interval=interval_schedule(interval)
		print(p)
		count=count+1
	print(count)

main()