import sys
input = sys.stdin.readline

mapint = lambda: map(int, input().split())
listint = lambda: list(map(int, input().split()))
string = lambda: input().rstrip()

def main():
    for _ in range(int(input())):
        n = int(input())
        maps = [string() for _ in range(n)]
        idx = []
        for m in maps:
            for i in range(1, 4+1):
                if m[i-1] == '#':
                    idx.append(i)
        print(*idx)

if __name__ == "__main__":
    main()