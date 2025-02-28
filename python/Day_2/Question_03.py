marks = int(input('marks: '))

if 90 <= marks <= 99:
    print('Student pass width A++ Grade')
elif 70 <= marks <= 89:
    print('Student pass width A Grade')
elif 60 <= marks <= 69:
    print('Student pass width B++ Grade')
elif 50 <= marks <= 59:
    print('Student pass width B Grade')
elif 45 <= marks <= 49:
    print('Student pass width C++ Grade')
elif 40 <= marks <= 44:
    print('Student pass width C Grade')
else:
    print('Student failed')