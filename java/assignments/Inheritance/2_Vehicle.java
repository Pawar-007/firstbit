class Vehicle {
   String vehicleNumber;
   String model;
   String companyName;
   int noOfWheels;
   double price;
   public String getVehicleNumber() {
      return vehicleNumber;
   }
   public void setVehicleNumber(String vehicleNumber) {
      this.vehicleNumber = vehicleNumber;
   }
   public String getModel() {
      return model;
   }
   public void setModel(String model) {
      this.model = model;
   }
   public String getCompanyName() {
      return companyName;
   }
   public void setCompanyName(String companyName) {
      this.companyName = companyName;
   }
   public int getNoOfWheels() {
      return noOfWheels;
   }
   public void setNoOfWheels(int noOfWheels) {
      this.noOfWheels = noOfWheels;
   }
   public double getPrice() {
      return price;
   }
   public void setPrice(double price) {
      this.price = price;
   }
   
}
class Bike extends Vehicle{
   int noOfStands;
   int noOfHelmets;
   String bikeCategory;
   public int getNoOfStands() {
      return noOfStands;
   }
   public void setNoOfStands(int noOfStands) {
      this.noOfStands = noOfStands;
   }
   public int getNoOfHelmets() {
      return noOfHelmets;
   }
   public void setNoOfHelmets(int noOfHelmets) {
      this.noOfHelmets = noOfHelmets;
   }
   public String getBikeCategory() {
      return bikeCategory;
   }
   public void setBikeCategory(String bikeCategory) {
      this.bikeCategory = bikeCategory;
   }
   
}
class Car extends Vehicle{
   boolean hasPowerSteering;
   String driveMode;
   boolean parkingAssistSensors;
   public boolean isHasPowerSteering() {
      return hasPowerSteering;
   }
   public void setHasPowerSteering(boolean hasPowerSteering) {
      this.hasPowerSteering = hasPowerSteering;
   }
   public String getDriveMode() {
      return driveMode;
   }
   public void setDriveMode(String driveMode) {
      this.driveMode = driveMode;
   }
   public boolean isParkingAssistSensors() {
      return parkingAssistSensors;
   }
   public void setParkingAssistSensors(boolean parkingAssistSensors) {
      this.parkingAssistSensors = parkingAssistSensors;
   }
   
}

class Bus extends Vehicle{
   int passengerCapacity;
   int standingCapacity;
   public int getPassengerCapacity() {
      return passengerCapacity;
   }
   public void setPassengerCapacity(int passengerCapacity) {
      this.passengerCapacity = passengerCapacity;
   }
   public int getStandingCapacity() {
      return standingCapacity;
   }
   public void setStandingCapacity(int standingCapacity) {
      this.standingCapacity = standingCapacity;
   }
   
}