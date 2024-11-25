import calculator.Calculator;
public class MainCalc{
    public static void main(String[] args){
        int a = 10;
        int b = 5;
        Calculator myobj = new Calculator();
        myobj.add(a,b);
        myobj.subtract(a, b);
        myobj.product(a, b);
        myobj.divide(a, b);
    }
}