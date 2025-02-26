number = 5;

const check = (number) => {
  for (let i = 2; i < number; i++) {
    if (number % i == 0) {
      if (number === 1) {
        break;
      }
      console.log(`${number} is not prime number`);
      return;
    }
  }
  console.log(`${number} is prime number`);
};

const result = check(number);
