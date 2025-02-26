a = input('variable 1: ')
b = input('variable 2: ')

def swap(a, b):
    temp = b
    a = b
    b = temp
    return  f"variable a is {a} and variable b is {b}"

result = swap(a, b)

print(result)
