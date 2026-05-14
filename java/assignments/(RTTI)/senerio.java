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
   
   void displayData() {

      System.out.println("Name: " + name);
      System.out.println("Age: " + age);
      System.out.println("Gender: " + gender);
      System.out.println("Country: " + country);

      System.out.println("Painting Style: " + paintingStyle);
      System.out.println("Canvas Type: " + canvasType);
      System.out.println("Medium Used: " + mediumUsed);
      System.out.println("Famous Painting Count: " + famousCountingCount);
   }
}
class Musician extends Artist {

   String instrument;
   String genre;
   int numberOfAlbums;
   String vocalOrInstrumental;

   Musician(String name, int age, String gender, String country,
         String instrument, String genre,
         int numberOfAlbums, String vocalOrInstrumental) {

      super(name, age, gender, country);

      this.instrument = instrument;
      this.genre = genre;
      this.numberOfAlbums = numberOfAlbums;
      this.vocalOrInstrumental = vocalOrInstrumental;
   }

   public String getInstrument() {
      return instrument;
   }

   public void setInstrument(String instrument) {
      this.instrument = instrument;
   }

   public String getGenre() {
      return genre;
   }

   public void setGenre(String genre) {
      this.genre = genre;
   }

   public int getNumberOfAlbums() {
      return numberOfAlbums;
   }

   public void setNumberOfAlbums(int numberOfAlbums) {
      this.numberOfAlbums = numberOfAlbums;
   }

   public String getVocalOrInstrumental() {
      return vocalOrInstrumental;
   }

   public void setVocalOrInstrumental(String vocalOrInstrumental) {
      this.vocalOrInstrumental = vocalOrInstrumental;
   }
   
   void displayData() {

      System.out.println("Name: " + name);
      System.out.println("Age: " + age);
      System.out.println("Gender: " + gender);
      System.out.println("Country: " + country);

      System.out.println("Instrument: " + instrument);
      System.out.println("Genre: " + genre);
      System.out.println("Number Of Albums: " + numberOfAlbums);
      System.out.println("Type: " + vocalOrInstrumental);
   }
}

class Actor extends Artist {

   String actingStyle;
   int numberOfMovies;
   int awardCount;
   String famousRole;

   Actor(String name, int age, String gender, String country,
         String actingStyle, int numberOfMovies,
         int awardCount, String famousRole) {

      super(name, age, gender, country);

      this.actingStyle = actingStyle;
      this.numberOfMovies = numberOfMovies;
      this.awardCount = awardCount;
      this.famousRole = famousRole;
   }

   public String getActingStyle() {
      return actingStyle;
   }

   public void setActingStyle(String actingStyle) {
      this.actingStyle = actingStyle;
   }

   public int getNumberOfMovies() {
      return numberOfMovies;
   }

   public void setNumberOfMovies(int numberOfMovies) {
      this.numberOfMovies = numberOfMovies;
   }

   public int getAwardCount() {
      return awardCount;
   }

   public void setAwardCount(int awardCount) {
      this.awardCount = awardCount;
   }

   public String getFamousRole() {
      return famousRole;
   }

   public void setFamousRole(String famousRole) {
      this.famousRole = famousRole;
   }

   void displayData() {

      System.out.println("Name: " + name);
      System.out.println("Age: " + age);
      System.out.println("Gender: " + gender);
      System.out.println("Country: " + country);

      System.out.println("Acting Style: " + actingStyle);
      System.out.println("Number Of Movies: " + numberOfMovies);
      System.out.println("Award Count: " + awardCount);
      System.out.println("Famous Role: " + famousRole);
   }
}
class Test{
   public static void main(String[] args) {
      Artist[] artists=new Artist[10];
      artists[0] = new Painter("Leonardo", 67, "Male", "Italy", "Realism", "Canvas", "Oil", 15);

      artists[1] = new Painter("Pablo Picasso", 91, "Male", "Spain", "Cubism", "Paper", "Acrylic", 25);

      artists[2] = new Painter("Raja Ravi Varma", 58, "Male", "India", "Portrait", "Canvas", "Watercolor", 18);

      artists[3] = new Musician("A R Rahman", 58, "Male", "India", "Keyboard", "Classical", 20, "Vocal");

      artists[4] = new Musician("Taylor Swift", 35, "Female", "USA", "Guitar", "Pop", 12, "Vocal");

      artists[5] = new Musician("Zakir Hussain", 73, "Male", "India", "Tabla", "Classical", 10, "Instrumental");

      artists[6] = new Actor("Shah Rukh Khan", 59, "Male", "India", "Romantic", 90, 14, "Raj");

      artists[7] = new Actor("Leonardo DiCaprio", 50, "Male", "USA", "Method Acting", 40, 8, "Jack Dawson");

      artists[8] = new Actor("Deepika Padukone", 39, "Female", "India", "Drama", 35, 12, "Naina");

      for(int i=0;i<artists.length;i++){
         if(artists[i]==null)continue;
           if(artists[i] instanceof Musician){
              Musician art=(Musician)artists[i];
               System.out.println(i+1+" ) "+"Musician "+art.getName()+" is allowed for the Music Event and is playing "+art.getInstrument());
           }
           else {

              System.out.println(i+1+" ) "+artists[i].getName() + " is NOT allowed for the Music Event.");
           }
           System.out.println();
      }
   }
}