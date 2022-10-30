import java.util.*; //Through this we import all need packages in the code

public class Solution {
    //here we require 2 queue, for enqueue and dequeue
    Queue<Integer> queue1 = new LinkedList<Integer>();
    Queue<Integer> queue2 = new LinkedList<Integer>();
    int size = 0; //initial size is 0

    //Push function
    public void push(int data){ //here in data we share the number from the main function in queue 2
        queue2.add(data); //added the number to queue 2
        size++; //size increases
        while(!queue1.isEmpty()){
            queue2.add(queue1.remove()); //return value is added to queue 2
        }
        //here we swap the numbers
        Queue<Integer> temp = queue1;
        queue1 = queue2;
        queue2 = temp;
    }

    //Pop function
    public int pop() throws Exception{ //used custom exception to throw our exception
        if(queue1.isEmpty()){
            throw new Exception("The stack have null elements");
        }
        size--; //size gets decreases
        return queue1.remove();
    }
    public static void main(String[] args) throws Exception {

        Solution obj = new Solution();
        //push the numbers to data
        obj.push(12);
        obj.push(67);
        obj.push(34);
        obj.push(89);
        obj.push(21);

        System.out.println("Removed Element: "+obj.pop());
        System.out.println("Removed Element: "+obj.pop());
        System.out.println("Removed Element: "+obj.pop());
        System.out.println("Removed Element: "+obj.pop());
        System.out.println("Removed Element: "+obj.pop());
  }
}
