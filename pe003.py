#pe003.py

largeNum=600851475143
flist1=[]

for i in range(3,largeNum/2-1):
    if largeNum%i==0:
        flist1.append(i)
        
print flist1
