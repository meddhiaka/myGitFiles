## __dirname & __filename

Variables that contains the current directory path and the current file path

```javascript
console.log(__dirname + " and " + __filename)
// output
// C:\Users\meddhiaka\FEM_NodeJsIntro and C:\Users\meddhiaka\FEM_NodeJsIntro\main.js
```
<br>
<br>

## process
A super helpful and **GLOBAL** object,
*ex :*
```javascript
console.log(process)
```

## module.exports & require
```javascript
// In elt.js, We're gonna write
const hello = () => console.log("hello")
module.exports = hello

// And in the main JS file, main.js, We'll say
const a = require('elt.js')
a()
// It will executes the hello function which prints the hello string 
```