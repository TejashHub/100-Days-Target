numbers = [10, -5, 3, -1, 0, 7, -8, 12, -3];

let count = 0;

const NumberChecker = () => {
  for (let i = 0; i < numbers.length; i++) {
    if (numbers[i] % 2 === 0) {
      count += numbers[i];
    }
  }
  console.log(`total even number is ${count}`);
};

NumberChecker();
