# Configuration with Eslint

* Using a tool for correct dev method...

`npm install eslint -D`

* Creating a new script called `lint` in the scripts within the package json file.

`"lint": "eslint";`

* Configuring the eslint tool by running this command

`npm run lint -- --init`

* Finally testing our tool.

`npm run lint`
 
 <br><br><br>

 # Runing the nodemon API

 * Installing nodemon

 `npm install nodemon --save`

 * Adding the start script

 `"start": "nodemon app.js"`

 * Adding the nodemon Config to the package file

 ```json
 "nodemonConfig": {
    "restartable": "rs",
    "ignore": [
      "node_modules/**/node_modules"
    ],
    "delay": "2000",
    "env": {
      "NODE_ENV": "development",
      "PORT": 4000
    }
  }
 ```

 * Finally

 ```javascript
 import express from "express";

const app = express();
const port = process.env.PORT || 3000;

app.get('/', (req, res) => {
    res.send("Welcome to my nodemonAPI");
});

app.listen(port, () => {
    console.log(`running on port ${port}`);
});
```

# Using Express Router for GET

```javascript
import express from "express";

const app = express();
const port = process.env.PORT || 3000;
const bookRouter = express.Router();

bookRouter.route('/books')
 .get((req, res) => {
    const response = { hello: "this is my api" }
    res.json(response)
 })

app.use('/api', bookRouter)

app.get('/', (req, res) => {
    res.send("Welcome to my nodemonAPI");
});

app.listen(port, () => {
    console.log(`running on port ${port}`);
});
```

* We just created the json file called books inside of API, in this link `localhost:4000/api/books`

#