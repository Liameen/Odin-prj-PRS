[33mcommit e7f5f0223e5ac01cb3920e3244ac821091e0614f[m[33m ([m[1;36mHEAD -> [m[1;32mprs-ui[m[33m, [m[1;31morigin/prs-ui[m[33m)[m
Author: liameen <liameen2@gmail.comgit config --global init.defaultBranch maingit config --global user.email liameen2@gmail.com>
Date:   Sun Mar 6 11:27:59 2022 +0000

    Fixed all the output scores to the DOM
    
    displays score now and a winning/losing message. Have it so the
    game ends after final message. Put in reset button/go-again.
    
    put pictures in place of buttons for the ply choice and a picture for
    cpu choice

[1mdiff --git a/index.html b/index.html[m
[1mindex f90d6da..7b1d300 100644[m
[1m--- a/index.html[m
[1m+++ b/index.html[m
[36m@@ -8,15 +8,20 @@[m
     <title>Paper Rock Scissor</title>[m
 </head>[m
 <body>[m
[31m-    <div id="scoreDiv">[m
[31m-        <h1>Your score is <span id="score"></span></h1>[m
[31m-    </div>[m
     <div id="'buttons">[m
         <button class="btn" id="Paper">Paper</button>[m
         <button class="btn" id="Rock">Rock</button>[m
         <button class="btn" id="Scissors">Scissors</button>[m
         [m
     </div>[m
[32m+[m[32m    <div id="wpnChoice"></div>[m
[32m+[m[32m    <div id="outcome">Drum Roll....</div>[m
[32m+[m[41m   [m
[32m+[m[41m  [m
[32m+[m[32m    <div id="scoreDiv">[m
[32m+[m[32m        <h1>Your score is <span id="plyScore"></span></h1>[m
[32m+[m[32m        <h1>Your foe's score is <span id="cpuScore"></span></h1>[m
[32m+[m[32m    </div>[m
 [m
 [m
     <script src="script.js"></script>[m
[1mdiff --git a/script.js b/script.js[m
[1mindex 45f7cc8..01d587f 100644[m
[1m--- a/script.js[m
[1m+++ b/script.js[m
[36m@@ -1,6 +1,10 @@[m
[31m-let score = 0;[m
[32m+[m[32mlet plyScore = 0;[m
[32m+[m[32mlet cpuScore = 0;[m
 let plySelect = '';[m
[31m-let scoreSpan = document.querySelector('#score');[m
[32m+[m[32mlet plyScoreSpan = document.querySelector('#plyScore');[m
[32m+[m[32mlet cpuScoreSpan = document.querySelector('#cpuScore');[m
[32m+[m[32mlet outcome = document.querySelector('#outcome');[m
[32m+[m[32mlet wpnChoice = document.querySelector('#wpnChoice')[m
 [m
 [m
 [m
[36m@@ -77,61 +81,68 @@[m [mfunction playRound(cpuSelect, plySelect) {[m
    function firstChoice(){[m
          [m
       if (plySelect === 'Scissors' && cpuSelect === 'Rock'){[m
[31m-         youWin();[m
[32m+[m[32m         cpuScoreSpan.textContent = ++cpuScore;[m
[32m+[m[32m         outcome.textContent = 'Hard luck, keep trying!';[m
       } else if (plySelect === 'Scissors' && cpuSelect === 'Paper'){[m
[31m-         alert(plySelect + ' vs ' + ' your ' +  cpuSelect + ' you lose!');[m
[32m+[m[32m         plyScoreSpan.textContent = ++plyScore;[m
[32m+[m[32m         outcome.textContent = 'Great! You won that round!';[m
       } if (plySelect === 'Scissors' && cpuSelect === 'Scissors'){[m
[31m-         alert(plySelect + ' vs ' + ' your ' +  cpuSelect + ' you drew!');[m
[32m+[m[32m         outcome.textContent = 'A draw! So exciting!!';[m
       }      [m
    }[m
    [m
    function secondChoice(){[m
    [m
       if (plySelect === 'Rock' && cpuSelect === 'Paper'){[m
[31m-         youWin();[m
[32m+[m[32m         cpuScoreSpan.textContent = ++cpuScore;[m
[32m+[m[32m         outcome.textContent = 'Hard luck, keep trying!';[m
       } else if (plySelect === 'Rock' && cpuSelect === 'Scissors'){[m
[31m-         alert(plySelect + ' vs ' + ' your ' +  cpuSelect + ' you lose!')[m
[32m+[m[32m         plyScoreSpan.textContent = ++plyScore;[m
[32m+[m[32m         outcome.textContent = 'Great! You won that round!';[m
       } if (plySelect === 'Rock' && cpuSelect === 'Rock'){[m
[31m-         alert(plySelect + ' vs ' + ' your ' +  cpuSelect + ' you drew!')[m
[32m+[m[32m        outcome.textContent = 'A draw! So exciting!!';[m
       }[m
    }[m
    [m
    function thirdChoice(){[m
    [m
       if (plySelect === 'Paper' && cpuSelect === 'Scissors'){[m
[31m-         youWin();[m
[32m+[m[32m         cpuScoreSpan.textContent = ++cpuScore;[m
[32m+[m[32m         outcome.textContent = 'Hard luck, keep trying!';[m
       } else if (plySelect === 'Paper' && cpuSelect === 'Rock'){[m
[31m-         alert(plySelect + ' vs ' + ' your ' +  cpuSelect + ' you lose!')[m
[32m+[m[32m         plyScoreSpan.textContent = ++plyScore;[m
[32m+[m[32m         outcome.textContent = 'Great! You won that round!';[m
       } if (plySelect === 'Paper' && cpuSelect === 'Paper'){[m
[31m-         alert(plySelect + ' vs ' + ' your ' +  cpuSelect + ' you drew!')[m
[32m+[m[32m         outcome.textContent = 'A draw! So exciting!!';[m
       }[m
    }[m
 [m
[32m+[m[32m   if(plyScore == 5){[m
[32m+[m[32m      outcome.textContent = 'YEAH BABY YOU WON!!!';[m
[32m+[m[32m   } else if(cpuScore == 5){[m
[32m+[m[32m      outcome.textContent = 'woe is you!! You LOST!!!';[m
[32m+[m[32m   }[m
[32m+[m
  }[m
 [m
 [m
  function game(){[m
 [m
          buttons.forEach((buttonTag) => {[m
[31m-            plySelect = buttonTag.id[m
[32m+[m[32m            plySelect = buttonTag.id;[m
          });[m
[31m-[m
[31m-         [m
        [m
    let cpuSelect = computerPlay();[m
         console.log(plySelect)[m
         console.log(cpuSelect)[m
[31m-playRound(cpuSelect, plySelect);[m
[32m+[m[41m         [m
[32m+[m[32m        playRound(cpuSelect, plySelect);[m
 [m
[32m+[m[32m         wpnChoice.textContent = `You chose ${plySelect} and your foe chose ${cpuSelect}`[m
 [m
[31m- [m
[31m- [m
 }[m
 [m
 [m
[31m-function youWin(){[m
[31m-   alert('you win!'); [m
[31m-   return scoreSpan.textContent = ++score;[m
[31m-}[m
[41m+[m
 [m
 [m
[1mdiff --git a/style.css b/style.css[m
[1mindex a936443..3b5b911 100644[m
[1m--- a/style.css[m
[1m+++ b/style.css[m
[36m@@ -1,3 +1,7 @@[m
 * {[m
     background-color: rgb(160, 158, 156);[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m#outcome{[m
[32m+[m[32m    font-size: 50px;[m
 }[m
\ No newline at end of file[m
