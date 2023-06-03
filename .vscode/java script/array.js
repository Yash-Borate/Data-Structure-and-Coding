
const yash=[1,2,3,4,5,6,7];

console.log(yash.includes(3,3));

let income=[
    {name:'yash',age:20},
    {name:'sandeep',age:21},
    {name:'harsh',age:20}
];

console.log(income.find(function(element){
    return element.age===20;
}))

//arrow function

console.log(income.find(element=> element.name==='yash'
))

let name1=['yash','ganesh'];

let name2=['kartik','saumya'];

console.log(name1.concat(name2));
// let name3=name1.concat(name2);

let name3=[...name1,...name2];

console.log(name3.slice(3));


