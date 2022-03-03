 let score = 0;
 let plySelect;


 // tester function
 function test(){
   alert('test');
}



 const buttP = document.querySelector('#Paper');
 const buttR = document.querySelector('#Rock');
 const buttS = document.querySelector('#Scissors');

 const buttons = document.querySelectorAll('.btn');




// event listeners
buttons.forEach((button) => {
   button.addEventListener('click', game)
});




// cpu randomiser

function computerPlay(){

   let cpuBrain =  Math.floor((Math.random() * 9) + 1);

   console.log(cpuBrain);

   if(cpuBrain <= 3) {
    return 'Paper';
   } else if(cpuBrain <= 6 && cpuBrain > 3) {
    return 'Rock';
   } else {
    return 'Scissors';
   }
}


//ply input value

// function humanPlay(){

//    let plyBrain = addEventListener;
 
//     return plyBrain;
//   }


// ply choice vs cpu

function playRound(cpuSelect, plySelect) {

   plySelect = buttons.id;


   if (plySelect === buttS) {
      alert('yes');
      //firstChoice();
     } 
  else if (plySelect === buttR) {
      secondChoice();
   } if (plySelect === buttP) {
      thirdChoice();
   }
  

//  eventualities and logic

   function firstChoice(){
         
      if (plySelect === 'Scissors' && cpuSelect === 'Rock'){
         youWin();
      } else if (plySelect === 'Scissors' && cpuSelect === 'Paper'){
         alert(plySelect + ' vs ' + ' your ' +  cpuSelect + ' you lose!');
      } if (plySelect === 'Scissors' && cpuSelect === 'Scissors'){
         alert(plySelect + ' vs ' + ' your ' +  cpuSelect + ' you drew!');
      }      
   }
   
   function secondChoice(){
   
      if (plySelect === 'Rock' && cpuSelect === 'Paper'){
         youWin();
      } else if (plySelect === 'Rock' && cpuSelect === 'Scissors'){
         alert(plySelect + ' vs ' + ' your ' +  cpuSelect + ' you lose!')
      } if (plySelect === 'Rock' && cpuSelect === 'Rock'){
         alert(plySelect + ' vs ' + ' your ' +  cpuSelect + ' you drew!')
      }
   }
   
   function thirdChoice(){
   
      if (plySelect === 'Paper' && cpuSelect === 'Scissors'){
         youWin();
      } else if (plySelect === 'Paper' && cpuSelect === 'Rock'){
         alert(plySelect + ' vs ' + ' your ' +  cpuSelect + ' you lose!')
      } if (plySelect === 'Paper' && cpuSelect === 'Paper'){
         alert(plySelect + ' vs ' + ' your ' +  cpuSelect + ' you drew!')
      }
   }

 }


















 
 




 




function game(){
         
         let plySelect = buttons.id;
         let cpuSelect = computerPlay();
                  console.log(plySelect)
         playRound(cpuSelect, plySelect);

         //alert(`your score is ${score}`)

     
}



function youWin(){
   alert('you win!'); 
   return score += 1;
}


