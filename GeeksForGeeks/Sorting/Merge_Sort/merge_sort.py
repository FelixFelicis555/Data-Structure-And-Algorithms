def mergeSort(arr,low,high):
	if(low<high):
		mid=(low+high)//2
		mergeSort(arr,low,mid)
		mergeSort(arr,mid+1,high)
		merge(arr,low,mid,high)

def merge(arr,l,m,h):
	n1=m-l+1
	n2=h-m
	L=[]
	R=[]

	for i in range(n1):
		L.append(arr[l+i])
	for j in range(n2):
		R.append(arr[m+1+j])
	i=0
	j=0
	k=l
	while(i<n1 and j<n2):
		if L[i]<=R[j]:
			arr[k]=L[i]
			i=i+1
		else:
			arr[k]=R[j]
			j=j+1
		k=k+1

	while n1>i:
		arr[k]=L[i]
		i=i+1
		k=k+1
	while n2>j:
		arr[k]=R[j]
		j=j+1
		k=k+1



def main():
	list=[]
	print("Enter the number in the list(enter x to stop) : ")
	while True:
		num=input()
		if num=='x':
			break
		list.append(int(num))
		mergeSort(list,0,len(list)-1)
	print ("\nSorted array is : %s "%(list))
	







if __name__ == '__main__':
	main()