const a = 5;
const b = 10;

const swapVariable = (a, b) => {
  temp = a;
  a = b;
  b = temp;
  return `swaping variable a is: ${a} and b is: ${b}`;
};

const result = swapVariable(a, b);

console.log(result);
