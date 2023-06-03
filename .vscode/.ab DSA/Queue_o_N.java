public class Queue_o_N {
    int a[];
    int n;
    int front=-1,rear=-1;

    public Queue_o_N(int n){
        this.n=n;
        a=new int [n];
    }

    void enqueue(int data){
        if((rear+1)%n==front){
            return;
        }
        if(front==-1)front=0;
        rear=(rear+1)%n;
        a[rear]=data;
    }
    int dequeue(){
        if(front==-1){
            return -1;
        }
        int result=a[front];
        if(front==rear){
            front=rear=-1;
        }
        else{
            front=(front+1)%n;
        }
        return result;
    }
}
