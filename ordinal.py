number= int(input('Ordinal of: '))
number_str = str(number)
st, nd, rd, th = 'st', 'nd', 'rd', 'th'
digits = []
for x in number_str:
    digits.append(int(x))
suffix = None
if len(digits) == 1:
    if digits[-1] == 1:
        suffix = st
    elif digits[-1] == 2:
        suffix = nd
    elif digits[-1] == 3:
        suffix = rd
    else:
        suffix = th
elif digits[-2] == 1:
    suffix = th
else:
    if digits[-1] == 1:
        suffix = st
    elif digits[-1] == 2:
        suffix = nd
    elif digits[-1] == 3:
        suffix = rd
    else:
        suffix = th
print(f'{number}{suffix}')
