def countSetBits(num):
	result=0
	while(num):
		num&=(num-1)
		result=result+1


	return result



if __name__ == '__main__':
	t=int(input())
	for i in range(t):
		x=input().split()
		a=int(x[0])
		b=int(x[1])
		b=b-1
		ca=countSetBits(a)
		cb=countSetBits(b)
		k=cb-ca+1
		if (k>0):
			print(k)
		else:
			print("2")