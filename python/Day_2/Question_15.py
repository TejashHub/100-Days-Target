n1 = int(input('enter variable 1: '))
n2 = int(input('enter variable 2: '))

operator = input('which operation you what: ')

if(operator == "+"):
    print(f"adition of two value { n1 + n2 }")
elif(operator == "-"):
    print(f"substraction of two value { n1 - n2 }")
elif(operator == "*"):
    print(f"multiplication of two value { n1 * n2 }")
elif(operator == "/"):
    print(f"division of two value { n1 / n2 }")
else:
    print(f"please add valid operator")   