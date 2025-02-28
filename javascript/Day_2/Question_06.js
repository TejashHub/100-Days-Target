let str1 = "listen";
let str2 = "silent";

const checkAmagam = (st1, str2) => {
  str1 = str1.toLowerCase().split("").sort().join("");
  str2 = str2.toLowerCase().split("").sort().join("");

  if (str1 === str2) {
    console.log("The strings are anagrams.");
  } else {
    console.log("The strings are not anagrams.");
  }
};

checkAmagam(str1, str2);
