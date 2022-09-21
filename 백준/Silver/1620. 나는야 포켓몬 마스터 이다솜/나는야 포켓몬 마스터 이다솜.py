import sys
card, question = map(int,sys.stdin.readline().split())


name_dict = dict()
index_list = [0]*(card+1)

for i in range(1,card+1):
    name = sys.stdin.readline().strip()
    name_dict[name] = i
    index_list[i] = name

for _ in range(question):
    q = sys.stdin.readline().strip()
    if(ord(q[0]) >= 65):
        print(name_dict[q])
    else:
        print(index_list[int(q)])

