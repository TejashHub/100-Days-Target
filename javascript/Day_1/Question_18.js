const number = 153;

let result = String(number);

let total = 0;

const AmstromNumber = () => {
  for (let i = 0; i < result.length; i++) {
    const e = result[i];
    if (result.length == 1) {
      const temp = e ** 1;
      total += temp;
    } else if (result.length == 2) {
      const temp = e ** 2;
      total += temp;
    } else if (result.length == 3) {
      const temp = e ** 3;
      total += temp;
    } else if (result.length == 4) {
      const temp = e ** 4;
      total += temp;
    }
  }
};

AmstromNumber();

if (number === total) {
  console.log("it is amstrom number");
} else {
  console.log("it is not amstrom number");
}
