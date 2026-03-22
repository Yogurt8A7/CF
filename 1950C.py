import sys
input = sys.stdin.readline

mapint = lambda: map(int, input().split())
listint = lambda: list(map(int, input().split()))
string = lambda: input().rstrip()

def main():
    for _ in range(int(input())):
        time = string()
        h, m = map(int, time.split(':'))

        if h==0: print(f"12:{m:02d} AM")
        elif 1 <= h < 12: print(f"{h:02d}:{m:02d} AM")
        elif h == 12: print(f"12:{m:02d} PM")
        else: print(f"{(h%12):02d}:{m:02d} PM")

if __name__ == "__main__":
    main()