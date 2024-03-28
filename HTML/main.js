$(document).ready(function(){

    var menu = $("#header dl");
    var titl = $("#header dt");
    var descri = $("#header dd");

    descri.hide();

    menu.hover(function(){
        if ($(this).is(".open")){
            $(this).removeClass("open").find("dd").slideUp(200);
        } else {
            $(this).addClass("open").find("dd").slideDown(300);
        }
        
        if($(this).siblings(".open")){
            $(this).siblings(".open").find("dd").slideUp(function(){
              $(this).closest(".open").removeClass("open");
            });
        }
    });

        var question = $("#content dl");
        var title = $("#content dt");
        var description = $("#content dd");
    
        description.hide();
        question.on("click", function(){
            var thisQuestion = $(this);
            
            if(thisQuestion.is(".open")) { //se ja estiver aberta:
                thisQuestion.removeClass("open").find("dd").slideUp();
            } else { 
                thisQuestion.addClass("open").find("dd").slideDown();
            }
           
            if(thisQuestion.siblings(".open")) {
                thisQuestion.siblings(".open").find("dd").slideUp(function(){
                    $(this).closest(".open").removeClass("open");   
                 });
            }
        });
});