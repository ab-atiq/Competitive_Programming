lst = [8, 9, 58, 4, 5]
number = 59


def max1(l, n):
    if l == []:
        return n
    elif l[0] > n:
        return max1(l[1:], l[0])
    else:
        return max1(l[1:], n)


ret1 = max1(lst, number)
print(ret1)

# iterative solution


def max(l, n):
    for i in range(len(l)):
        if l[i] > n:
            n = l[i]
    return n


ret = max(lst, number)
print(ret)
