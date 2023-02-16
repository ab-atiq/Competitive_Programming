lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
n = 0


def myLen(l, n):
    if l == []:
        return n
    else:
        return myLen(l[1:], n+1)


ret1 = myLen(lst, n)
print(ret1)


def mylen(l, n):
    for i in l:
        n += 1
    return n


ret = myLen(lst, n)
print(ret)
