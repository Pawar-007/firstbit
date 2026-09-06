import java.lang.reflect.Method;

public class TestStudent{
   public static void main(String [] args){
      Class<?> clazz=Student.class;
      System.out.println(clazz.getMethods()); 
      
      Method[] mt=clazz.getMethods();
      for(Method my:mt){
         System.out.println(my);
      }
      
   }
}