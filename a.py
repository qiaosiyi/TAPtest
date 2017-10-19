count = 0
x = 9999
while x:
    count = count + 1
    print "x=",bin(x),"x-1=",bin(x-1),"x&x-1=",bin(x&(x-1))
    x = x & (x-1)
   
print "count=",count
