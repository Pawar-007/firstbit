class Shape {
   double area;

   public double getArea() {
      return area;
   }

   public void setArea(double area) {
      this.area = area;
   }

   public void calculateArea(){}

}

class Circle extends Shape {
   double radius;


   Circle(double radius){
       this.radius=radius;
   }
   public double getRadius() {
      return radius;
   }

   public void setRadius(double radius) {
      this.radius = radius;
   }
   public void calculateArea(){
      this.area=3.14*(radius*radius);
      System.out.println(this.area);
   }
}

class Triangle extends Shape {
   double base;
   double height;

   Triangle(double base,double height){
      this.base=base;
      this.height=height;
   }
   public double getBase() {
      return base;
   }

   public void setBase(double base) {
      this.base = base;
   }

   public double getHeight() {
      return height;
   }

   public void setHeight(double height) {
      this.height = height;
   }

   public void calculateArea(){
      this.area=(base*height)/2;
      System.out.println(this.area);
   }
}

class Rectangle extends Shape {
   double length;
   double breadth;

   Rectangle(double length,double breadth){
      this.length=length;
      this.breadth=breadth;
   }
   public double getLength() {
      return length;
   }

   public void setLength(double length) {
      this.length = length;
   }

   public double getBreadth() {
      return breadth;
   }

   public void setBreadth(double breadth) {
      this.breadth = breadth;
   }
   public void calculateArea(){
      this.area=length*breadth;
      System.out.println(this.area);
   }
}
class Test {
   public static void main(String[] args) {
      Shape s1=new Circle(2);
      Shape s2=new Rectangle(4,5);
      Shape s3=new Triangle(3, 4);
      s1.calculateArea();
      s2.calculateArea();
      s3.calculateArea();
   }
}
