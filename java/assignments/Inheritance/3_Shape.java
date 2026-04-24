class Shape {
   double area;

   public double getArea() {
      return area;
   }

   public void setArea(double area) {
      this.area = area;
   }
   
}

class Circle extends Shape{
   double radius;

   public double getRadius() {
      return radius;
   }

   public void setRadius(double radius) {
      this.radius = radius;
   }
}
class Triangle extends Shape{
   double base;
   double height;
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
}
class Rectangle extends Shape{
   double length;
   double breadth;
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
}
