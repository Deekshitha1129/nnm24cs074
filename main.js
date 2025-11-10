const arithmetic = require('./arithmetic');
const fs=require('fs');
const a=10;
const b=5;
const sum=arithmetic.add(a,b);
const difference=arithmetic.subtract(a,b);
const product=arithmetic.multiply(a,b);
const quotient=arithmetic.divide(a,b);
console.log(`Sum: ${sum}`);
console.log(`Difference: ${difference}`);
console.log(`Product: ${product}`);
console.log(`Quotient: ${quotient}`);

const results=
`Sum: ${sum}\n
Difference: ${difference}\n
Product: ${product}\n
Quotient: ${quotient}\n`;

fs.writeFile('results.txt',results,(err)=>{
    if(err) {
    console.log('Error writing file');
}else{
    console.log('Results saved to results.txt');
}
});

fs.readFile('results.txt','utf8',(err,data)=>{
 if (err){
    console.log('Error reading file');
    }else{
    console.log('File contents:');
    console.log(data);
    }
});
