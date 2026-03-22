import sys
input = sys.stdin.readline

mapint = lambda: map(int, input().split())
listint = lambda: list(map(int, input().split()))
string = lambda: input().rstrip()

def main():
    for _ in range(int(input())):
        grid = [list(string()) for _ in range(8)]

        cols = []
        ans = ''
        for col in zip(*grid):
            for char in col:
                if char != '.':
                    ans += char
        print(ans)

if __name__ == "__main__":
    main()