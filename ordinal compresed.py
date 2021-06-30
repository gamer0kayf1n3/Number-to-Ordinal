while True:
    try:
        n=int(input('Ordinal of: '))
        d=list(map(int, list(str(n))))
        def f(a):
            if a==1:
                return 'st'
            elif a==2:
                return 'nd'
            elif a==3:
                return 'rd'
            else:
                return 'th'
        if len(d)==1:
            s=f(d[-1])
        elif d[-2]==1:
            s = 'th'
        else:
            s=f(d[-1])
        print(str(n)+s)
    except (ValueError,TypeError):
        print('Invalid')
