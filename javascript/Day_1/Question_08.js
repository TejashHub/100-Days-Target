number = 0;

const check = (number) => {
  if (number > 1) {
    console.log(`${number} is positive`);
  } else if (number === 0) {
    console.log(`${number} is zero`);
  } else if (number < 0) {
    console.log(`${number} is negative`);
  } else {
    console.log("number is negative");
  }
};

const result = check(number);
