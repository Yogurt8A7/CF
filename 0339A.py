calc = input().strip()
nums = list(calc.split('+'))
nums.sort()
print('+'.join(nums))