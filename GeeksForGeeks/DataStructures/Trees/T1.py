'''This program is just for how general tree looks like and insertion in
them take place'''


class Node:
	def __init__(self,data):
		self.key=data
		self.left=None
		self.right=None


class Tree:
	def __init__(self):
		self.root=None

	def insert(self,data):
		n1=Node(data)
		if(self.root==None):
			self.root=n1
		
		elif(self.root.left==None):
			self.root.left=n1
		else:
			self.root.right=n1


def main():
	T1=Tree()
	T1.insert(12)
	T1.insert(15)
	T1.insert(20)
	print("Root of the node is : ",end=' ')
	print(T1.root.key)
	print("Left child of root is : ",end=' ')
	print(T1.root.left.key)
	print("Right child of root is : ",end=' ')
	print(T1.root.right.key)




if __name__ == '__main__':
	main()

