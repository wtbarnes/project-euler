#pe001.py


rBegin=1
rTerm=1000
tot=0

for i in range(rBegin,rTerm):
    if i%3==0:
        tot=tot+i
        continue
    elif i%5==0:
        tot=tot+i
        continue
    else:
        continue
    
print tot


