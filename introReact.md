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

# 3) JavaScript TOOLS
* NPM:
```
npm init -y
npm install -D prettier //Saving it in dependencies ...
```
<hr>
* Prettier:
```perl
Within package.json:
"scripts":{
    "format": "prettier --write \"src/**/{*.js, *,jsx}\" "
    }
And then:
npm run format
```
<hr>