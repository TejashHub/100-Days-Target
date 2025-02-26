number = 5;

const Fibonnaci = () => {
  a = 0;
  b = 1;
  for (let i = 1; i < number + 1; i++) {
    temp = a + b;
    a = b;
    b = temp;
    console.log(`${b}`);
  }
};

Fibonnaci();
