package datastructures;
import java.util.LinkedList;
import java.util.Queue;
public class QueueUtil{
    public static void main(String[] args){
        Queue<Integer> queue = new LinkedList<>();
        // Enqueue : offer()
        queue.offer(1); //Enqueued:1
        queue.offer(2); //Enqueued:2

        // Dequeue : poll()
        System.out.println(queue.poll()); //Dequeued:1
        System.out.println(queue.poll()); //Dequeued:2
    }
}
