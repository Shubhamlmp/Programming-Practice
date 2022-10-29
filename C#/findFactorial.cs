using System;

public class Program
{
	static int factorial(int n)
    {
        if (n == 0) //base case
            return 1;
        else
            return n * factorial(n - 1); //recursion statement to repeatedly multiply the number with a number 1 less than it, until reaching 0
    }

	public static void Main()
	{
		int numberToFindFactorial = 0;
        string val = string.Empty;
        Console.Write("Enter Integer: ");
        val = Console.ReadLine();
        numberToFindFactorial = Convert.ToInt32(val);
        Console.WriteLine(factorial(numberToFindFactorial));
        Console.Read();
	}
}