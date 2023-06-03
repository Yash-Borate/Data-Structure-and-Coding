
//exercise using oject
//itemName
//price
//discont
//itemcode

let object={

    itemName :'dettol cool',
    price:1999,
    discount:10,
    itemcode:1094705

}

console.log(object);

function product(title){
    return{
        itemName :title,
        price:1999,
        discount:10,
        itemcode:1094705
    }
}

function Object(title,price,discount,itemcode){
    this.itemName=title,
    this.price=price,
    this.discount=discount,
    this.itemcode=itemcode
}

const football= product('football');

const yash=new Object('yash borate',123,10,109);