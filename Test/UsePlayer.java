package Test;

public class UsePlayer {
    public static final int NUMBER_OF_OBJECTS = 100;

    public static void main(String[] args) {

        Object[] objectArray;
        Player p1,p2,p3,p4,p5,p6,p7,p8,p9,p10;
        boolean b;
        //objectArray[0] is unused
        objectArray = new Object[NUMBER_OF_OBJECTS];
        p1 = new Player(1, 4);
        p2 = new Player(2, 1);
        objectArray[1] = p1;
        objectArray[2] = p2;
        b = p1.equals(p2);
        System.out.println("p1 equals p2 "+ b);
        b = objectArray[1].equals(objectArray[2]);
        System.out.println("o1 equals o2 "+ b);

        p3 = new Player(1, 2);
        p4 = new Player(1, 3);
        objectArray[3] = p3;
        objectArray[4] = p4;
        b = p3.equals(p4);
        System.out.println("p3 equals p4 "+ b);
        b = objectArray[3].equals(objectArray[4]);
        System.out.println("o3 equals o4 "+ b);

        p5 = new Player(1, 3);
        p6 = new Player(2, 2);
        objectArray[5] = p5;
        objectArray[6] = p6;
        b = p5.equals(p6);
        System.out.println("p5 equals p6 "+ b);
        b = objectArray[5].equals(objectArray[6]);
        System.out.println("o5 equals o6 "+ b);

        p7 = new Player(1, 2);
        p8 = null;
        objectArray[7] = p7;
        objectArray[8] = p8;
        b = p7.equals(p8);
        System.out.println("p7 equals p8 "+ b);
        b = objectArray[7].equals(objectArray[8]);
        System.out.println("o7 equals o8 "+ b);

        p9 = new Player(1, 2);
        p10 = new Player(1, 2);
        objectArray[9] = p9;
        objectArray[10] = p10;
        b = p9.equals(p10);
        System.out.println("p9 equals p10 "+ b);
        b = objectArray[9].equals(objectArray[10]);
        System.out.println("o9 equals o10 "+ b);
    }
}
