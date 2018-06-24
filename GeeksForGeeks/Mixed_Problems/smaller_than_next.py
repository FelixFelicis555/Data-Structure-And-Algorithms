'''Delete array elements which are smaller than next or become smaller'''
#k=Number of elements to delete 






def deleteSmaller(arr,k):
	s=[]
	n=len(arr)
	j=0
	for i in range(0,n-1):
		if j<k:
			if arr[i]>arr[i+1]:
				s.append(arr[i])
			else:
				arr.pop(i)
				j=j+1
				#top=s[len(s)-1]
				if len(s)!=0:
					while (s[len(s)-1]<arr[i]):
						p=s.pop()
						arr.pop(i-1)
						j=j+1
	print(arr)














def main():
	l=[]
	print("Enter the numbers in list :")
	while True:
		n=input()
		if n=='x':
			break
		l.append(int(n))
	k=int(input("Enter value of K :"))
	deleteSmaller(l,k)











if __name__ == '__main__':
	main()