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

## node file system

* First of all we should create configuration file aka **package.json**

* Add a new line

```json
"type": "module",
```

* Finally work with this piece of code

```javascript
// main.js
import { readFile, writeFile } from 'fs/promises'

let template = await readFile(new URL('./index.html', import.meta.url), 'utf-8')

const data = {
    title: "I'm a title",
    content: "Lorem, ipsum dolor sit amet consectetur adipisicing elit. Temporibus, animi!"
}

for(let key in data){
    template = template.replace(`{${key}}`, data[key])
}

writeFile(new URL('./newIndex.html', import.meta.url), template)
```

<br><br>

## Catching errors in Async & Sync functions

*Suppose that indexxx.html does not exist...*

##### Sync functions

```javascript
import { readFile } from 'fs'

const result = readFile(new URL('./indexxx.html', import.meta.url), 'utf-8', (err, data) => {
    if (err) {
        console.log(err)
    } else {
        console.log('there is no errors')
    }
})
```

<br>

##### Async functions

* First way

```javascript
import 'readFile' from 'fs/promises'

const result = await readFile(new URL('./indexxxxx.html', import.meta.url), 'utf-8').catch( e => {
    if (e) {
        console.log(e)
    }
    else {
        console.log('there is no erros')
    }
})
```

* Second way

```javascript
import 'readFile' from 'fs/promises'

try{
    const result = await readFile(new URL('./indexxx.html', import.meta.url), 'utf-8')
}
catch (e) {
    console.log(e)
}
```

## CLI 

* Creating a new pure package.json file

#### Specifying the node path in CLI

``#! C:\Program Files\nodejs\node.exe``

#### Choosing the CLI name

* * Adding a new object to package.json file called bin and specifying CLI name equivalent to the root file of the CLI itself
```
"bin": {
    "reddit": "./reddit.mjs"
} 
```

<br><br>

## Creating a Low-Level Server

```javascript
import http from 'http'

let host = 'localhost'
let port = 8000

let server = http.createServer((request, response) => {
    // Server activity: Handle request and respond with a callback
    if (request.method === 'POST') {
        let body = ''
        
        request.on('data', (chunk) => {
            body += chunk
        })

        request.on('data', () => {
            console.log(body)
        })

        response.write(201)
        response.end('ok')
    } else {
        response.writeHead(200)
        response.end('hi')
    }
})

server.listen(port, host, () => {
    console.log(`server on ${host}:${port}`)
})
```