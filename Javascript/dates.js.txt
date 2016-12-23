var day;
var month;
var today = new Date ();

switch (today.getDay()) {
    case 0:
        day = "Sunday";
        break;
    case 1:
        day = "Monday";
        break;
    case 2:
        day = "Tuesday";
        break;
    case 3:
        day = "Wednesday";
        break;
    case 4:
        day = "Thursday";
        break;
    case 5:
        day = "Friday";
        break;
    case 6:
        day = "Saturday";
        break;
}

switch (today.getMonth()) {
    case 0:
        month = "January";
        break;
    case 1:
        month = "February";
        break;
    case 2:
        month = "March";
        break;
    case 3:
        month = "April";
        break;
    case 4:
        month = "May";
        break;
    case 5:
        month = "June";
        break;
    case 6:
        month = "July";
        break;
    case 7:
        month = "August";
        break;
    case 8:
        month = "September";
        break;
    case 9:
        month = "October";
        break;
    case 10:
        month = "November";
        break;
    case 11:
        month = "December";
        break;
}

console.log (day + ", " + month + " " + today.getDate() + ", " + today.getFullYear());

if (today.getDay() == 0 || today.getDay() == 6){
    console.log ("Enjoy the weekend");
}

if (today.getDate() == 29 && today.getMonth() == 6 && today.getFullYear() == 2016){
    console.log ("The midterm is due today");
} else if (today.getFullYear() < 2016){
    console.log ("This midterm is early");
} else if (today.getFullYear() > 2016){
    console.log ("This midterm is late");
} else if (today.getMonth() < 6){
    console.log ("This midterm is early");
} else if (today.getMonth() > 6){
    console.log ("This midterm is late");
} else if (today.getDate() < 29){
    console.log ("This midterm is early");
} else if (today.getDate() > 29){
    console.log ("This midterm is late");
}


