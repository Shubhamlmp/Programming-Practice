public class India {
	public void speaking() {
		System.out.println("I can speak indian languages");
		
	}
	
	public static void main(String[] args) {
	India p1= new India();
	India p2= new Delhi();
	India p3= new kerala();
	
	p1.speaking();
	p2.speaking();
	p3.speaking();
	}

}
class Delhi extends India{
	//Method Overriding
	public void speaking() {
		System.out.println("I can speak Hindi");	
	}
}

class kerala extends India(){
   public void speaking(){
	    System.out.println("I can speak malayalam");		
    }
}


