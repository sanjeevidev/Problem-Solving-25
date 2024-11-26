package datastructures;
import java.util.Stack;

public class StackExample {
    static boolean isBalanced(String brackets) {
        Stack<Character> stack = new Stack<>();
        for(int i=0;i<brackets.length();i++){
            char ch = brackets.charAt(i);
            if(ch == '('){
                stack.push(ch);
            }else{
                if(stack.isEmpty()){
                    System.out.println("UnBalanced");
                    return false;
                }else{
                    stack.pop();
                }
            }
        }
        return stack.isEmpty();
    }
    public static void main(String[] args) {

        System.out.println("Test case 1 (()) : " + isBalanced("(())"));
        System.out.println("Test case 2 (() : " + isBalanced("(()"));
        System.out.println("Test case 3 ()() : " + isBalanced("()()"));
    }
}
