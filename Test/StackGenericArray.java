package Test;
public class StackGenericArray<E> implements Stack<E>{
    private E[] stack;
    private int top;
    public static final int MAX_CAPACITY = 100;

    @SuppressWarnings("unchecked")
    public StackGenericArray(int capacity){
        stack = (E[])new Object[capacity];
        top = 0;
    }

    @SuppressWarnings("unchecked")
    public StackGenericArray(){
        stack = (E[])new Object[MAX_CAPACITY];
        top = 0;
    }

    public boolean isEmpty(){
        return top == 0;
    }

    public E peek(){
        //condition stack is not empty
        return stack[top-1];
    }

    public E pop(){
        // condition stack is not empty
        E elementToPop;
        top--;
        elementToPop = stack[top];
        stack[top] = null;
        return elementToPop;
    }

    @SuppressWarnings("unchecked")
    public void push(E element){
        E[] tempStack;

        if (top == stack.length){
            tempStack = (E[])new Object[2*stack.length];
            for (int i=0; i<stack.length; i++){
                tempStack[i] = stack[i];
            }
            stack = tempStack;
        }
        stack[top] = element;
        top++;
    }

    public int stackSize(){
        return top++;
    }

    public void display(){
        System.out.print("The stack elements are: ");
        for (int i=0; i<top; i++){
            System.out.print(stack[i]+" - ");
        }
        System.out.println();

    }


}