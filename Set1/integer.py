n=input()
k=input()
a=[]
for i in range(n):
	a.append(i+1)
	print i+1
s=0
for i in range(k):
	s=s+a[i]
print s
