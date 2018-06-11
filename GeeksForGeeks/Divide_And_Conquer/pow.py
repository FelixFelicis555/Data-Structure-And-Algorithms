def pow(x,n):
	if n==0:
		return 1
	y=pow(x,n//2)
	if (n%2)==0:
		return y*y
	else:
		return x*y*y





def main():
	x=int(input("Enter an number : "))
	n=int(input("enter the power : "))
	result=pow(x,n)
	print(result)

if __name__ == '__main__':
	main()