#N – Maximum unit of food you can buy each day.
#S – Number of days you are required to survive.
#M – Unit of food required each day to survive.
def survival(s,n,m):
	day=(m*s)//n
	if m>n:
		print("No")
	else:
		a=(s*m)%n
		if a!=0:
			day=day+1
		print("Yes")
		print(day)

def main():
	s=int(input("Enter the value of S :"))
	n=int(input("Enter the value of N :"))
	m=int(input("Enter the value of M :"))
	survival(s,n,m)

if __name__ == '__main__':
	main()