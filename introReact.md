# 1) React & ReactDOM idea
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
# 2) React Props

```javascript
const Pet = (props) => {
    return React.createElement(
        "div",
        null,
        [
            React.createElement("h2", null, props.firstStuff),
            React.createElement("h2", null, props.secondStuff),
            React.createElement("h2", null, props.thirdStuff)
        ]
    )
}

const App = () => {
    return React.createElement(
        "div",
        null,
        React.createElement(Pet, {
            firstStuff: "hello world",
            secondStuff: "thank you",
            thirdStuff: "goodBye"
        })
    )
}

const renderedApp = React.createElement(App)

ReactDOM.render( renderedApp, document.getElementById("root"))
```

# 2) JSX
* You should take care of self closing tags with the ending slash
```jsx
    <aSelfClosingtag />
```
* An example of a JSX piece
```jsx
const App = () => {
    <div>
        <h1>Hello World</h1>
    </div>
}
```
* Class is a class in JSX but className is :)
for example
```jsx
const a = () => {
    return (
        <div>
            <h1 class="hello" className="realHello">HTML is not JSX</h1>
        </div>
    )
}

class hello {

}
```