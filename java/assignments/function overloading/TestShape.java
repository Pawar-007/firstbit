class Triangle{
   int base;
   int height;

   Triangle(){};
   Triangle(int base,int heigth){
      this.base=base;
      this.height=heigth;
   }

   public int getBase() {
      return base;
   }
   
   public void setBase(int base) {
      this.base = base;
   }
   public int getHeight() {
      return height;
   }
   public void setHeight(int height) {
      this.height = height;
   }
}
class Rectangle{
   int length;
   int breadth;
   Rectangle(int length,int breadth){
      this.length=length;
      this.breadth=breadth;
   }
   public int getLength() {
      return length;
   }
   public void setLength(int length) {
      this.length = length;
   }
   public int getBreadth() {
      return breadth;
   }
   public void setBreadth(int breadth) {
      this.breadth = breadth;
   }
}
class Circle{
     int radius;
     Circle(){};
     Circle(int radius){
      this.radius=radius;
     }
     public void setRadius(int radius) {
        this.radius = radius;
     }
     public int getRadius() {
        return radius;
     }
}
class Shape{
   double area;
   void calculateArea(Circle c){
      double ans=3.14*c.getRadius()*c.getRadius() ;
      System.out.println("Area of circle: "+ans);
   }
   void calculateArea(Triangle t){
      double ans=(t.getHeight()*t.getBase())/2.0;
      System.out.println("Area of Triangle: "+ans);
   }
   void calculateArea(Rectangle r){
      double ans=r.getLength()*r.getBreadth();
      System.out.println("Area of Rectangle: "+ans);
   }
}
public class TestShape {
   public static void main(String[] args) {
      Triangle t1=new Triangle(5,5);
      Rectangle r1=new Rectangle(5, 3);
      Circle c1=new Circle(4);
      Shape sp=new Shape();
      sp.calculateArea(r1);
      sp.calculateArea(t1);
      sp.calculateArea(c1);
   }
}
