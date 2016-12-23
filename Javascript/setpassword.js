$("#txtPWVerified").blur(function(){
    var password = $("#txtPassword").val();
    var verify = $("#txtPWVerified").val(); 
    if (password == "" || verify == "") {
        alert ("Please enter a value for both password boxes.");
        $("#txtPassword").focus();
    } else if  (password == verify){
        alert ("The passwords match.");
    } else if (password != verify ) {
        alert ("The passwords do not match. Please try again.");
        $("#txtPassword").focus();
    }
});
