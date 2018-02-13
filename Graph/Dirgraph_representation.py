#Representation of Directed Graph
class AdjacentMatrix:
	def __init__(self,n):
		self.matrix=[[0 for i in range(n)]for i in range(n)]
	def add_edges(self,v1,v2):
		self.matrix[v1][v2]=1
	def printMatrix(self):
		for row in self.matrix:
			print(row)


class AdjacentList:
	def __init__(self,n):
		self.list=[[]for i in range(n)]
	def add_edges(self,v1,v2):
		self.list[v1].append(v2)
	def printList(self):
		for i,v in enumerate(self.list):
			print("Vertex %s : %s"%(i,v))
	


def main():
	n=int(input("Enter the number of vertices of the graph :"))
	M=AdjacentMatrix(n)
	L=AdjacentList(n)
	print("Enter the vertices forming edges in the graph :")
	while True:
		v=input().split()
		if v[0]=='x':
			break
		v1=int(v[0])
		v2=int(v[1])
		L.add_edges(v1,v2)
		M.add_edges(v1,v2)
	print("Adjacent List for the given graph:")
	L.printList()
	print()
	print("Adjacent Matrix for the given graph:")
	M.printMatrix()
	print()

if __name__ == '__main__':
	main()