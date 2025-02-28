let pattern = 10;

const patternGenerator = () => {
  for (let i = 1; i <= pattern; i++) {
    console.log("*".repeat(i));
  }
};

patternGenerator();
