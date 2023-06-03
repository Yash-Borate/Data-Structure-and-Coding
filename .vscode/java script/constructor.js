// Factory function

// function createConst(title){
//     return{
//         age:20,
//         name:title,
//         weight:70,
//         height:6,
//         enroll(){
//             console.log("you are entered in yash world");
//         }
//     }
    
// }

// const course=createConst("yash borate");

// course.enroll();
// console.log(course);



// function Course(title){
//     this.title=title,
//     this.enroll=function(){
//         console.log("you are in the yash world "+ title ) ;
//     }
// }

// const yash=new Course("yash borate");

// yash.enroll();
// console.log(yash);
// yash.check=function(){
//     console.log("check for constant log function");
// }

function course(title){
    this.name=title;
    this.enroll=function(){
        console.log("welcome to yash world");
    }

}

let yash=new course("yash");
yash.enroll() ;

yash.create=function(){
    console.log("new object are created");
}

console.log(yash);