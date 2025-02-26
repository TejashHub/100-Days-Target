year = 1999;

const leapYear = (y) => {
  if (y % 400 == 0) {
    return `${y} is leap year`;
  } else if (y % 100 == 0) {
    return `${y} is not leap year`;
  } else if (y % 4 == 0) {
    return `${y} is leap year`;
  } else {
    return `${y} is not leap year`;
  }
};

const result = leapYear(year);

console.log(result);
