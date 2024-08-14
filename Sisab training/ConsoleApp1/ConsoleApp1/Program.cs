using System;
class program
{
    public static void Main(string[] args)
    {
        // Console.WriteLine("HELLO WORLD");
        // Console.Write("Anjana");
        string hello = "SAPANA";
        Console.Write(hello);
        // Array array = new Array[4];
        // Console.Write(array);
        string[] names = { " sanjita ", " sapana ", " anjana " };
        // Console.WriteLine(names[0]);
        //for(int i=0;i<3;i++)
        foreach (string i in names)
        {
            //Console.Write(names[i]);
            Console.Write(i);
        }
    }
}

