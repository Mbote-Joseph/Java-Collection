package Test;

public class RemoveBottomStack<E> extends StackGenericArray<E>{
    @SuppressWarnings("unchecked")
    public StackGenericArray<E> removeBottom(){
        // get the size of the stack  ('super' is reference variable used to refer to parent class object)
        int size = super.stackSize();

        // create a temporary StackGenericArray to store the elements of stack in reverse
        StackGenericArray<E> temp = new StackGenericArray<E>(size);

        // the top element at first is null (it is not useful to us)
        super.pop();

        // pop the element from stack and push it to temporary StackGenericArray
        for (int i=0; i < size; i++){
            temp.push(super.pop());
        }

        // At this point, the temp contains elements of stack in reverse (for example, if 'a' was at botttom of stack, then 'a' is at top of temp)
        //
        // pop top element of temp (i.e bottom element of stack)
        temp.pop();

        // push the remaining elements from temp to stack
        for (int i=0; i < size-1; i++ ){
            super.push(temp.pop());
        }

        // return the parent class object
        return this;
    }
}

// End of the class