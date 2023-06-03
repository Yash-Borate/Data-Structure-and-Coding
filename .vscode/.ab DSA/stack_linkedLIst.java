class stack_linkedLIst {

    Node head;
    int size;

    public mystack(){
        head=null;
        size=0;
    }

    void push(int data){
        Node temp=new Node(data);
        temp.next=head;
        size++;
        head=temp;
    }

    Node peek(){
        if(head==null){
            throw new Exception();
        }
        return head.data;
    }

    int pop(){
        
        if(head==null){
            throw new Exception();
        }

        int res=head.data;
        head=head.next;
        size--;

        return res;
    }

    boolean isEmpty(){

        return head==null;
    }

    int size(){
        return size;
    }
    
}
