//Predict the output of this code .

class Test {
    static int a = 10;
    static int b;
    static void changeB() {
        b = a*3;
    }
}

public class OOPS {
    public static void main (String[] args) {
        Test t = new Test();
        t.changeB();
        System.out.println(Test.a + Test.b);
    }
}



/*
Output:
40
*/
