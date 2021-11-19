package practice;

 abstract  class Parent
{
    abstract void m1();
    void m2()
    {
        System.out.println("this is the abstarct method ");
    }
}
class Child extends Parent
{
    void m1()
    {
        System.out.println("child");
    }
}
public class AbstractTest {
    public static void main(String[] args) {
         Child c1= new Child();
        c1.m1();
        c1.m2();


    }
}
