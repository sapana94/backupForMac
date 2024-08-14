using ooops;
using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;

//namespace ClassLibrary1
//{
//    public class Class1
//    {
//    }
//}
namespace oops
{
    class program
    {
        static void Main(string[] args)
        {
            Bike Bike = new bike("SHine", "2020");
            bike bike1 = new bike();
            bike1.PrintInfo();
            Console.ReadLine();
        }
    }
           // bikeclass bikeclass = new bikeclass("SHine", "2020");
           //bikeclass bikeclass1 = new bikeclass("SHine", "2020");
           // bikeclass.PrintInfo();
           // Console.ReadLine();
        }
    }
}
//    class Bike
//    {
//        public string Name; //fields
//        public string _model;
//        public Bike(string Name, string model)
//        {
//            this.Name = Name;
//            _model = model;
//        }

//        public void PrintInfo()//methods
//        {
//            Console.WriteLine($"bike name is{Name} and model is {_model}");
//        }
//    }
//}
