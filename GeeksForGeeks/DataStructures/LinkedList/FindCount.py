class Node:
	def __init__(self,val):
		self.data=val
		self.next=None


class LinkedList:
	def __init__(self):
		self.head=None

	def insert(self,val):
		nn=Node(val)
		if self.head==None:
			self.head=nn
		else:
			nn.next=self.head
			self.head=nn

	def findCount(self,c):
		count=0
		temp=self.head
		while(temp!=None):
			if temp.data==c:
				count=count+1
			temp=temp.next
		print("Count : ",end=' ')
		print(count)



def main():
	L=LinkedList()
	while(True):
		a=input()
		if a=='x':
			break
		L.insert(int(a))
	c=int(input("Enter the number: "))
	L.findCount(c)





if __name__ == '__main__':
	main()