const card=document.getElementsByClassName('card_inner');

document.getElementsByClassName('card_inner').addEventListener('click',function(){
    card.classList.toggle('is-flipped');
});