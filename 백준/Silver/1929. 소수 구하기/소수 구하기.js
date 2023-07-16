var fs = require('fs');
var inputs = fs.readFileSync('/dev/stdin').toString().split(' ');
var a = Number(inputs[0]);
var b = Number(inputs[1]);
var arr =[];
var answer = '';
for(var i=0; i<=b; i++){
    arr.push(true);
}
arr[0] = false;
arr[1] = false;

for(var m=2; m<=b; m++){
    if(arr[m]){
        for(var n=2; n<=b/m; n++){
            arr[m*n] = false;
        }
    }
}
for(var j=a; j<=b; j++){
    if(arr[j]) answer += j + '\n';
}
console.log(answer.trim())