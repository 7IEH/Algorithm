h,m=map(int,input().split())
if(h>=0 and h<=23) and (m>=0 and m<=59):
    m+=h*int(60)
    if(m<45):
        print('23 '+str(60-(45-m)))
    else:
        m-=45
        h=m/60
        m%=60
        print(str(int(h))+' '+str(m))
        