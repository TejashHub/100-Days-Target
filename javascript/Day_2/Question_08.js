let pattern = 5;

const patternGenerator = () => {
  for (let i = pattern; i >= 1; i--) {
    console.log("*".repeat(i));
  }
};

patternGenerator();
