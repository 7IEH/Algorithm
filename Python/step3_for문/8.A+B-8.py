import sys
a=int(input())
b=[]
c=[]
for i in range(0,a):
    x,y=map(int,sys.stdin.readline().split())
    b.insert(i,x)
    c.insert(i,y)
for i in range(0,a):
    print('case #'+str(i+1)+':'+' '+str(b[i])+' '+'+'+' '+str(c[i])+' '+'='+' '+str(b[i]+c[i]))