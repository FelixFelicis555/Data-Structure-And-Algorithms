def countingZeros(arr,n):
	first_index=searchIndex(arr,0,n-1)
	if first_index==-1:
		return 0
	else:
		return n-first_index



def searchIndex(arr,low,high):
	mid=(low+high)//2
	if low<=high:
		if mid==0 or arr[mid]==0 and arr[mid-1]==1:
			return mid
		if arr[mid]==1:
			return searchIndex(arr,mid+1,high)
		else:
			return searchIndex(arr,0,mid)
	return -1



def main():
	arr=[]
	print("Enter 1's and 0's in list in Sorted manner (Enter x to stop):")
	while True:
		a=input()
		if a=='x':
			break
		arr.append(int(a))
	n=len(arr)
	count=countingZeros(arr,n)
	if count>0:
		print("Total number of zeros are : %s"%(count))
	else:
		print("There is no zeros")
	

if __name__ == '__main__':
		main()