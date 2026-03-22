import sys
input = sys.stdin.readline

mapint = lambda: map(int, input().split())
listint = lambda: list(map(int, input().split()))
string = lambda: input().rstrip()

def main():
    for _ in range(int(input())):
        s=string()
        print('yes' if (s[0]=='a'or s[1]=='b' or s[2]=='c') else 'no')

if __name__ == "__main__":
    main()