var input = require('fs').readFileSync('/dev/stdin').toString().split(' ');
let month = Number(input[0]);
let day = Number(input[1]);
let number = 0;
for(let i = 1; i < month; i++ ){
    if(i === 1 || i === 3 || i === 5 || i === 7 || i === 8 || i === 10 || i === 12){
        number += 31;
    } else if(i === 2){
        number += 28;
    } else{
        number += 30;
    }
}
number += day;
switch(number % 7){
    case 1:
        console.log("MON");
        break;
    case 2:
        console.log("TUE");
        break;
    case 3:
        console.log("WED");
        break;
    case 4:
        console.log("THU");
        break;
    case 5:
        console.log("FRI");
        break;
    case 6:
        console.log("SAT");
        break;
    case 0:
        console.log("SUN");
        break;
}