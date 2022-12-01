# 1) React & ReactDOM idea (ignored)
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

* We can put directly the src image if the image is from the www (internet), example:
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
