#Fractional Knapsack Problem
'''
	Given :
	W=Capacity of Knapsack
	arr[]=List of itemsand their coressponding weight

'''
class Node:
	def __init__(self,value,weight,i):
		self.value=value
		self.weight=weight
		self.item_no=i
		self.ratio=value/weight

class KnapSack:
	def __init__(self,n):
		self.items=[]

	def add_items(self,node):
		self.items.append(node)

	def printitems(self):
		for i in range(n):
			print(self.items.weight)




def main():
	n=int(input("Enter the total numbers of items :"))
	K=KnapSack(n)
	print("Enter the weights,values of the item : ")
	for i in range(n):
		weight=int(input("Enter the weight of item %s :"%(i+1)))
		value=int(input("Enter the value of item %s :"%(i+1)))
		N=Node(value,weight,i+1)
		K.add_items(N)



if __name__ == '__main__':
	main()













if __name__ == '__main__':
	main()
