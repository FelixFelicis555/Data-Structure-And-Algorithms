class node:
	def __init__(self,num):
		self.parent=None
		self.rank=None
		self.value=num

class disjoint_set:
	def makeset(self,a):
		a.parent=a
		a.rank=0

	def findset(self,temp):
		tempr=None
		if temp.parent==temp:
			return temp
		else:
			tempr=self.findset(temp.parent)
			temp.parent=tempr
			return tempr

	def union(self,a,b):
		x=self.findset(a)
		y=self.findset(b)
		if x.rank> y.rank:
			y.parent=x
		elif x.rank==y.rank:
			if x.value > y.value :
				y.parent=x
				x.rank=x.rank+1
			else :
				x.parent=y
				y.rank=y.rank+1
		else :
			x.parent=y

def findset2(a):
	while a.parent!=a:
		a=a.parent
	return a

def printset(arr):
	l=[[] for i in range(0,len(arr))]
	temp=None
	for i in range(0,len(arr)):
		temp=findset2(arr[i])
		l[temp.value].append(arr[i].value)
	print(l)

"""def main():
	DS=disjoint_set()
	arr=[]
	for i in range(0,5):
			arr.append(node(i))
	for i in range(0,5):
		DS.makeset(arr[i])

	DS.union(arr[1],arr[2])
	DS.union(arr[0],arr[3])
	DS.union(arr[1],arr[4])
	DS.union(arr[2],arr[3])
	printset(arr)
	print(DS.findset(arr[0]).value)
main() """








