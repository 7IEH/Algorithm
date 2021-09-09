#function
def add(a,b):
    return a+b
def minus(a,b):
    return a-b
def multiple(a,b):
    return a*b
def division(a,b):
    return a/b

#main
A=int(input('첫 번째 숫자를 입력하세요: '))
B=int(input('두 번째 숫자를 입력하세요: '))
C=input('원하는 사칙연산을 입력해주세요!')
if C=='+':
    print('결과는'+str(add(A,B)))
elif C=='-':
    print('결과는 '+str(minus(A,B)))
elif C=='*':
    print('결과는 '+str(multiple(A,B)))
elif C=='/' :
    if B==0:
        print("분자가 0입니다.")
    else:
        print('결과는 '+str(division(A,B)))    