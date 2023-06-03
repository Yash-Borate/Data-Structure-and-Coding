

class product{
    constructor(itemName,price,discount,Productcode){

        this.itemName=itemName,
        this.price=price,
        this.discount=discount,
        this.Productcode=Productcode
    }

    set Setdiscount(value){
        return this.discount=value;
    }

    get Getdiscount(){
        return this.discount;
    }

    get discountValue(){
        return this.discount*this.price/100;
    }
}


let yash= new product("yash",199,10,1234);

yash.Setdiscount=20;

yash.Getdiscount;

console.log(yash);

console.log(yash.Getdiscount);

let borate=new product("borate",78,30,234);

console.log(borate);

console.log(borate.Setdiscount=60);

console.log(borate.Getdiscount);


// yash.discountValue();

// console.log(yash.discountValue());

console.log(yash.discountValue);

