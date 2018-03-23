#Implementing Fibonacci Number using different algorithm.
import time
def Fib_Recursion(n):
	if n>2:
		return Fib_Recursion(n-1)+Fib_Recursion(n-2)
	else:
		return 1













# Fib_Dynamic():








def main():
	n=int(input("Enter number :"))
	print("Using Recursion Method :")
	start=time.time()
	ans1=Fib_Recursion(n)
	end=time.time() - start
	
	print("Ans is %s"%(ans1))
	print(end)
	#print("Using Dynamic PRogramming Method :")
	#Fib_Dynamic(n)










if __name__ == '__main__':
	main()