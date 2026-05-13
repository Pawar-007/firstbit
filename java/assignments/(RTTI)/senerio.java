class Artist{
   String name;
   int age;
   String gender;
   String country;
   Artist(String name, int age, String gender, String country) {
      this.name = name;
      this.age = age;
      this.gender = gender;
      this.country = country;
   }
   public String getName() {
      return name;
   }
   public void setName(String name) {
      this.name = name;
   }
   public int getAge() {
      return age;
   }
   public void setAge(int age) {
      this.age = age;
   }
   public String getGender() {
      return gender;
   }
   public void setGender(String gender) {
      this.gender = gender;
   }
   public String getCountry() {
      return country;
   }
   public void setCountry(String country) {
      this.country = country;
   }

   void displayDetails() {
      System.out.println("Name: " + name);
      System.out.println("Age: " + age);
      System.out.println("Gender: " + gender);
      System.out.println("Country: " + country);
   }

}

class Painter extends Artist{
   String paintingStyle;
   String canvasType;
   String mediumUsed;
   int famousCountingCount;

   Painter(String name,int age,String gender,String country,String paintingStyle,String canvasType,String mediumUsed,int famousCountingCount){
       super(name, age, gender, country);
       this.paintingStyle=paintingStyle;
       this.canvasType=canvasType;
       this.mediumUsed=mediumUsed;
       this.famousCountingCount=famousCountingCount;
   }

   public String getPaintingStyle() {
      return paintingStyle;
   }

   public void setPaintingStyle(String paintingStyle) {
      this.paintingStyle = paintingStyle;
   }

   public String getCanvasType() {
      return canvasType;
   }

   public void setCanvasType(String canvasType) {
      this.canvasType = canvasType;
   }

   public String getMediumUsed() {
      return mediumUsed;
   }

   public void setMediumUsed(String mediumUsed) {
      this.mediumUsed = mediumUsed;
   }

   public int getFamousCountingCount() {
      return famousCountingCount;
   }

   public void setFamousCountingCount(int famousCountingCount) {
      this.famousCountingCount = famousCountingCount;
   }
}
class Musician{
   
}