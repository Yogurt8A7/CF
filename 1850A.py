import sys
input = sys.stdin.readline

mapint = lambda: map(int, input().split())
listint = lambda: list(map(int, input().split()))
string = lambda: input().rstrip()

def main():
    for _ in range(int(input())):
        a,b,c=mapint()
        print('yes' if (a+b>=10 or a+c>=10 or b+c>=10)else 'no')

if __name__ == "__main__":
    main()