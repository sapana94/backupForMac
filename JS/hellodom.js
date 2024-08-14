// function button(){
//     document.getElementById("button").
//     innerHTML="Clicked"
//     document.body.style.background="black"
// }

const button=document.getElementById("button");
button.addEventListener("click",
function(){
    button.innerHTML="clicked";
    document.body.style.background="blue"
    document.body.style.color="pink"
});
const p=document.getElementById("p")
button.addEventListener("click",
function(){
    button.innerHTML="clicked";
    p.style.color="red"
})