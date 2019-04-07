def GCD(a: int, b: int) -> int:
    if b == 0:
        return a
    return GCD(b, a % b)


T = int(input())
for t in range(1, T + 1):
    N, L = map(int, input().split())
    product = list(map(int, input().split()))
    res = [0 for _ in range(L + 1)]
    pos = -1
    for i in range(L - 1):
        if product[i] != product[i + 1]:
            res[i + 1] = GCD(product[i], product[i + 1])
            pos = i + 1
            break
    for i in range(pos + 1, L + 1):
        res[i] = product[i - 1] // res[i - 1]
    for i in range(pos - 1, -1, -1):
        res[i] = product[i] // res[i + 1]
    match = []
    for m in res:
        if m not in match:
            match.append(m)
    match.sort()
    ret = [chr(match.index(res[i]) + ord('A')) for i in range(len(res))]
    print("Case #{t}: {str}".format(t=t, str="".join(ret)))
