var numberOfDrumButtons = document.querySelectorAll(".drum").length;





for (var i = 0; i< numberOfDrumButtons; i++){
    document.querySelectorAll('.drum')[i].addEventListener('click',function(){
        this.style.color="Blue";
    });
}

var audio = new Audio('sounds/tom-1.mp3');
        audio.play();



        

/*
        var housekeeper1 = { 
            name: "Sunayna",
            YearsofExperience: 49
        }
        
        console.log(housekeeper1.name);


        function HouseKeeper (name, age, yearsOfExperience, language){
            this.name = name;
            this.age = age;
            this.yearsOfExperience= yearsOfExperience;
            this.language= language;
        }
        var housekeep1 = new HouseKeeper("Aryab",19, 3, ["English", "Nepali"]);
        
        var housekeep2 = new HouseKeeper("Binod",23, 8, ["Japnese", "Nepali"]);
        console.log(housekeep2.language);



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