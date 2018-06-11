#Minimum removals to make array sum even
def Min_removal(num):
	#count_odd=0
	sum=0
	for i in num:
		#if i%2!=0:
			#count_odd=count_odd+1
		sum=sum+i
	if sum%2!=0:
		return 1
	else:
		return 0


def main():
	l=[]
	print("Enter the numbers u want to add :")
	while True:
		p=input()
		if p=='x':
			break
		l.append(int(p))
	val=Min_removal(l)
	print("Minimum number required : %s"%(val))






if __name__ == '__main__':
	main()