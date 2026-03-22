import sys
input = sys.stdin.readline

mapint = lambda: map(int, input().split())
listint = lambda: list(map(int, input().split()))
string = lambda: input().rstrip()

def main():
    for _ in range(int(input())):
        target = [string() for _ in range(10)]

        points = \
        [
            [1, 1, 1, 1, 1, 1, 1, 1, 1, 1], \
            [1, 2, 2, 2, 2, 2, 2, 2, 2, 1], \
            [1, 2, 3, 3, 3, 3, 3, 3, 2, 1], \
            [1, 2, 3, 4, 4, 4, 4, 3, 2, 1], \
            [1, 2, 3, 4, 5, 5, 4, 3, 2, 1], \
            [1, 2, 3, 4, 5, 5, 4, 3, 2, 1], \
            [1, 2, 3, 4, 4, 4, 4, 3, 2, 1], \
            [1, 2, 3, 3, 3, 3, 3, 3, 2, 1], \
            [1, 2, 2, 2, 2, 2, 2, 2, 2, 1], \
            [1, 1, 1, 1, 1, 1, 1, 1, 1, 1], \
        ]

        ans = 0
        for i in range(10):
            for j in range(10):
                if target[i][j] == 'X':
                    ans += points[i][j]
        print(ans)

if __name__ == "__main__":
    main()