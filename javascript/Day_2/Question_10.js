let pattern = 5;

const patternGenerator = () => {
  for (let i = 1; i <= pattern; i++) {
    let spaces = " ".repeat(pattern - i);
    let stars = "*".repeat(2 * i - 1);
    console.log(spaces + stars);
  }
};

patternGenerator();
