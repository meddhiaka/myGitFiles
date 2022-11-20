# arrow function simple transformation



### * the simple function

```javascript
function fn(x){
    // c du blabla
}
```

## * the arrow function after conversion 

```javascript
(x) => {
    // c du blabla
};
```





<hr>

### * to reuse an arrow function just :

```javascript
const newFn = (x) => {
    // c du blabla
}
```





<hr>

### a real example

```javascript
function square(a){
    return a*a;
}
```

#### to

```javascript
const square = (a) => {
    a*a
}
```

<hr>



# Anoymous functions

#### an easy example

```javascript
const anonFun = (a,b) => a+b;
```



# let and const JS keywords

### let keyword :

```javascript
let a = 1;
a = 2;
```

### const keyword :

```javascript
// a variable declared with const cannot be changed
const x = 99
```

<hr>



# Classes

### key word class is used to create an object

```javascript
class Person {
    constructor(name, age) {
        this.name;
        this.age;
    }
}

const person1 = new Person('Jhon', 22)
console.log(person1.name, person1.age)
```

<hr>



# Default parameter values

### example

```javascript
function sum (x, y=2){
    return x+y;
}

sum(3) // 5
```

<hr>



# Template literal ${ x }

### example

```javascript
const name = "med"
const lastName = "dhia"

console.log(`Hello ${name} ${lastName}`)
```

<hr>



# JS destructuring

### example

```javascript
const person = {
    name: 'dhia',
    age: 20,
    gender: 'male'
}

let { name, age, gender} = person

console.log(name) //dhia
console.log(age) //20
console.log(gender) //male
```

<hr>



# JavaScript setTimeOut()

```javascript
const fn = () => console.log("hello world")
setTimeOut(fn, 3000)
// function executed after 3 seconds.
```

<hr>



# CallBack functions

### callback is simply passing a function as an argument

```javascript
function helloWorld(name, callback){
    console.log("hello " + name)
    callback()
}

function anotherFun(){
    console.log("I'm a callback function")
}

helloWorld("dhia", anotherFun)
```

<hr>


# Map, Filter in JavaScript

```javascript
const info = [
    {data : "hello one", value: 1},
    {data : "hello two", value: 2},
    {data : "hello three", value: 1},
]

const resultMap = info.map(x => `${x.data}, now bye`)
const resultFilter = info.filter(x => x.value === 1)

console.log(resultMap)
console.log(resultFilter)
```

# Some array methods

```javascript
const elt = ["med", "dhia", "kassab"]

const A = elt.join(" _ ")
// result b : med _ dhia _ kassab

const B = elt.concat(["amen", "allah"])
console.log(B)
// result b : ["med", "dhia", "kassab", "amen", "allah"]

const C = elt.sort()
console.log(C)
// result c : [ 'dhia', 'kassab', 'med' ]

```

# JavaScript Promise

```javascript
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
```









