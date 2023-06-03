
class product{
    constructor(itemName){
        this.itemName=itemName;
    }

    get getItemName(){
        return this.itemName + ' is a product';
    }
}

class furniture extends product{
    constructor(itemName){
        super(itemName);
    }

    get getItemName(){
        return this.itemName+' is a furniture';
    }
}


let pencil=new product("pencil");
console.log(pencil.getItemName);

let board=new furniture("board");
console.log(board.getItemName);

