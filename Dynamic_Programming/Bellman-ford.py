def bellmanford(src,n,graph):
	dist=[float('Inf')]*n
	dist[src]=0
	for i in range(n-1):
		for u,v,w in graph:
			if dist[v]>dist[u]+w:
				dist[v]=dist[u]+w
	for u,v,w in graph:
		if dist[v]>dist[u]+w:
			print("Graph contain negative edge" )
			return 

	printDist(dist,n)

def printDist(dist,n):
	print("Vertex distance from source ")
	for i in range(n):
		print("%d\t\t%d"%(i,dist[i]))

	

def main():
	graph=[]
	n=int(input("Enter the number of vertices"))
	print("Enter the number of edges:(x to stop)")
	while True:
		a=input().split()
		if a[0]=='x':
			break
		u,v,w=int(a[0]),int(a[1]),int(a[2])
		graph.append([u,v,w])
	s=int(input("Enter the source vertex:"))
	bellmanford(s,n,graph)













if __name__ == '__main__':
	main()