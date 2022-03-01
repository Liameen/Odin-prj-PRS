 let score = 0;






// cpu randomiser

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

//this is a test




// ply prompt and input value

function humanPlay(){

  let plyBrain = prompt('Choose your weapon!', 'Scissor, Paper or Rock!');

   return plyBrain;
 }






 
 

 function playRound(cpuSelect, plySelect) {

   if (cpuSelect === 'Scissor') {
     firstChoice();
     } 
  else if (cpuSelect === 'Rock') {
      secondChoice();
   } if (cpuSelect === 'Paper') {
      thirdChoice();
   }
  
   function firstChoice(){
         
      if (cpuSelect === 'Scissor' && plySelect === 'Rock'){
         youWin();
      } else if (cpuSelect === 'Scissor' && plySelect === 'Paper'){
         alert(cpuSelect + ' vs ' + ' your ' +  plySelect + ' you lose!');
      } if (cpuSelect === 'Scissor' && plySelect === 'Scissor'){
         alert(cpuSelect + ' vs ' + ' your ' +  plySelect + ' you drew!');
      }      
   }
   
   function secondChoice(){
   
      if (cpuSelect === 'Rock' && plySelect === 'Paper'){
         youWin();
      } else if (cpuSelect === 'Rock' && plySelect === 'Scissor'){
         alert(cpuSelect + ' vs ' + ' your ' +  plySelect + ' you lose!')
      } if (cpuSelect === 'Rock' && plySelect === 'Rock'){
         alert(cpuSelect + ' vs ' + ' your ' +  plySelect + ' you drew!')
      }
   }
   
   function thirdChoice(){
   
      if (cpuSelect === 'Paper' && plySelect === 'Scissor'){
         youWin();
      } else if (cpuSelect === 'Paper' && plySelect === 'Rock'){
         alert(cpuSelect + ' vs ' + ' your ' +  plySelect + ' you lose!')
      } if (cpuSelect === 'Paper' && plySelect === 'Paper'){
         alert(cpuSelect + ' vs ' + ' your ' +  plySelect + ' you drew!')
      }
   }

 }




 




function game(){

      for (let i = 0; i < 5; i++) {
         
         
         let plySelect = humanPlay();
         let cpuSelect = computerPlay();
                  
         playRound(cpuSelect, plySelect);

         alert(`your score is ${score}`)

      }
}



function youWin(){
   alert('you win!'); 
   return score += 1;
}



game();
