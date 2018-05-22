'''This program is just for how binary search tree looks like and insertion in
them take place'''


class Node:
	def __init__(self,data):
		self.key=data
		self.left=None
		self.right=None


class Tree:
	def __init__(self):
		self.root=None

	def insert(self,root,data):
		n1=Node(data)
		if(root==None):
			root=n1
			print(root.key)
		else:
			if root.key>n1.key:
				if root.left is None:
					root.left=n1
				else:
					self.insert(root.left,data)
			else:
				if root.right is None:
					root.right = n1
				else:
					self.insert(root.right,data)



def main():
	T1=Tree()
	T1.insert(T1.root,12)
	T1.insert(T1.root,15)
	T1.insert(T1.root,20)
	'''print("Root of the node is : ",end=' ')
	print(T1.root)
	print("Left child of root is : ",end=' ')
	print(T1.root.left.key)
	print("Right child of root is : ",end=' ')
	print(T1.root.right.key)
'''



if __name__ == '__main__':
	main()

