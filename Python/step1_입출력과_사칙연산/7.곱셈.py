a=int(input())
b=int(input())
c=b
print(a*(b%10))
b-=(b%10)
print(a*((b%100)/10))
b-=(b%100)
print(a*(b/100))
print(a*c)