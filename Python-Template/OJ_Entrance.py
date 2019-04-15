T = int(input())
for t in range(1, T + 1):
    num = 0
    N = int(input())
    words = []
    for i in range(N):
        words.append(input()[::-1])
    flag = [False for _ in range(N)]
    exist = set()
    for i in range(len(words)):
        word = words[i]
        for j in range(len(word), 0, -1):
            if flag[i]:
                break
            for k in range(len(words)):
                another = words[k]
                if i == k:
                    continue
                if j <= len(another) and word[:j] not in exist and word[:j] == another[:j] \
                        and not flag[i] and not flag[k]:
                    num += 2
                    exist.add(word[:j])
                    flag[i], flag[k] = True, True
                    break
    print("Case #{}: {}".format(str(t), num))
