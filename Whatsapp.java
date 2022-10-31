public class Whatsapp {

	public static void main(String[] args) {
		Audiiocall a = new Audiiocall();
		videocall v = new videocall();
		a.call();
		a.mute();
		a.decline();
		
		v.call();
		v.mute();
		v.decline();

	}

} 

interface WhatsappCalls{
	//abstract methods only
    void call();
	void mute();
	void decline();
}

class Audiiocall implements WhatsappCalls{
	public void call() {
		System.out.println("whatsapp audiocall");
	}
	public void mute() {
		System.out.println("audiocall muted");
	}
	public void decline() {
		System.out.println("audiocall declined");
	}
}

class videocall implements WhatsappCalls{
	public void call() {
		System.out.println("whatsapp videocall");
	}
	public void mute() {
		System.out.println("videocall muted");
	}
	public void decline() {
		System.out.println("videocall declined");
	}
}
