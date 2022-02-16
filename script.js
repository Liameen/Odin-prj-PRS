function computerPlay(){

   let cpuChoice =  Math.floor((Math.random() * 9) + 1);

   if(cpuChoice <= 3) {
    console.log('Paper');
   } else if(cpuChoice <= 6 && cpuChoice > 3) {
    console.log('Rock');
   } else {
    console.log('Scissor');
   }

   return cpuChoice ;

}


function playRound(plySelection, cpuSelection){


}

function game(){

}




for (let i = 0; i < 5; i++) {
    // your code here!
 }

 console.log(computerPlay( ))
 

