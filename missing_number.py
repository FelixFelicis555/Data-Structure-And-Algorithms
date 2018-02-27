def missing_number(a,n):
	total_sum=(n*(n+1))//2
	#print(total_sum)
	for i in range(n-1):
		total_sum=total_sum-a[i]
	return total_sum


def main():
	a=[1,2,4,5,6]
	m_number=missing_number(a,len(a)+1)
	print("Missing Number is : %s"%(m_number))

if __name__ == '__main__':
	main()