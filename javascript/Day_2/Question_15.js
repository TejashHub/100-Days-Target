let strings = "java programming language";

let char_frequency = {};

for (let i = 0; i < strings.length; i++) {
  let char = strings[i];
  if (char in char_frequency) {
    char_frequency[char] += 1;
  } else {
    char_frequency[char] = 1;
  }
}

console.log("Character frequency:");

for (let [char, frequency] of Object.entries(char_frequency)) {
  console.log(`'${char}': ${frequency}`);
}
