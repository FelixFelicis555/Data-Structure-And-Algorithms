
def NaivePatternSearching(txt,pat):
	lp=len(pat)
	lt=len(txt)
	for s in range(0,lt-lp+1):
		for i in range(lp):
			if txt[s+i]!=pat[i]:
				break
		if i==lp-1:
			print("Pattern found at position %s"%(s))
	


def main():
	colorama.init()
	text=input("Enter the text :")
	pattern=input("Enter the pattern which is to find :")
	NaivePatternSearching(text,pattern)


if __name__ == '__main__':
	main()