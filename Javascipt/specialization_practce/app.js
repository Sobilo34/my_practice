const readline = require('readline');
const fs = require('fs');
const http = require('http');
const { json } = require('stream/consumers');
const url = require('url');

// console.log("Hello from Node js");
// console.log("This is my first Node js");

// const rl = readline.createInterface({
//     input: process.stdin,
//     output: process.stdout
// });

// rl.question("Please enter your name: ", (name) => {
//     console.log("You entered: " + name);
//     rl.close();
// });

// rl.on('close', () => {
//     console.log("Thank you for your input");
//     process.exit(0);
// });

// let textIn = fs.readFileSync('input.txt', 'utf-8');
// console.log(textIn);

// let content = `Data read from input.txt: ${textIn}. \nDate created ${new Date()}`
// let textOut = fs.writeFileSync('output.txt', content)

// let textIn = fs.readFile('start.txt', 'utf-8', (error1, data1) => {
//     console.log(data1)
//     fs.readFile(`${data1}.txt`, 'utf-8', (error2, data2) => {
//         console.log(data2)
//         fs.writeFile('output.txt', `Data1: ${data1}.\n Data2: ${data2}\n Date created ${new Date()}`, () => {
//             console.log("File written successfully");
//         });
//     })
    
// })

// console.log("Reading file...")

const html = fs.readFileSync("./templates/index.html", 'utf-8')
let products = JSON.parse(fs.readFileSync('./Data/product.json', 'utf-8'));
let productListHtml = fs.readFileSync('./templates/product_list.html', 'utf-8');

// let productHtmlArray = products.map((prod) => {
//     let output = productListHtml.replace('{{PROD_ID}}', prod.productId);
//     output = productListHtml.replace('{{PROD_NAME}}', prod.productName);
//     output = productListHtml.replace('{{PROD_PRICE}}', prod.price);

//     return output;
// });

const server = http.createServer((request, response) => {
    let {query, pathname : path} = url.parse(request.url, true);
    console.log(x);
    // let path = request.url;
    if (path === '/' || path.toLocaleLowerCase() === '/home') {
        response.writeHead(200, {
            'Content-Type': 'text/html',
            'my_header' : 'hello, world!'
        });
        response.end(html.replace('{{%CONTENT%}}', "Home"));
    }
    else if (path.toLocaleLowerCase() === '/about') {
        response.writeHead(200, {
            'Content-Type': 'text/html',
            'my_header' : 'hello, world!'
        });
        response.end(html.replace('{{%CONTENT%}}', "About"));
    }
    else if (path.toLocaleLowerCase() === '/contact') {
        response.writeHead(200, {
            'Content-Type': 'text/html',
            'my_header' : 'hello, world!'
        });
        response.end(html.replace('{{%CONTENT%}}', productListHtml));
    }
    else if (path.toLocaleLowerCase() === '/products') {
        response.writeHead(200, {'Content-Type' : 'application/json'});
        response.end("Youre in Product page");
        console.log(products)
    }
    else {
        response.writeHead(404, {
            'Content-Type': 'text/html',
            'my_header' : 'hello, world!'
        });
        response.end("404 Page not found")
    }
});
server.listen(8000, '127.0.0.1', () => {
    console.log('Server has started!');
})