class Player {
   String name;
   int age;
   String country;
   int matchesPlayed;
   int jerseyNumber;
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
   public String getCountry() {
      return country;
   }
   public void setCountry(String country) {
      this.country = country;
   }
   public int getMatchesPlayed() {
      return matchesPlayed;
   }
   public void setMatchesPlayed(int matchesPlayed) {
      this.matchesPlayed = matchesPlayed;
   }
   public int getJerseyNumber() {
      return jerseyNumber;
   }
   public void setJerseyNumber(int jerseyNumber) {
      this.jerseyNumber = jerseyNumber;
   }
   
}

class  CricketPlayer extends Player{
      int totalRuns;
      int totalWickets;
      String battingStyle;
      String bowlingStyle;
      public int getTotalRuns() {
         return totalRuns;
      }
      public void setTotalRuns(int totalRuns) {
         this.totalRuns = totalRuns;
      }
      public int getTotalWickets() {
         return totalWickets;
      }
      public void setTotalWickets(int totalWickets) {
         this.totalWickets = totalWickets;
      }
      public String getBattingStyle() {
         return battingStyle;
      }
      public void setBattingStyle(String battingStyle) {
         this.battingStyle = battingStyle;
      }
      public String getBowlingStyle() {
         return bowlingStyle;
      }
      public void setBowlingStyle(String bowlingStyle) {
         this.bowlingStyle = bowlingStyle;
      }
      
}
class FootballPlayer extends Player{
    int totalGoals;
    String playingPosition;
    public int getTotalGoals() {
       return totalGoals;
    }
    public void setTotalGoals(int totalGoals) {
       this.totalGoals = totalGoals;
    }
    public String getPlayingPosition() {
       return playingPosition;
    }
    public void setPlayingPosition(String playingPosition) {
       this.playingPosition = playingPosition;
    }
    
}