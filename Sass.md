# Installing Sass Globaly (Obliged)

```
npm install sass -g
```

<hr>

# Checking Sass Docs & extension

```
sass --help
```

> Sass extension : `scss`

<hr>

# Watch option

* To watch Sass conversion, simply run :

> sass --watch "global .scss folder path"

* To watch Sass conversion, with compressed output, Simply add the new option :

> sass watch "global .scss folder path" --style compressed  

<hr>

# Nesting

* Simply beautiful organized way to write css properties

<u><b>example</b></u>

```scss
body{
    margin: 0;
    padding: 0;
    nav{
        background-color: aquamarine;
        padding: 25px;
        ul{
            display: flex;
            flex-direction: row;
            justify-content: center;
            align-items: center;
            list-style: none;
            column-gap: 10px;
            li{
                color: darkred;
            }
        }
        input{
            padding: 10px;
            &::placeholder{
                color: red;
            }
        }
    }
}
```

* Ability of adding CSS selectors in a new way using `&:selectorName{ X }` and `&::selectorName{ X } for forms`:

```scss
.unoLi{
    .liBlock{
        cursor: pointer;
        &:hover{
            color: darkorange;
        }
    }
}

input{
    &::placeholder{
        color: red;
    }
}
```

* **NB: The ability of writing multiple CSS starting in one SCSS file** 

<hr>


# Margin, Padding & Transition in Sass...

* Padding , Margin And transition can be used like a CSS element

```scss
// Padding example
div{
    background-color: white;
    padding: {
        top: 20px;
        bottom: 20px;
        left: 20px;
        right: 20px;
    };
}

// Margin example
div{
    background-color: white;
    margin: {
        top: 20px;
        bottom: 0;
        left: 0;
        right: 0;
    };
}

// Transition example
div{
    background-color: white;
    transition: {
        duration: 2s;
        property: X;
        delay: .5s;
    }
}
```


