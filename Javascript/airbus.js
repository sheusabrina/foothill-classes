//Get information from form
var maximum = 555;
var $tickets = $("#txtTickets");
var $passes = $("#txtPasses");
var available = maximum - $tickets.val() - $passes.val();

//Set input boxes to 0 if empty
if ($tickets.val() === ""){
    $tickets.val('0');
}

if ($passes.val() === ""){
    $passes.val('0');
}

//Display results
var final = $("#results");
$("#btnSubmit").click (function() {
    var maximum = 555;
    var $tickets = $("#txtTickets");
    var $passes = $("#txtPasses");
    var available = maximum - $tickets.val() - $passes.val();
    final.html (available);
});

//Hide airbus image
$("#btnSubmit").click (function() {
    $('#airbus').hide(); 
});

//Display copyright
var copyright = document.getElementsByTagName ("h2");
copyright [1].innerHTML="© 2016 Sabrina Sheu All Rights Reserved";
