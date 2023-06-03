public class Queue_array {
    int a[];
    int capacity;
    int rear;

    public queue(int n){
        capacity=n;
        a=new int[n];
        rear=-1;
    }

    void enqueue(int data){
        if(rear==capacity-1){
            return null;
        }
        rear++;
        a[rear]=data;
    }

    int dequeue(){
        if(rear==-1){

            return -1;
        }
        int result=a[0];
        for(int i=0;i<n;i++){
            a[i]=a[i+1];
        }
        rear--;

        return result;
    }

    int getFront(){
        if(rear==-1){
            return -1;
        }
        return a[0];
    }
}
