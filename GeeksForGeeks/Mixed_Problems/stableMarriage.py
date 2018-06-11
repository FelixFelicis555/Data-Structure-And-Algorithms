def main():
	n=5
	Men=['Victor','Wyatt','Xavier','Yancey','Zeus']
	Women=['Amy','Bertha','Claire','Diana','Erika']
	womenPreferences=[[None for i in range(n)] for j in range(n)]
	menPreferences=[[None for i in range(n)] for j in range(n)]
	womenPreferences=[[1,2,4,3,0],[3,1,0,2,4],[4,0,1,2,3],[0,4,3,2,1],[4,1,3,0,2]]
	menPreferences=[[1,0,3,4,2],[3,1,0,2,4],[1,4,2,3,0],[0,3,2,1,4],[1,3,0,4,2]]
	find_match(Men,Women,womenPreferences,menPreferences,n)

def find_match(Men,Women,womenPreferences,menPreferences,n):
	husband=[None for i in range(n)]
	wife=[None for i in range(n)]
	free_men=[ i for i in range(n)]
	proposal_count=[0 for i in range(n)]

	while(len(free_men)>0):
		m=free_men.pop(0)
		w=menPreferences[m][proposal_count[m]]
		proposal_count[m]=proposal_count[m]+1
		if(husband[w]==None):
			husband[w]=m
			wife[m]=w
		elif (womenPreferences[w][husband[w]]>womenPreferences[w][m]):
			free_men.append(husband[w])
			wife[husband[w]]=None
			husband[w]=m
			wife[m]=w
		else:
			free_men.append(m)

	for i in range(n):
		print(Men[i],'will be marrying to',Women[wife[i]])

if __name__ == '__main__':
	main()
		