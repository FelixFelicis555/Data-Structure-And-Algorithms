def digit_sum(s):
	num=s
	sum=0
	while num>0:
		sum=sum+(num%10)
		num=num//10
	return sum


def super_digit(k):
	m=k//10
	#print(k)
	#print(m)
	if m>0:
		n=digit_sum(k)
		super_digit(n)
	if m==0:
		print(k)





def main():
    n=input().split()
    t=int(n[1])
    k=int(n[0]*t)
    #print(k)
    super_digit(k)
    #p=digit_sum(k)
    #print(p)

if __name__ == '__main__':
 	main()