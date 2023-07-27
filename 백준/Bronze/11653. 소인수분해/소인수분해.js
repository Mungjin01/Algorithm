let input = require('fs').readFileSync(0,{encoding:"utf-8"}).split("\n").map(Number);

let N = input.shift();
const ans = [];

for (let i = 2; i <= N; i++) {
  while (N % i === 0) {
    N /= i;
    ans.push(i);
  }
  if (N === 1) break;
}

ans.forEach((number) => console.log(number));