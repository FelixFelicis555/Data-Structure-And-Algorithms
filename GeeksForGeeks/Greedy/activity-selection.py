def activitySelection(act):
	print("Activities selectes")
	act.sort(key=lambda x:x[1])
	#print(act)
	k=-1
	n=0
	for i in act:
		if(k<=i[0]):
			k=i[1]
			n=n+1
			print(i)
	print(n)










if __name__ == '__main__':
	n=int(input())
	act=[]
	while(n>0):
		s=int(input())
		e=int(input())
		act.append((s,e))
		n=n-1

	activitySelection(act)
