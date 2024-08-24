public  class Car {
    
    int noOfWheels;
    String color ;
    float price;
    float totalFuel;
    int noOfSeats;
    static int  maxSpeed=200;


    public void drive (){
        if(totalFuel==0){
            System.out.println("Car is out of fuel");

        }else if (totalFuel<=5) {
            System.out.println("Car is reserved mode , please refuel");
            totalFuel--;
        }else{
        System.out.println("Car is driving");
        totalFuel--;
        }
    }

    public void addFuel(float fuel){
        totalFuel+= fuel;
    }

    public void currentFuelLavel(){
        System.out.println(totalFuel);
    }

    public void display(){
        System.out.println(noOfWheels);
    }


}


