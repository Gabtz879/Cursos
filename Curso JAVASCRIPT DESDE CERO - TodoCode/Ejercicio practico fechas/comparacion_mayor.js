let num1 = Number(window.prompt("Ingresa un valor: "));
let num2 = Number(window.prompt("Ingresa un segundo valor: "));
if(num1!==num2){
    alert(`El valor ${(num1>num2 ? `${num1} es mayor a ${num2}`:`${num2} es mayor a ${num1}`)}`);
}else{
    alert(`Ambos valores son iguales`)
}
