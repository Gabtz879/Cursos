var num1 = Number.parseInt(prompt("Ingresa un numero: "));
var num2 = Number.parseInt(prompt("Ingresa otro numero: "));
var resultado = num1 - num2;

if(resultado < 0){
    alert("Resultado menor a 0")
}else if(resultado >0){
    alert("Resultado mayor a 0")
}else{
    alert("Resultado igual a 0")
}
if(!Number.isNaN(resultado)){
    if(resultado%2===0){
        alert("Resultado es par")
    }else{
        alert("Resultado es impar")
    }
}
