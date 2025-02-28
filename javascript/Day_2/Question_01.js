numbers = [10, -5, 3, -1, 0, 7, -8, 12, -3];

let count = 0;

const NumberChecker = () => {
  for (let i = 0; i < numbers.length; i++) {
    if (numbers[i] > 0) {
      count++;
    }
  }
  console.log(`total positive number is ${count}`);
};

NumberChecker();
