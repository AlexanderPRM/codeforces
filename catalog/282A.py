def main():
    cnt = 0
    n = int(input())
    for _ in range(n):
        operation = input().lower()
        cnt += 1 if operation in ('++x', 'x++') else -1
    return cnt


print(main())
