number = int(input('number: '))

if(number % 3 == 0 and number % 5 == 0):
    print('Your number is divided by 3 and 5')
elif(number % 7 == 0 and number % 5 == 11):
    print('Your number is divided by 7 and 11')
else:
    print('Sorry')