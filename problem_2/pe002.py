#pe002.py

#running total of even Fibonacci numbers
tot=2
#initialize list of Fibonacci numbers, Seed 1,2
fibs=[1,2]
#maximum value up to which to count
fibMax=4000000
#initialize counter
i=2
#initialize newFib
newFib=3

while newFib<fibMax:
    newFib=fibs[i-2]+fibs[i-1]
    fibs.append(newFib)
    if newFib>fibMax:
        break
    elif newFib%2==0:
        tot=tot+newFib
        
    i=i+1
    
print tot