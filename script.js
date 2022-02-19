function computerPlay(){

   let cpuBrain =  Math.floor((Math.random() * 9) + 1);

   console.log(cpuBrain);

   if(cpuBrain <= 3) {
    return 'Paper';
   } else if(cpuBrain <= 6 && cpuBrain > 3) {
    return 'Rock';
   } else {
    return 'Scissor';
   }
   
}






 function playRound (cpuSelect, plySelect) {

   if (cpuSelect === 'Scissor' && plySelect === 'Rock'){
      alert(cpuSelect + ' vs ' + plySelect + ' you win!')
   }
 
 }
 




// function game(){

//    console.log(playRound(plySelect, cpuSelect))

// }

 for (let i = 0; i < 5; i++) {
    
   
   let cpu = computerPlay();
   let ply = 'Rock';
   
   playRound(cpu, ply);

 }


