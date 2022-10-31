class Teachers extends PersonInheritance{

}
class Students extends PersonInheritance{
	
}
class Staffs extends PersonInheritance{
	
}


public class PersonInheritance {
	String name;
	int phone;
	
	public void showaddress() {
		System.out.println("Name: "+name);
		System.out.println("Phone: "+phone);	
	}  
	
	
	public static void main(String[] args) {
		PersonInheritance t1=new PersonInheritance(); 
		t1.name="Aliya";
		t1.phone=123;
		t1.showaddress();
		
		Teachers t2= new Teachers();
		t2.name="abid";
		t2.phone=456;
		t2.showaddress();
		
	    Staffs s1= new Staffs();
	    s1.name="goutham kk";
	    s1.phone=789;
	    s1.showaddress();
		
	    Students s2=new Students();
	    s2.name="rishiiiii";
	    s2.phone=123;
	    s2.showaddress();
	}

}
