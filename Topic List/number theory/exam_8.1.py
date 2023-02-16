def sum_odd1(n, total):
    if n == 1:
        return total
    elif n % 2 == 0:
        return sum_odd1(n-1, total)
    else:
        return sum_odd1(n-2, total+n)


ret1 = sum_odd1(11, 0)
print(ret1)

# n = int(input())
total = 0
def sum_odd(n,total):
    for i in range(2, n+1):
        if i % 2 != 0:
            total += i
    return total

ret = sum_odd(11, 0)
print(ret)