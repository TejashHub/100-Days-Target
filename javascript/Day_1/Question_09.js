number = 2;

const check = () => {
  if (number % 2 === 0) {
    return `${number} is even number`;
  } else if (number === 1) {
    return `${number} is composite number`;
  } else {
    return `${number} is odd number`;
  }
};

const result = check(number);

console.log(result);
