// Remove duplicate character 
import java.util.Stack;
class Remove_Duplicates {
    public String removeDuplicates(String s) {
        Stack<Character> stack = new Stack<>();
        for(char ch:s.toCharArray()){
            if(stack.isEmpty()){
                stack.push(ch);
            }else{
                if(stack.peek()==ch){
                    stack.pop();
                }else{
                    stack.push(ch);
                }
            }
        }
        StringBuilder result = new StringBuilder();
        for (char ch : stack) {
            result.append(ch);
        }
        
        return result.toString();
    }
}