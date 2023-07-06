var numberOfDrumButtons = document.querySelectorAll(".drum").length;





for (var i = 0; i< numberOfDrumButtons; i++){
    document.querySelectorAll('.drum')[i].addEventListener('click',function(){
        var buttonInnerHtml = this.innerHTML;
        switch (buttonInnerHtml) {
            case "w":
                var audio = new Audio('sounds/tom-1.mp3');
                        audio.play();
                break;
            case "a":
                var audio = new Audio('sounds/tom-1.mp3');
                        audio.play();
                break;
            case "s":
                var audio = new Audio('sounds/tom-2.mp3');
                        audio.play();
                break;
            case "d":
                var audio = new Audio('sounds/tom-3.mp3');
                        audio.play();
                break;
            case "j":
                var audio = new Audio('sounds/crash.mp3');
                        audio.play();
                break;
            case "k":
                var audio = new Audio('sounds/tom-4.mp3');
                        audio.play();
                break;
            case "l":
                var audio = new Audio('sounds/snare.mp3');
                        audio.play();
                break;
            default:
                var audio = new Audio('sounds/kick-bass.mp3');
                        audio.play();
                break;
        }
    });
}




        

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