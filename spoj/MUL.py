import operator
def karat(x,y):
    if len(str(x)) < 3 or len(str(y)) < 3:
        return x*y

    m = max(len(str(x)),len(str(y)))
    m2 = m // 2

    a = x // 10**(m2)
    b = x % 10**(m2)
    c = y // 10**(m2)
    d = y % 10**(m2)

    z0 = karat(b,d)
    z1 = karat((a+b), (c+d))
    z2 = karat(a,c)

    return ((10**(2*m2))*z2)+((10**m2)*(z1-z2-z0))+z0

if __name__ == '__main__':
	n=int(input())
	for _ in range(n):
		l=input().split()
		l1=int(l[0])
		l2=int(l[1])
		k=operator.mul(l1,l2)
		print(k)
