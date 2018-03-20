'''
You are analysing communities of people in a social network. A connection between
Person i and Person j is represented as C i j. When two people i & j belonging to different
communities connect, the communities which i and j belongs to are merged together. So
for e.g. if person 1 and 2 are connected and later 2 and 3 are connected, then 1, 2 and 3 will
belong to the same community.
At the beginning, there are N people representing N communities.
There are two type of queries:
1. C i j : communities containing person i and j are merged (if they belong to different
communities).
2. Q i : print the size of the community to which person i belongs.
'''
class Node:
	def __init__(self, rnk, d):
		self.rank = rnk
		self.parent = self
		self.data = d
		self.size=1


class Communities:
	def __init__(self):
		self.members=dict()

	def get(self,v):
		if v in self.members:
			return self.members[v]
		else:
			return None

	def make_set(self,v):
		if v not in self.members:
			self.members[v]=Node(0,v)


	def find_set(self,n):
		if n.parent != n:
			self.members[n.data].parent = self.find_set(n.parent)
		return n.parent
	
	def union(self, n1, n2):
		root_n1 = self.find_set(n1)
		root_n2 = self.find_set(n2)
		if root_n1.data==root_n2.data:
			return
		elif root_n1.rank > root_n2.rank:
			self.members[root_n1.data].size=self.members[root_n1.data].size+self.members[root_n2.data].size
			self.members[root_n2.data].parent = self.members[root_n1.data]
		elif root_n1.rank < root_n2.rank:
			self.members[root_n2.data].size=self.members[root_n2.data].size+self.members[root_n1.data].size
			self.members[root_n1.data].parent = self.members[root_n2.data]
		else:
			self.members[root_n1.data].size=self.members[root_n1.data].size+self.members[root_n2.data].size
			self.members[root_n2.data].parent = self.members[root_n1.data]
			self.members[root_n1.data].rank = root_n1.rank+1


def main():
	n=int(input("Enter the number of people :"))
	m=int(input("Enter the number of queries :"))
	queries=[]
	S=Communities()
	for i in range(1,n+1):
		S.make_set(i)
	for i in range(m):
		q=input().split()
		queries.append(q)
	#print(queries)
	for i in queries:
		if i[0]=='Q':
			v1=int(i[1])
			print("Size : %s"%(S.get(v1).parent.size))

		elif i[0]=='C':
			v1=int(i[1])
			v2=int(i[2])
			S.union(S.get(v1),S.get(v2))


		else:
			print("Enter correct input!")



	

if __name__ == '__main__':
	main()