# 1) Installation & somecode (ignored)
### CDN links
```
<script src="https://unpkg.com/react@17.0.2/umd/react.development.js"></script>

<script src="https://unpkg.com/react-dom@17.0.2/umd/react-dom.development.js"></script>
```

<hr>
### two important functions
* React.createElement()
* ReactDOM.render()

```javascript
    const App = () => {
        return React.createElement{
            "div",
            {id : "introduction"},
            React.createElement("h1", null, "this is a heading")
        }
    }

    const renderedApp = React.createElement(App)

    ReactDOM.render(renderedApp, document.getElementById('root'))
```

<hr>

# 2) React Render with the permanent way !!!!!

#### To install the ReactApp simply type this command:

##### `npx create-react-app app-name` 

# Just ignore the last one !!!!

```javascript
// After creating a file named ` App.js `, then
// App.js :
function App() {
    return (
        <div>Hello world.</div>
    )
}
// Use the file name without the extension as the component. 
import React from 'react'
import ReactDOM from 'react-dom/client'
import App from './App'

const root = ReactDOM.createRoot(document.getElementById('root'))
root.render(
    <App />
)
```

<hr> 

# 3) Multi components and the div trick.

##### We're gonna Create two components and another empty css file, Here we go ...

```javascript
// style.css && index.css ( empty files )
// Header.js
function  Header() {
    return (
        <div>
            <ul>
                <li>Home</li>
                <li>Services</li>
                <li>Career</li>
                <li>About</li>
            </ul>
        </div>
    )
}
export default Header

// App.js
function App() {
    return (
        <div>
            <h1>I'm</h1>
            <h2>Med</h2>
            <h3>Dhia</h3>
            <h4>Kassab</h4>
        </div>
    )
}
export default App

// index.js
import react from 'react'
import ReactDOM from 'react-dom/client'
import './index.css'
import './style.css'
import App from './App'
import Header from './Header'

const root = ReactDOM.createRoot(document.getElementById('root'))
root.render(
    <div>
        <Header />
        <App />
    </div>
)
```



<hr>

# 4) Working with Images in ReactJS

* First of all, img element is a closing tag
* src attribute in the img element looks like an object **calling for a component (without extension)** , or We can use this alternative **Calling directly for the image file using require method :**

```javascript
    <img src={require('Logo.png')} alt='Logo'/>
```

* We can put directly the src image url if the image src is external, example:
```javascript
    <img src='https://www.google.com/theImgStuff.png' alt='imgStuff' />
```
* alt attribute is obliged to write
* Explanation **(calling for a component (without img extension)):**

```javascript
// App.js :
import Logo from './Logo.svg'

function App() {
    return (
        <div>
            <h1>Hello world</h1>
            <img src={Logo} alt='Logo'/>
        </div>
    )
}

// index.js
import App from './App'
import React from 'react'
import ReactDOM from 'react-dom/client'
import './index.css'

const root = ReactDOM.createRoot(document.getElementById(root))
root.render(
    <div>
        <App />
    </div>
)
```

<hr>

# 5) Styling In ReactJS

* We can style the document using an external CSS file, and with this attribute `className` in place of `class` that is in classic CSS

<u><b><i> example: </i></b></u>

```javascript

import './index.css'

// Inside <App/> component :
function App() {
    return (
        <h1 className="header">Hello World</h1>
    )
} 
```

* Alternatively, We can also style a specific element with style double object definition, it is called **inner style** in React.JS

<u><b><i> another example: </i></b></u>

```javascript
function App() {
    return (
        <h1 
        style={
            {
            color: "red", 
            fontSize: "20px", 
            fontWeight: "600"
            }
        }>
        Hello World
        </h1>
    )
}
```

<hr>

# 6) Export syntax & Components

* For repeatly used components like Header, Footer etc., Better solution, Create a folder named Components inside `/src` folder then add the JS components inside of it.

* **Every component is UpperCase written**

```javascript
function ComponentName () {
    return (
        // HTML piece
    )
}

export default ComponentName

/* IS EQUIVALENT TO */

export default function ComponentName () {
    return (
        // HTML piece
    )
}

```

<hr>

# 7) Props

* Props works in children components, And its properties are defined in the main file.

<u><i> example :</i></u>

