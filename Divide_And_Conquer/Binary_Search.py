def binarySearch(arr,l,h,n):
	if l<=h:
		mid=(l+h)//2
		if arr[mid]==n:
			return mid
		elif arr[mid]>n:
			return binarySearch(arr,l,mid,n)
		else:
			return binarySearch(arr,mid+1,h,n)
	
	return -1


def main():
	arr=[]
	print("Enter the sorted array(x to stop) : ")
	while True:
		a=input()
		if a=='x':
			break
		arr.append(int(a))
	n=int(input("Enter the number to search : "))
	i=binarySearch(arr,0,len(arr),n)
	if i==-1:
		print("Number in not in the list")
	else:
		i=i+1
		print("Number is at position %s" %(i))





if __name__ == '__main__':
	main()