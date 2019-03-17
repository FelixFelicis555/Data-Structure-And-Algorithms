class Node:
	def __init__(self,rnk,d,v):
		self.rank = rnk
		self.parent = self
		self.teeth = d
		self.cycled=False
		self.val=v
		self.odd=0

class Disjoint_sets:
	def __init__(self):
		self.members=dict()

	def get(self,v):
		if v in self.members:
			return self.members[v]
		else:
			return None

	def make_set(self,i,v):
		if v not in self.members:
			self.members[i]=Node(0,v,i)

	def chnge_teeth(self,x,c):
		self.members[x].teeth=c


	def find_set(self,n):
		if n.parent != n:
			self.members[n.val].parent = self.find_set(n.parent)
		return n.parent
	
	def union(self, n1, n2):
		root_n1 = self.find_set(n1)
		root_n2 = self.find_set(n2)
		if root_n1==root_n2:
			print("cycle")
			root_n1.cycled=True
		else:
			
			if root_n1.rank > root_n2.rank:
				self.members[root_n2.val].parent = self.members[root_n1.val]
			elif root_n1.rank < root_n2.rank:
				self.members[root_n1.val].parent = self.members[root_n2.val]
			else:
				self.members[root_n2.val].parent = self.members[root_n1.val]
				self.members[root_n1.val].rank= root_n1.rank+1


	def find_speed(self,x,y,v):
		parent_x=self.find_set(x)
		parent_y=self.find_set(y)
		if parent_x!=parent_y:
			return 0
		else:
			if (parent_x.cycled!=True):
					a=x.teeth
					b=y.teeth
					ans=(a/b)*v
					return ans
			else:
				return 0
				


if __name__ == '__main__':
	nm=input().split()
	n=int(nm[0])
	m=int(nm[1])
	l=input().split()
	a=[]
	d=Disjoint_sets()
	for i in range(n):
		a.append(int(l[i]))
	for i in range(n):
		d.make_set(i+1,a[i])

	for s in d.members.values():
		print("Teeth : %s  Parent : %s  Value : %s cycled : %s" %(s.teeth,s.parent.teeth,s.val,s.parent.cycled))

	for k in range(0,m):
		nn=input().split()
		if (int(nn[0])==1):
			d.chnge_teeth(int(nn[1]),int(nn[2]))
		elif(int(nn[0])==2):
			d.union(d.get(int(nn[1])),d.get(int(nn[2])))
		else:
			k=d.find_speed(d.get(int(nn[1])),d.get(int(nn[2])),int(nn[3]))
			print(k)

	for s in d.members.values():
		print("Teeth : %s  Parent : %s  Value : %s cycled : %s" %(s.teeth,s.parent.teeth,s.val,s.parent.cycled))





