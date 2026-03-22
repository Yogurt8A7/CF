import sys
input = sys.stdin.readline

mapint = lambda: map(int, input().split())
listint = lambda: list(map(int, input().split()))
string = lambda: input().rstrip()

def main():
    for _ in range(int(input())):
        a,b=mapint()
        print(-a+b)

if __name__ == "__main__":
    main()