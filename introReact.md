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