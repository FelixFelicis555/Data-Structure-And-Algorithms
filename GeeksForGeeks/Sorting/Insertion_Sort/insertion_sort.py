def insertionSort(list,n):
	for i in range(1,n):
		key=list[i]
		j=i-1
		while j>=0 and key<list[j]:
			list[j+1]=list[j]
			j=j-1
		list[j+1]=key
	print("Sorted List : ",list)

	
def main():
	list=[]
	print("Enter the numbers in the list(enter x to stop) : ")
	while True:
		n=input()
		if n=='x':
			break
		list.append(int(n))
	insertionSort(list,len(list))

	
if __name__ == '__main__':
	main()
