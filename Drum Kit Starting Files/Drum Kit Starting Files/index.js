var numberOfDrumButtons = document.querySelectorAll(".drum").length;





for (var i = 0; i< numberOfDrumButtons; i++){
    document.querySelectorAll('.drum')[i].addEventListener('click',function(){
        this.style.color="Blue";
    });
}

var audio = new Audio('sounds/tom-1.mp3');
        audio.play();




/*

function multiply(val1, val2){
    return val1 * val2;
}
function add (val1, val2){
    return val1+val2;
}
function subtract(val1, val2){
    return val1-val2;
}
function divide(val1, val2){
    return val1/val2;
}

function calculate( val1, val2,  operator){
    return operator (val1, val2);
}
calculate(3, 4,subtract);
*/