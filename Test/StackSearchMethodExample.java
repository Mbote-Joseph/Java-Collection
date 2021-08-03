package Test;

import java.util.Stack;  
import java.util.*;
public class StackSearchMethodExample  
{  
        public static void main(String[] args)   
        {  
            Stack<String> stk= new Stack<>();  
            Scanner input= new Scanner(System.in);
            String laptop;
            int number;
            System.out.println("Enter the number of laptops you want :");
            number = input.nextInt();
            for(int i=0, n=number; i<n;i++){
                System.out.println("Enter the laptop name :");
                laptop = input.nextLine();
                stk.push(laptop);
            }
        
           
            //pushing elements into Stack  
            // stk.push("Mac Book");  
            // stk.push("HP");  
            // stk.push("DELL");  
            // stk.push("Asus");  

            String search;
            System.out.println("Enter the laptop name of the laptop you want to search :");
            search = input.nextLine();

            System.out.println("Stack: " + stk);  
            // Search an element  
            int location = stk.search(search);  
            System.out.println("Location of "+search+" : " + (location+1));  
        }  
} 