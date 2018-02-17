#Program is to find out whether anumber occurred more than n/2 in the given sorted list of numbers where n is the length of list(using Linear Search).
def isMajority(arr,n,s):
	if n%2==0:
		l=n//2
	else:
		l=n//2+1
	for i in range(l):
		if(arr[i]==s and arr[i+n//2]==s):
			print("true")
			return
	print("False")






def main():
	list=[]
	print("enter the numbers in the sorted list(enter x to stop): ")
	while True:
		a=input()
		if a=='x':
			break
		list.append(int(a))
	s=int(input('Enter the number whose majority is to find out :'))
	n=len(list)
	isMajority(list,n,s)
	#if r is True:
	#	print("%s occurs more than %s times in the list."%(s,n//2))
	#else:
	#	print("No occurence more than %s times."%(n//2))

if __name__ == '__main__':
	main()

