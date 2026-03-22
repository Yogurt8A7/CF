import sys
input = sys.stdin.readline

mapint = lambda: map(int, input().split())
listint = lambda: list(map(int, input().split()))
string = lambda: input().rstrip()

def divisors(n: int) -> list:
    divs = []
    for i in range(1, int(n**0.5)+1):
        if n % i == 0: 
            if i*i == n: divs.append(i)
            else:
                divs.append(i)
                divs.append(n//i)
    divs.sort()
    return divs

def satisfy (pattern: str, s: str, n: int, div: int) -> int:
    diff = 0
    for i in range(n):
        if s[i] != pattern[i%div]: diff += 1
        if diff >= 2: return 2
    return diff

def main():
    for _ in range(int(input())):
        n = int(input())
        s = string()
        divs = divisors(n)

        for div in divs:
            p1, p2 = s[:div], s[n-div:]
            if satisfy(p1, s, n, div)<=1 or satisfy(p2, s, n, div)<=1:
                print(div)
                break

if __name__ == "__main__":
    main()