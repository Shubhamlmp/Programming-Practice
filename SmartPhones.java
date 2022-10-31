public class SmartPhones {
	
	String make;
	String modelname;
	int price;

	public static void main(String[] args) {
		SmartPhones phone1=new SmartPhones();
		SmartPhones phone2=new SmartPhones();
		SmartPhones phone3=new SmartPhones();
		
		phone1.make="Apple";
	    phone1.modelname="I Phone 11";
		phone1.price=40000;
		
		System.out.println("make: "+phone1.make);
		System.out.println("modelname: "+phone1.modelname );
		System.out.println("price: "+phone1.price);
		
		phone1.price=50000;
		System.out.println("price : "+50000);
		
		phone2.make="Samsung";
		phone2.modelname="Galaxy";
		phone2.price=30000;
		
		System.out.println("make : "+phone2.make);
		System.out.println("modelname : "+phone2.modelname);
		System.out.println("price : "+phone2.price);
		
		phone3.make="Xiaomi";
		phone3.modelname="Redme Note 8";
		phone3.price=28000;
		
		System.out.println("make :" +phone3.make);
		System.out.println("modelname : "+phone3.modelname);
		System.out.println("price : "+phone3.price);

	}

}
