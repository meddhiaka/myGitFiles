# arrow function simple transformation



###  the simple function

```javascript
function fn(x){
    // c du blabla
}
```

##  the arrow function after conversion 

```javascript
(x) => {
    // c du blabla
};
```





<hr>

###  to reuse an arrow function just :

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

# DOM

#### Browsing into the document 

* Popular DOM methods are `document.getElementById()` , `document.getElementsByClassName()`, `document.getElementsByTagName()`
* `document.getElementsByClassName('X')` is equivalent to `document.querySelectorAll('.X')`

#### .length & .textContent methods
* The `document.getElementsByClassName('X').length` and `document.querySelectorAll('.X')` both will return the number of nodes within the class name X
<b><u><i>example :</i></u></b>
```javascript
<div id="players">
        <p id="p1" class="player">Player 1</p>
        <p id="p2" class="player">Player 2</p>
</div>


document.getElementsByClassName('player')
&&
document.querySelectorAll('.player')
// Will both return 2
```

* `textContent` method will be used when we want the text content of a tag name/class/ID etc .
<b><u><i>example :</i></u></b>
```javascript
<span id="p1-name">Anjana</span>

document.querySelector('#p1-name').textContent
// This line will result this string 'Anjana'

```

#### Changing the DOM

* `document.title = "new string title"` is used to change the title of the document
* `document.getElementById('X').textContent = 'new string` is used to change the entire text in the element.
* `document.getElementById('X').append(' & new texto')` is used to add some new text without changing the old text entirely ...






<hr>

# Working with Objects

#### Creating an Object through a function

```javascript
function Person(name, age, sex){
    this.name = name
    this.age = age
    this.sex = sex
}

const Dhia = new Person('Med Dhia Kassab', 20, "Male")

console.log(`${Dhia.name}`, `${Dhia.age}`, `${Dhia.sex}`)
```

#### Object Keys, Values and Entries


```javascript
const DhiaKeys = Object.keys(Dhia)
console.log(DhiaKeys)
// Output: [ 'name', 'age', 'sex' ]

const DhiaValues = Object.values(Dhia)
console.log(DhiaValues)
// Output: [ 'Med Dhia Kassab', 20, 'Male' ]

const DhiaEntries = Object.entries(Dhia)
console.log(DhiaEntries)
// Output: [ [ 'name', 'Med Dhia Kassab' ], [ 'age', 20 ], [ 'sex', 'Male' ] ]
```

#### Looping through an Object

```javascript

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

# JavaScript Promises

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
# JavaScript Promises, Await v2
### Promises can be 3 typos ...
* Pending: Waiting for the value
* Fulfilled: AKA resolved, Got the value
* Rejected: Couldn't get the value.

```javascript
    let a = await fetch("https://dog.ceo/api/breed/hound/list")
    let b = await a.json()
    console.log(a)
```

#### *is equivalent to*
```javascript
    let a = fetch("https://dog.ceo/api/breed/hound/list").then((value) => console.log(value))
```

# Asynchronous Functions
```javascript
async function getData(url){
    let data = await fetch(url)
    data = await data.json()
    return data
}

console.log(await getData("https://dog.ceo/api/breed/hound/list"))
```

<hr>

# Event Listeners (click, mouseover & mouseout) and the Event Object ...

* Snippet of code to just remember ...
```javascript
// test.html :
<h1>IDK</h1>

<div id="options">
    <button name="true" value="true">true</button>
    <button name="false" value="false">false</button>
</div>

// main.js :
const btnTrue = document.getElementsByName('true')
const h1Elt = document.querySelector('h1')

// getElementsByName() always return an array... be aware
btnTrue[0].addEventListener('click', () => {
    btnTrue[0].textContent = 'TRUE'
})

h1Elt.addEventListener('mouseover', () => {
    h1Elt.textContent = 'hovering'
})

h1Elt.addEventListener('mouseout', () => {
    h1Elt.textContent = 'Quiz.js'
})
```


