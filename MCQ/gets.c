/*
Use of gets() generates the risk of an overflow of the allocated buffer.
 This happens because the function gets(), doesn't know the size of the buffer, and continues
 reading until it finds a newline "n" or encounters EOF, and so it may overflow the bounds of the buffer it was given. 

*/