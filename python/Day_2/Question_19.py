h = int(input('height: '))
w = int(input('width: '))

def bmiConvert(h,w):
    result = w / ( h * h )
    print(f"BMI value is {result}")

bmiConvert(h, w)