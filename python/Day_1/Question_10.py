year = int(input('Year: '))

def leapYear(y):
    if(y % 400 == 0):
        return f"{y} is leap year"
    elif(y % 100 == 0):
        return f"{y} is not leap year"
    elif(y % 4 == 0):
        return f"{y} is leap year"
    else:
        return f"{y} is not leap year"

result = leapYear(year)

print(result)