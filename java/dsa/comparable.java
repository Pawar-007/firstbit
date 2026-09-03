package dsa;

import java.util.*;

public class comparable {
   public static void main(String[] args) {
      List<Student> students = new ArrayList<>(List.of(
            new Student(1, "Bhushan", 22),
            new Student(2, "Pankaj", 21),
            new Student(3, "Amit", 23),
            new Student(4, "Rahul", 20),
            new Student(5, "Harshal", 22)));
      Collections.sort(students,(a,b)->{
         return a.name.compareTo(b.name);
      });

      System.out.println(students);
   }
}

class Student {
   int id;
   String name;
   int age;

   public Student(int id, String name, int age) {
      this.id = id;
      this.name = name;
      this.age = age;
   }

   @Override
   public String toString() {
      return "Student [id=" + id + ", name=" + name + ", age=" + age + "]";
   }

}
