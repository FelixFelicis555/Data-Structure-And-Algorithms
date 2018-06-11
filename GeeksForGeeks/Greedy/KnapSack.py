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


	def sort_nodes(self):
		self.items.sort(key=lambda x : x.ratio,reverse=True)

	def Total_Profit(self,n,W):
		self.prof=0
		self.curr_weight=0

		'''for i in range(n):
			if(self.curr_weight+self.items[i].weight<=W):
				self.prof=self.prof+self.items[i].value
				self.curr_weight=self.curr_weight+self.items[i].weight
			else:
				self.prof=self.prof+self.items[i].value*(W-self.curr_weight)/self.items[i].weight
				break
		return self.prof'''
		
		self.k=W
		for i in range(n):
			if self.k-self.items[i].weight>=0:
				self.prof=self.prof+self.items[i].value
				self.k=self.k-self.items[i].weight
			else:
				self.prof=self.prof+self.items[i].value*(self.k)/self.items[i].weight
				break
		return self.prof


def main():
	n=int(input("Enter the total numbers of items :"))
	W=int(input("Enter the capacity of knapsack :"))
	K=KnapSack(n)
	print("Enter the weights,values of the item ")
	for i in range(n):
		weight=int(input("Enter the weight of item %s :"%(i+1)))
		value=int(input("Enter the value of item %s :"%(i+1)))
		N=Node(value,weight,i+1)
		K.add_items(N)
	K.sort_nodes()
	profit=K.Total_Profit(n,W)
	print("Total profit is %s "%(profit))




if __name__ == '__main__':
	main()

