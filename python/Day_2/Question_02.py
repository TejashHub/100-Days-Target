mixed_numbers = [10, -5, 3, -1, 0, 7, -8, 12, -3]

count = 0

for i in mixed_numbers:
    if(i % 2 == 0):
        print(i)
        count += i
print(f"total even number is: {count}")
    