let fecha = new Date();
let actual = {
    diaActual: fecha.getDay(),
    dia: fecha.getDate(),
    mes: fecha.getMonth()+1,
    anio: fecha.getFullYear()
}
dia_semana=["Domingo","Lunes","Martes","Miercoles", "Jueves","Viernes", "Sábado"]
alert(`La fecha actual: ${String(actual.dia).padStart(2,"0")}/${String(actual.mes).padStart(2,"0")}/${String(actual.anio)} corresponde al día ${dia_semana[actual.diaActual]}`)