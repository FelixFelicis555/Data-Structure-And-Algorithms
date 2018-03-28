'''k largest(or smallest) elements in an array'''
def smallest(arr,k):
	arr.sort()
	print("%s smallest number are "%(k))
	for i in range(k):
		print(arr[i])

def largest(arr,k):
	arr.sort(reverse=True)
	print("%s largest numbers are "%(k))
	for i in range(k):
		print(arr[i])



def main():
	arr=[]
	print("Enter the numbers in array :")
	while True:
		n=input()
		if n=='x':
			break
		arr.append(int(n))
	k=int(input("Enter the number of elements :"))
	smallest(arr,k)
	largest(arr,k)




if __name__ == '__main__':
	main()