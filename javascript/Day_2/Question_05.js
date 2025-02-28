a = [5, 7, 8, 9, 0, 5, 3.14, -7, 9, -0.5, 100];

let max1 = (max2 = 0);

for (let i = 0; i < a.length; i++) {
  const e = a[i];
  if (a[i] > max1) {
    max2 = max1;
    max1 = a[i];
  } else {
    if (a[i] > max2 && a[i] != max1) {
      max2 = a[i];
    }
  }
}

console.log(`Second largest value is ${max2}`);
