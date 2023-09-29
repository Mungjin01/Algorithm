function solution(money) {
    let answer = new Array(0,0);
    answer[0] = Math.floor(money / 5500)
    answer[1] = money - (5500 * answer[0])
    return answer;
}

/*--------------------*/
/*
function solution(money) {
    return [Math.floor(money / 5500), money % 5500]
}*/