import sys
input = sys.stdin.readline

mapint = lambda: map(int, input().split())
listint = lambda: list(map(int, input().split()))
string = lambda: input().rstrip()

def main():
    lets = set('codeforces')

    for _ in range(int(input())):
        if string() in lets:
            print("yes")
        else: print('no')

if __name__ == "__main__":
    main()