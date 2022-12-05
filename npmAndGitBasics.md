## Find npm package version
```
npm -v <package name>
```
## List all npm package
```
npm -g list
```

<hr>

## Add a package to node devDependencies object personal folder
```
npm install -D <package name>
```


<hr>

## How to contribute into a project
* At first, We need to fork the repo

then
```
    git clone <repo.git>
```
* Create a new branch with
```
git branch <new branch name>
```
* Check for the current branch name
```
git branch --show-current
```  
* Change from main branch to the personal branch
```
git checkout <new branch name>
```
<hr>

## Npmjs website

* Main npm website to search for packages
`www.npmjs.com`

<hr>

## Check for package infos & version semantic syntax

* Check npm package informations
```
npm info <package-name>
```

* Package semantic syntax
```
version : (major version).(minor version).(patch version)
```

<hr>

## .gitignore file

* To let the git tool ignore the committing of files & directions you don't want to upload to your current project just create a `.gitignore` file then add the ignored (directories, files) in it ...

<u><b><i>example content of a .gitignore file </i></b></u>

```
node_modules
```

Git will not upload or commit the node_modules folder

<hr>

## Importing the whole package and printing its content on the terminal

* Simply typing this code using the underscore `_`

```javascript
import _ from 'package_name'

console.log(_)

/*
This will simply print the
whole files of the package
with a form of an JS object.
*/
```

<hr>

## Install npm package globally

```
npm install <package_name> -g
```

* the `-g` option makes the difference, while installing the package

<hr>

## NPM scripts

Executing npm scripts internally in a project is fun

* First of all we're gonna add the X script to the `"scripts"` object.

<u><b><i>example adding npm script : </i></b></u>

```python
*/
inside of package.json file, we're 
gonna dive into the "scripts" 
object then add the new script
*/

// package.json:

"helloworld": "npm serve ./src/index.html"
```

then we run the script using this command
```
npm run helloworld
```

<br><br>

* For the case of optional/custom scripts

<u><b><i>example a custom npm script : </i></b></u>

```python
// Creating a custom script

"rm": "rm"
```

* * Executing the script by adding the filename, command:

```
npm run rm file.extension
```
