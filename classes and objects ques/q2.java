//What will be the output of this code?

class Book {
    int price;
    static int count;
    
    public Book(int price) {
        this.price = price;
        count++;
    }
}

public class OOPS {
    public static void main (String args[]) {
        System.out.print(Book.count + " ");
        Book b1 = new Book(150);
        Book b2 = new Book(250);
        System.out.println(Book.count);
    }
}



/*
Output:
0 2
*/
