print "Enter your word :\n";
$word = <STDIN>;
chomp($word);
$reverse_word = reverse($word);
if ($word eq $reverse_word){
	print "Your word is a palindrome\n";
} 
else {
	print "Your word is not a palindrome\n";
}
