import sys
import re
input = sys.stdin.readline

def col_to_num(s):
    res = 0
    for c in s:
        res = res * 26 + (ord(c) - ord('A') + 1)
    return res

def num_to_col(x):
    res = ""
    while x > 0:
        x -= 1
        res = chr(x % 26 + ord('A')) + res
        x //= 26
    return res
n = int(input())

for _ in range(n):
    s = input().strip()

    m = re.match(r'^R(\d+)C(\d+)$', s)
    if m:
        row = int(m.group(1))
        col = int(m.group(2))
        print(f"{num_to_col(col)}{row}")
    else:
        m = re.match(r'^([A-Z]+)(\d+)$', s)
        col = m.group(1)
        row = m.group(2)
        print(f"R{row}C{col_to_num(col)}")
