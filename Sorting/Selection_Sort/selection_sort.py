def selectionSort(n,list):
	for i in range(n-1):
		min_index=i
		for j in range(i+1,n):
			if list[j]<list[min_index]:
				min_index=j
		#swapping
		temp=list[i]
		list[i]=list[min_index]
		list[min_index]=temp
	print("Sorted array : ",end=' ')
	print(list)

def main():
	list=[]
	print("Enter the numbers of the list (Enter 000 to stop) : ")
	while True:
		num=int(input())
		if num==000:
			break
		list.append(num)
	selectionSort(len(list),list)

if __name__ == '__main__':
	main()
