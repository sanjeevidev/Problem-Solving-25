package datastructures;
public class QueueExample {
    // Enqueue 10 elements and dequeue 5 elements
    private int[] arr;
    private int front;
    private int rear;
    private int size;
    private int capacity;

    public QueueExample(int capacity){
        this.arr = new int[capacity];
        this.front = 0;
        this.rear = -1;
        this.size = 0;
        this.capacity = capacity;
    }

    public boolean isEmpty(){
        return size == 0;
    }

    public boolean isFull(){
        return size == capacity;
    }

    public void enqueue(int value){
        if(isFull()){
            System.out.println("Queue is Full. Cannot Enqueue");
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = value;
        size++;
        System.out.println("Enqueued: "+value);
        }
        
    public int dequeue(){
        if(isEmpty()){
            System.out.println("Queue is Empty. Cannot Dequeue");
            return -1;
            }
        int value = arr[front];
        front = (front + 1) % capacity;
        size--;
        System.out.println("Dequeued: "+value);
        return value;
    }

    public int peek(){
        if(isEmpty()){
            System.out.println("Queue is Empty.");
        }else{
            return arr[rear];
        }
        return 0;
    }
}