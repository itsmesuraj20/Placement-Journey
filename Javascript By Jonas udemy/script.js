function func1(){
    console.log("Hello World")
}

func1();


function calcAge1(birthyear){
    return 2024-birthyear;
}

const val = calcAge1(2002);
console.log(val);

const calcAge2 =  function(birthyear){ // This is known as  anonymous function 
    return 2030 - birthyear;
}
