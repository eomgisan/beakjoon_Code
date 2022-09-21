
global num, count, result
count = 0
result = -1
len, num = map(int, input().split())

def mergeSort(list, left, right):
    global count, num, result
    if(result != -1):
        return
    if(left < right):
        mid = (left+right)//2
        mergeSort(list, left, mid)
        mergeSort(list, mid+1,right)
        merge(list,left,mid,right)

    
def merge(list, left, mid, right):
    temp = []
    global count, num, result
    i,j = left,mid+1
    while(i<mid+1 and j<right+1):
        if(list[i]>=list[j]):
            temp.append(list[j])
            j += 1
        else:
            temp.append(list[i])    
            i += 1

    while(i<mid+1):
        temp.append(list[i]) 
        i += 1
    
    while(j<right+1):
        temp.append(list[j])
        j += 1

    i,k=left,0
    while(i<right+1):
        list[i] = temp[k]
        count +=1
        if(count == num):
            result = temp[k]
            return
        k +=1
        i +=1









dlist = list(map(int,input().split()))


mergeSort(dlist,0,len-1)

print(result)

