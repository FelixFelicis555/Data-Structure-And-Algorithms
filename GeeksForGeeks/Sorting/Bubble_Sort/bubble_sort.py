def bubbleSort(list,n):
	for i in range(0,n-1):
		for j in range(0,n-i-1):
			if list[j]>list[j+1]:
				#swap
				temp=list[j]
				list[j]=list[j+1]
				list[j+1]=temp

	print("Sorted Array : ",end=' ')
	print(list)

def main():
	list=[]
	print("Enter the numbers in the list(Enter x to stop): ")
	while True:
		num=input()
		if num=='x':
			break
		list.append(int(num))
	bubbleSort(list,len(list))

if __name__ == '__main__':
	main()
