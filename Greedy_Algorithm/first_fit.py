class blocks:
	def __init__(self,size):
		self.fixed_size=size
		self.left_space=size
		self.allocated_process=None

class First_Fit:
	def __init__(self):
		self.sys_memory=[]
		self.a={}

	def add_Blocks(self,node):
		self.sys_memory.append(node)

	def allocation(self,proc_size,m):
		self.k=0
		for i in range(m):
			p=proc_size[i]
			for j in self.sys_memory:
				if p<=j.left_space:
					j.left_space=j.left_space-p
					j.allocated_process=i+1
					self.a[i]=self.k
					self.k=self.k+1
					break
				self.k=self.k+1

	def print_allocation_table(self,m,proc_size):
		print("Allocation Table :")
		print("Process No.\t\tProcess Size\t\tBlock-No.")
		for i in range(m):
			self.v=self.a[i]
			if self.v !=None:
				print(i+1,end='    ')
				print(proc_size[i],end='    ')
				print(self.v+1)
			else:
				print(i+1,end='    ')
				print(proc_size[i],end='    ')
				print("Not Allocated")
			

	def memory_details(self):
		n=len(self.sys_memory)
		for i in range(n):
			print("Block no %s :"%(i+1))
			print("Size of Block : %s"%(self.sys_memory[i].fixed_size))
			self.s=self.sys_memory[i].fixed_size-self.sys_memory[i].left_space
			print("Space Occupied : %s"%(s))
			print("Space Left : %s"%(self.sys_memory[i].fixed_size))





def main():
	proc_size=[]
	F=First_Fit()
	n=int(input("Enter the total number of Blocks :"))
	print("Enter the sizes of each block")
	for i in range(n):
		s=int(input())
		B=blocks(s)
		F.add_Blocks(B)
	m=int(input("Enter the total number of processes :"))
	print("Enter the sizes of each")
	for i in range(m):
		proc_size.append(int(input()))
	F.allocation(proc_size,m)
	F.print_allocation_table(m,proc_size)
	F.memory_details()












if __name__ == '__main__':
	main()
