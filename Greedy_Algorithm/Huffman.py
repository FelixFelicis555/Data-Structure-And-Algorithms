from Min_heap import *
class Node:
	def __init__(self,char,freq,x,y):
		self.char=char
		self.freq=freq
		self.left=x
		self.right=y

class Huffman:
	def __init__(self):
		self.leaves=[]
		

	def Huffman_encoding(self,c,f,n):
		for i in range(n):
			leaf=Node(c[i],f[i],None,None)
			self.leaves.append(leaf)
		H=Min_Heap()
		for leaf in self.leaves:
			H.Insert(leaf)

		for i in range(1,n):
			x=H.extractMin()
			y=H.extractMin()
			node=Node(None,x.freq+y.freq,x,y)
			H.Insert(node)

		return H.extractMin()

	def Print_Node(self,root,s):
		if root.left==None and root.right ==None:
			print("Character %s : %s"%(root.char,s))
			return
		self.Print_Node(root.left,s+"0")
		self.Print_Node(root.right,s+"1")
		

def main():
	H=Huffman()
	char=[]
	freq=[]
	n=int(input("Enter the total no of symbols :"))
	print("Enter character and frequency")
	for i in range(n):
		c=input()
		f=int(input())
		char.append(c)
		freq.append(f)
	root=H.Huffman_encoding(char,freq,n)
	print("Size of File :")
	print(root.freq)
	print("Huffman Codes :")
	H.Print_Node(root,"")
	


if __name__ == '__main__':
	main()