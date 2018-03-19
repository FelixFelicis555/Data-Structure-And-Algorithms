def intervalScheduing(d):
	k=-1
	p=[]
	for i in d:
		if i[0] >= k :
			p.append(i)
			k=i[1]
	print("Output : ",end='')
	print(p)








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
	intervalScheduing(d)







if __name__ == '__main__':
	main()