import sys
input = sys.stdin.readline

mapint = lambda: map(int, input().split())
listint = lambda: list(map(int, input().split()))
string = lambda: input().rstrip()

def main():
    for _ in range(int(input())):
        n=int(input())
        a=listint()

        print(a.count(max(a)))

if __name__ == "__main__":
    main()