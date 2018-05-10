#Different ways of Insertion in singly linked ist
#gn=Given Node
#nn=new node data
class Node:
	def __init__(self,data):
		self.data=data
		self.next=None

class LinkedList:
	def __init__(self):
		self.head=None

	def insertAtBegin(self,val):
		nn=Node(val)
		if self.head==None:
			self.head=nn
		else:
			nn.next=self.head
			self.head=nn

	def insertAtEnd(self,val):
		nn=Node(val)
		if self.head==None:
			self.head=nn
		else:
			temp=self.head
			while(temp.next!=None):
				temp=temp.next
			temp.next=nn

	def insertAtNode(self,gn,val):
		nn=Node(val)
		nn.next=gn.next
		gn.next=nn


	def printLL(self):
		temp=self.head
		while(temp!=None):
			print("Element : ",end=' ')
			print(temp.data)
			temp=temp.next



def main():
	L=LinkedList()

	L.insertAtBegin(10)
	L.insertAtNode(L.head,11)
	L.insertAtEnd(13)
	L.insertAtEnd(14)
	L.insertAtBegin(9)
	L.insertAtNode(L.head.next,12)
	L.printLL()






if __name__ == '__main__':
	main()

