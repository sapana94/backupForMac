// Function

// function printHello()
// {
// console.log("Hello");
// }
// printHello();

// function sum(a, b, c)
// {
//   console.log(a + b);
// }
// sum(2, 3, 4);

// function diff(cha, b, c)
// {
//   console.log(a - b);
// }
// diff(2, 3, 4);ch

// let day=1;let dayName;
// switch(day)
// {
//   case 1:
//   dayName="Monday"
//   break;

//   case 2:
//     dayName="Tuesday"
//     break;

//     case 3:
//       dayName="Wesnesday"
//       break;

//       default:
//       dayName="Invalid"
// }
// console.log(dayName);

// let a=9,b=5;divide=4
// let sum=1,diff=2,multiple=3
// switch(sum)
// {
//   case 1:
//     sum=a+b
//     break;

//   case 2:
//     diff=a-b
//     break;

//   case 3:
//    multiple=a*b
//    break;

//   case 4:
//     divide=a/b
//     break;
//     default:
//       sum="invalid"
// }
// console.log(sum,diff,multiple,divide);

// let a=1;b=2;operator='+'
// switch(operator)
// {
//   case'+':
//   console.log(a+b);
//   break;
//   case'-':
//   console.log(a-b);break;
//   default:
//     console.log("invalid")

function sum(x,y)
{
  let sum=a+b
  console.log(sum)
}

function diff(x,y)
{
  console.log("The diff is "+(x-y))
}

function multiple(x,y)
{
  console.log("The multiple is "+(x*y))
}

function divide(x,y)
{
  console.log("The divide is "+(x/y))
}

let a = parseInt(prompt("Enter value of a"));
let b = parseInt(prompt("Enter value of b"));
let oprator = prompt("Enter operator +,-,*,/");
switch (oprator){
  case "+": {
    sum(a, b);
    // console.log(sum);
    break;
  }

  case "-":
    diff(a, b);
    // console.log(diff);
    break;

  case "*":
     multi(a, b);
    // console.log(multi);
    break;

  case "/":
  divide(a, b);
    // console.log(divide);
    break;
  default:
    console.log("invalid");
}
