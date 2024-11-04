def main():
    n = int(input())
    res = 0
    for _ in range(n):
        agrees = sum(list(map(int, input().split())))
        res += 1 if agrees >= 2 else 0
    return res


print(main())
