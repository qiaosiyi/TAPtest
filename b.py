n=9999999999999999
t=n
m=0
while n != 2:
	if n % 2 == 0:
		n = n / 2
	if (n + 1) % 2 == 0:
		n = (3*n + 1) / 2
	m = m + 1
print "t=",t,",m=",m+1	

