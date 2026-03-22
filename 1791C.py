import sys
input = sys.stdin.readline

mapint = lambda: map(int, input().split())
listint = lambda: list(map(int, input().split()))
string = lambda: input().rstrip()

def main():
    for _ in range(int(input())):
        n=int(input())
        s = string()

        l, r = 0, n-1
        while (l<=r):
            if s[l] != s[r]: n-=2; l+=1; r-=1
            else:
                break
        print(n)

if __name__ == "__main__":
    main()