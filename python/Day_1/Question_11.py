a = int(input('a: '))
b = int(input('b: '))
c = int(input('c: '))

def compare(a, b, c):
    if(a > b and a > c):
        return f"{a} is greater than {b} and {c}"
    elif(b > a and b > c):
        return f"{b} is greater than {a} and {c}"
    elif(c > a and c > b):
        return f"{c} is greater than {a} and {b}"
    else:
        return "There is a tie among the values."

result = compare(a, b, c)
print(result)