 class stack {

    int a[];
    int top;
    int capacity;

    void mystack(int capacity){
        this.capacity=capacity;
        top=-1;
        a=new int [capacity];
    }

    void push(int data){
        if(top==-1){
            throw new Exception();
        }
        top++;
        a[top]=data;
    }

    int pop(){
        if(top==-1){
            throw new Exception();
        }
        int res=a[top];

        top--;

        return res;
    }

    int peek(){
        if(top==-1){
            throw new Exception();
        }
        return res[top];
    }

    boolean isEmpty(){
        return top==-1;
    }
    
}
