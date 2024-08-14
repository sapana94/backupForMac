//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;

//namespace ConsoleApp15
//{
//    internal class Interfacetwo
//    {
//    }
//    interface IFather
//    {
//        void printFather();
       
//    }
//    public class Father : IFather
//    {
//        public void printFather()
//        {
//            Console.WriteLine("This is father class");
//        }

//    }
//    interface IMother
//    {
//        void printMother();
//    }
//    public class Mother : IMother
//    {
//        public void printMother()
//        {
//            Console.WriteLine("this is mother class");
//        }
//    }
//    public class Child : IMother , IFather
//    {
//        Father father = new Father();
//        Mother mother = new Mother();
//        public void printFather()
//        {
//            father.printFather();
//        }
//        public void printMother()
//        {
//            mother.printMother();
//        }

//    }
//}
