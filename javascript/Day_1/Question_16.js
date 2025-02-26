number = 17;

const table = (number) => {
  for (let i = 1; i <= 10; i++) {
    console.log(`${number} * ${i} = ${number * i}`);
  }
};

const result = table(number);
