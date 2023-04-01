<?php

$tab = ['paper', 'rock', 'scissors'];
echo "Choose rock, paper, or scissors:\n";
$user = fgets(STDIN);
$user = rtrim($user);
if (in_array($user, $tab) == false)
{
	echo "The chosen move doesn't exist\n";
	exit();
}
$ia = $tab[array_rand($tab)];
if ($user == $ia)
{
	echo "There is equality.\n";
}
else if (($user == "paper" && $ia == "rock") || ($user == "scissors" && $ia == "paper") || ($user == "scissors" && $ia == "paper"))
{
	echo "Congratulations! You won! The computer chose " . $ia . ".\n";
}
else
{
	echo "Sorry, you lost. The computer chose " . $ia . ".\n";
}
?>
