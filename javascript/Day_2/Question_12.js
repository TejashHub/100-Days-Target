let checker = "k";

const vowels = ["a", "e", "i", "l", "o", "u"];

for (let i = 0; i < vowels.length; i++) {
  const vowel = vowels[i];
  if (vowel === checker) {
    console.log(`vowels: ${checker}`);
    break;
  }
}
