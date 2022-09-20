def d(n):
    result = n
    while(n>=10):
        result += n%10
        n = n//10
    return result+n
dlist = [0]*10000

for i in range(0,10000):
    try:
       dlist[d(i)]=1
    except IndexError:
       continue

for i in range(0,10000):
    if(dlist[i] == 0):
        print(i)
