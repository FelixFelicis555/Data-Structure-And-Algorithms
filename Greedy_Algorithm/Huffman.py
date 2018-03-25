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

		for i in range(1,n-1):
			x=H.extractMin()
			y=H.extractMin()
			node=Node(None,x.freq+y.freq,x,y)
			H.Insert(node)

		#print(self.Heap)



	def Print_Node(self,n):
		for i in range(n):
			print(self.leaves[i].char)
			print(self.leaves[i].freq)

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
	H.Huffman_encoding(char,freq,n)
	print("Character with their frequency :")
	#H.Print_Node(n)


if __name__ == '__main__':
	main()