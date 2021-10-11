t = int(input())
for i in range(t):
    s = input()
    l = len(s)
    if l>10:
        print(f"{s[0]}{l-2}{s[l-1]}")
    else:
        print(s)