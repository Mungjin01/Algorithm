
const fs = require('fs');
const filePath = process.platform === 'linux'? '/dev/stdin' : './input.txt';
let input = fs.readFileSync(filePath).toString().split(' ');
let input2 = input.map((item) => +item);

let as = [1,2,3,4,5,6,7,8]; 
let des = [8,7,6,5,4,3,2,1]; 


for (let i = 0; i < input2.length; i++) {
  if (as[i] != input2[i]) break;
  else if(i==7) return console.log('ascending');
}

for (let i = 0; i < input2.length; i++) {
  if (des[i] != input2[i]) break;
  else if(i==7) return console.log('descending');
}

console.log('mixed');