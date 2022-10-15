<?php
// An efficient PHP program
// to randomly select k items
// from a stream of items

// A utility function
// to print an array
function printArray($stream,$n)
{
	for ($i = 0; $i < $n; $i++)
		echo $stream[$i]." ";
	echo "\n";
}

// A function to randomly select
// k items from stream[0..n-1].
function selectKItems($stream, $n, $k)
	{
		$i; // index for elements
			// in stream[]
		
		// reservoir[] is the output
		// array. Initialize it with
		// first k elements from stream[]
		$reservoir = array_fill(0, $k, 0);
		for ($i = 0; $i < $k; $i++)
			$reservoir[$i] = $stream[$i];
		
		// Iterate from the (k+1)th
		// element to nth element
		for (; $i < $n; $i++)
		{
			// Pick a random index
			// from 0 to i.
			$j = rand(0,$i + 1);
			
			// If the randomly picked
			// index is smaller than k,
			// then replace the element
			// present at the index
			// with new element from stream
			if($j < $k)
				$reservoir[$j] = $stream[$i];	
		}
		
		echo "Following are k randomly ".
					"selected items\n";
		printArray($reservoir, $k);
	}
	
// Driver Code
$stream = array(1, 2, 3, 4, 5, 6, 7,
				8, 9, 10, 11, 12);
$n = count($stream);
$k = 5;
selectKItems($stream, $n, $k);

?>
