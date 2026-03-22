import sys
input = sys.stdin.readline

mapint = lambda: map(int, input().split())
listint = lambda: list(map(int, input().split()))
string = lambda: input().rstrip()

def main():
    for _ in range(int(input())):
        n = int(input())

        for i in range(1,n+1):
            if i%2==1:
                print("##.."*(n//2) if n%2==0 else "##.."*(n//2) + "##")
                print("##.."*(n//2) if n%2==0 else "##.."*(n//2) + "##")
            else:
                print("..##"*(n//2) if n%2==0 else "..##"*(n//2) + "..")
                print("..##"*(n//2) if n%2==0 else "..##"*(n//2) + "..")

if __name__ == "__main__":
    main()