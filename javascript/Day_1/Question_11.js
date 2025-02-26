const a = 10;
const b = 13;
const c = 15;

const check = (a, b, c) => {
  if (a > b && a > c) {
    return `${a} is greater than the ${b} and ${c}`;
  } else if (b > a && b > c) {
    return `${b} is greater than the ${a} and ${c}`;
  } else if (c > b && c > a) {
    return `${c} is greater than the ${b} and ${a}`;
  } else {
    return `${a}, ${b} and ${c} are equal`;
  }
};

const result = check(a, b, c);

console.log(result);
