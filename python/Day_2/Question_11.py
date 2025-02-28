str1 = input('enter string: ')

vowels = 'aioue'

count = 0

for i in str1:
    if i in vowels:
        count += 1
        
print(count)