import sys
import math
input = sys.stdin.readline

mapint = lambda: map(int, input().split())
listint = lambda: list(map(int, input().split()))
string = lambda: input().rstrip()

def main():
    for _ in range(int(input())):
        n = int(input())
        a = listint()

        a.sort()
        a[0]+=1

        print(math.prod(a))

if __name__ == "__main__":
    main()