```javascript
// Child file
export default function Card(props) {
    return (
        <div>
            <h1>{props.game}</h1>
            <h4>{props.info}</h4>
        </div>
    )
}

// Main file
render(
    <div>
        <Card
         game={"gta5"} 
         info={"new first person gameplay"}
         />
        
        <Card
         game={"fifa22"} 
         info={"sports game"}
         />
        
        <Card
         game={"cod"} 
         info={"war game"}
         />
    </div>
)

```

<hr>

# 8) Props with Map (Dynamic)

* **Suppose we have a data file**

```javascript
// data.js
export const data = [
    {
        title: "cod",
        desc: "game 1"
    },
    {
        title: "gta 5",
        desc: "game 2"
    },
    {
        title: "fifa 22",
        desc: "game 3"
    }
]
```

* **We have also a Card component**

```javascript
export default function Card(props) {
    return (
        <div>
            <h1>{props.game}</h1>
            <h4>{props.info}</h4>
        </div>
    )
}
```

* We want to dynamically create cards in the index file using `data.js` and `the Card Component`, We're gonna use Map JS method and Javascript Semicolons to specify the result. 

```javascript
import Card from "./Components/Cards"
import { data } from "./data"

const Cards = data.map((elt) => 
(<Card
 game={elt.title} 
 info={elt.desc}
 />)
 )

export default function App() {
    return(
            <div>
                {Cards}
            </div>
    )
}
```

<hr>

# 9) Eslint & Prettier config for ReactJS

* Installing `eslint` by running this command:

```
npm install eslint --save-dev
```

* Installing `eslint plugins` for React

```
npm install eslint-plugin-react --save-dev
npm install eslint-plugin-react-hooks --save-dev
```

* Copying the whole object of `"eslintConfig"` that is inside of `package.json` to the new file named `.eslintrc.json`, After copying we're remove the object after being copied, Then we add the value `"prettier"` to the config.

* Installing Prettier and Prettier Config for eslint

```
npm install prettier --save-dev --save-exact
npm install eslint-config-prettier --save-dev
```

* Creating a two files named `.prettierrc.json` and `.prettierignore`, Then adding this line `/node_modules` to `.prettierrc.json` for the reason of blocking that plugin to not format the files that is inside of the directory `node_modules`.

<hr>

# 10) Javascript & Css in the same time

* Here is a snippet of code

```javascript
    <div
                style={{
                    backgroundImage: `url(${props.img_path})`,
                    width: "300px",
                    height: "300px",
                    backgroundRepeat: "no-repeat",
                    backgroundSize: "cover",
                    borderRadius: "10px"
                }}>
    </div>
```

* The snippet describing the writing of JS and CSS at the same time, At that moment we need to use this trick ` \backtick ${props.var_name} \backtick `

<hr>

# 11) useState()

* useState() is an array composed of a Variable_name and a function called setVariable_name used to set a new state to the initial variable

<u><i>example :</i></u>

```javascript
import React from 'react'

export default function App() {

    // initial value
    let [Name, setName] = React.useState("Dhia") 
    
    return (
        <div
            style={{
                fontSize: '40px',
                textAlign: 'center'
            }}
            onClick={
                () => {
                    setName("Dhia is clicked")
                }
            }
        >
            {Name}
        </div>
    )
}
```

<u><i>The yes/no example :</i></u>

```javascript
export default function App() {

    const [Name, setName] = React.useState("yes") 

    return (
        <div onClick={
              () => {setName((v) => (v === "yes" ? "no" : "yes"))}
            }>
            {Name}
        </div>
    )
}
```

<u><i>The yes/no example (Clean code):</i></u>

```javascript
export default function App() {

    const [Name, setName] = React.useState("yes") 

    return (
        <div onClick={
              () => {setName(v => !v)}
            }>
            {Name ? "yes" : "no"}
        </div>
    )
}
```

<br>

<u><i><b>useState() playing with CSS properties and fontAwesome...</b></i></u>

```javascript
import React from 'react'
import './Styling/App.css';


export default function App() {
  const [color1, setColor] = React.useState(true)  
  
  function toggle() {
    setColor((v) => !v)
  }

  return (
        <div
          style={{
            fontSize: '100px',
            textAlign: 'center',
            cursor: 'pointer',
          }}
          onClick={
            toggle
          }
        >
            <i 
              className="fa-solid fa-star" 
              style={{
                color: color1 ? '' : 'gold'
              }}
            >
            </i>
        </div>
    )
}
```

*

<hr>