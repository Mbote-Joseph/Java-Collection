package Test;

public class Player {
    private double identifier;
    private int yearsOfMembership ;

    public Player() {
        identifier = 0;
        yearsOfMembership = 0;
    }

    public Player(double identifier, int yearsOfMembership) {
        this.identifier = identifier;
        this.yearsOfMembership = yearsOfMembership;
    }

    public double getIdentifier() {
        return identifier;
    }

    public double getYearsOfMembership() {
        return yearsOfMembership;
    }

/******************** you CANNOT change anything above this line **********************/
/**************************************************************************************/
    /******************** you CAN change anything below this line **********************/


    public boolean equals(Player other){
        //See if the other player is null
        if(other==null){
            return false;
        }
        boolean b = false;

        if (this.identifier == other.identifier &&
                this.yearsOfMembership == other.yearsOfMembership){
            b = true;
        }
        return b;
    }
}
