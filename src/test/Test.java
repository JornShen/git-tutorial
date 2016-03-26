package sch.demo;
import sch.demo2.*;
class Person{
	private String name;
	private int age;
	
	public Person(String name) {
		super();
		this.name = name;
	}
	public Person() {
		super();
	}
	public Person(String name, int age) {
		super();
		this.name = name;
		this.age = age;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}

	public String toString() {
		
		return "–’√˚£∫°°"+this.name +"ƒÍ¡‰£∫°°"+this.age;
	}
	
	
	
}
public class Test {

	public static void main(String[] args) {
		Point<Integer> g = new Point<Integer>();
	    Point<Object>  o = new Point<Object>();
	    print(o);
	}
	public static void print(Point<? super Number> po){
		System.out.println(po.getX());
		System.out.println(po.getY());
		
	}
	
	
	
	
	
	
	
}
