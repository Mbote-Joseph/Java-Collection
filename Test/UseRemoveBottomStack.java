package Test;

public class UseRemoveBottomStack {
    @SuppressWarnings("unchecked")
    public static void main(String[] args)
    {

        RemoveBottomStack<String> test1Stack;
        StackGenericArray<String> result1Stack;
        RemoveBottomStack<Integer> test2Stack;
        StackGenericArray<Integer> result2Stack;

        test1Stack = new RemoveBottomStack<String>();

        System.out.println("*************** START TEST 1 ****************");
        System.out.println("*********************************************");

        test1Stack.push("a");
        test1Stack.push("b");
        test1Stack.push("c");
        test1Stack.push("d");
        test1Stack.push("e");

        test1Stack.display();
        result1Stack = test1Stack.removeBottom();
        result1Stack.display();

        System.out.println("**************** DONE TEST 1 ****************");
        System.out.println("*********************************************");

        test2Stack = new RemoveBottomStack<Integer>();
        System.out.println("*************** START TEST 2 ****************");
        System.out.println("*********************************************");

        test2Stack.push(1);
        test2Stack.push(2);
        test2Stack.push(3);
        test2Stack.push(4);
        test2Stack.push(5);

        test2Stack.display();
        result2Stack = test2Stack.removeBottom();
        result2Stack.display();

        System.out.println("**************** DONE TEST 2 ****************");
        System.out.println("*********************************************");

    }
}
