package datastructures;

public class IntegerStack {
    private int[] stack;
    private int top;
    private int size;

    public IntegerStack(int size){
        this.size = size;
        this.stack = stack;
        stack = new  int[size];
        top = -1;
    }

    public void push(int value){
        if(top == size-1){
            System.out.println("Stack Overflow");
        }else{
            stack[++top] = value;
        }
    }

    public int pop(){
        if(top==-1){
            System.out.println("Stack UnderFlow");
        }else{
            return -1;
        }
        return -1;
    }

    public static void main(String[] args) {
        IntegerStack stack = new IntegerStack(5);
        stack.push(10);  
        stack.push(20);  
        stack.push(30);  
        System.out.println("");
    }
}
