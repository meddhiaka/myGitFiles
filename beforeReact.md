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





