number = int(input('digit: '))

def convert(number):
    if(number < 0):
        return f"{number} is negative"
    else:
        return f"{number} is positive"

result = convert(number)

print(result)