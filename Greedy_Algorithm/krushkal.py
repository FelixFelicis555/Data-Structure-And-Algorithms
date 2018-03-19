from ds import *

def mergesort(a,low,high): 
	if low < high :
		mid=(low+high)//2
		mergesort(a,low,mid)
		mergesort(a,mid+1,high)
		merge(a,low,mid,high)

def merge(a,low,mid,high):
	first=[]
	second=[]
	for i in a[low:(mid+1)]:
		first.append(i)
	for i in a[(mid+1):(high+1)]:
		second.append(i)
	firstp=0
	secondp=0
	ap=low
	while firstp< len(first) and secondp <len(second):
		if first[firstp][2]<second[secondp][2]:
			a[ap]=first[firstp]
			firstp=firstp+1
		else:
			a[ap]=second[secondp]
			secondp=secondp+1
		ap=ap+1
	if firstp< len(first):
		a[ap:(high+1)]=first[firstp:]
	else:
		a[ap:(high+1)]=second[secondp:]

def main():
	arr=[]  #edge-list:(u,v,weight)
	n=int(input("enter number of nodes\n"))
	print('Enter the number of edges')
	e=int(input())
	for i in range(e):
	    li=input().split()
	    li=[int(i) for i in li]
	    arr.append((li[0],li[1],li[2]))
	mergesort(arr,0,len(arr)-1)
	array=[]
	DS=disjoint_set()
	for i in range(0,n):
		array.append(node(i))
		DS.makeset(array[i])

	for i in range(0,e):
		x=DS.findset(array[arr[i][0]])
		y=DS.findset(array[arr[i][1]])
		if x!=y:
			DS.union(array[arr[i][0]],array[arr[i][1]])
			print("edge : ",arr[i][0],"  ",arr[i][1]," edge weight=",arr[i][2])

main()