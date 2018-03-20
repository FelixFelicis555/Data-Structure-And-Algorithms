'''
You are analysing communities of people in a social network. A connection between
Person i and Person j is represented as C i j. When two people i & j belonging to different
communities connect, the communities which i and j belongs to are merged together. So
for e.g. if person 1 and 2 are connected and later 2 and 3 are connected, then 1, 2 and 3 will
belong to the same community.
At the beginning, there are N people representing N communities.
There are two type of queries:
1. C i j : communities containing person i and j are merged (if they belong to different
communities).
2. Q i : print the size of the community to which person i belongs.
'''
from Disjoint_sets import *






def main():
	n=int(input("Enter the number of people :"))
	m=int(input("Enter the number of queries :"))
	queries=[]
	for i in range(m):
		q=input().split()
		queries.append(q)
	print(queries)



	

if __name__ == '__main__':
	main()