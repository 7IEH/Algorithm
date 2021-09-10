a,b=map(int,input().split())
if -10000>a or a>10000:
    print('a의 입력치가 제한된 기준을 넘었습니다.')
elif -10000>b or b>10000:
    print('b의 입력치가 제한된 기준을 넘었습니다.')
elif a>b:
    print('>')
elif a<b:
    print('<')
else:
    print('==')
