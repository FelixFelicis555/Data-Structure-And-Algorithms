#Represented of Undirected Graph by adjacent list and adjacent matrix using list
class adjacentList:
	def __init__(self,n):
		self.list=[[]for _ in range(n)]

	def add_edges(self,v1,v2):
		self.list[v1].append(v2)
		self.list[v2].append(v1)
		

	def printList(self):
		for i,v in enumerate(self.list):
			print("Vertex %s : %s"%(i,v))


class adjacentMatrix:
	def __init__(self,n):
		self.matrix=[[0 for _ in range(n)]for _ in range(n)]

	def add_edges(self,v1,v2):
		self.matrix[v1][v2]=1
		self.matrix[v2][v1]=1

	def printMatrix(self):
		for row in self.matrix:
			print(row)



def main():
	n=int(input("Enter the number of vetices in the graph : "))
	L=adjacentList(n)
	M=adjacentMatrix(n)
	print("Enter the vertices making an edge(enter x to stop) : ")
	while True:
		v=input().split()
		if v[0]=='x':
			break
		v1=int(v[0])
		v2=int(v[1])
		L.add_edges(v1,v2)
		M.add_edges(v1,v2)
	print("Adjacent Matrix for the given graph:")
	M.printMatrix()
	print()
	print("Adjacent List for the given graph:")
	L.printList()
	print()




if __name__ == '__main__':
	main()






