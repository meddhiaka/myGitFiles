const x = 1

let computeSum = new Promise(function (resolve, reject){   
    let sum = 1
    for(let i =1; i<10_000_000; i++){
        sum+=i
    }
    resolve(sum)
})

computeSum.then( (data) => {
    console.log(data)
})

function after(){
    console.log("hello world")
}

after()