const characters=[
    {
        name:"tarak mehta",
        height:'172',
        mass:'77',
        eye_color:'brown',
        gender:'male'
    },
    {
        name:"jethalal",
        height:'145',
        mass:'136',
        eye_color:'black',
        gender:'male'
    },
    {
        name:"babbita ji",
        height:'150',
        mass:'49',
        eye_color:'gray',
        gender:'female'
    },
    {
        name:"krishna iyer",
        height:'168',
        mass:'84',
        eye_color:'black',
        gender:'male'
    }

];

// get an array of all names

console.log(characters.map((ch) => {
    return ch.name;
})); 

console.log(characters.map(ch=>ch.name));

// get an arrray object with just name and heigth properties

const properties=characters.map(ch=>{
    return{
        name:ch.name,
        height:ch.height
    }
});

// get the total heiht of all characters

const total_heigth = characters.reduce((prevheight,characters)=>{
    return prevheight+ Number(characters.height);
},0);




