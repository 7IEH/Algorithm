import sys
a=int(input())
b=[]
for i in range(0,a):
    x,y=map(int,sys.stdin.readline().split())
    b.insert(i,x+y)
for i in range(0,a):
    print(b[i])