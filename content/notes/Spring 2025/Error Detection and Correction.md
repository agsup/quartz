---
title: Error Detection and Correction
enableToc: false
enableLinkPreview: true
---
p- Errors occur in transmission often
- Error Detection vs Correction
	- Detection tells that something is wrong, Correction tells what specifically is wrong and can fix it
	- Detection is easier than correction, but correction is often worth it on very error-prone channels
- Low-error networks (fiber, high quality copper) often just use detection+re-transmission
- Error-detecting codes
	- Parity (***does not mean what you think it does***)
		- Even or odd
		- System checks by seeing if a frame has an even or odd number of 1's (the wrong number of ones indicates a detectable error)
		- The problem with this is that if an even number of bits get flipped, the error remains undetected
		- Solution: use an interleaving of *n* parity bits
		- Each parity um made over non-adjacent bits
		- Problem: An even burst of up to N errors will not fail
	- CRC's (Cyclic Redundancy Check)
		- Essentially, long division of bits by a set of bits taken from a polynomial to take the remainder (which becomes the CRC code)
		- When the CRC code is appended to our bits, it makes the division return 0
		- Bits can be checked by doing divisions (if resulting remainder is not 0, an error occurred)
		- The benefit of using a CRC is that it can be evaluated using shift register circuits
- Error-correcting codes
	- Hamming Codes
		- Add bit location based on which power of 2 is present (ex. bits with 0001 include bit 1, 3, 5, 7, etc., bits with 0100 include 4, 5, 6, 7, 12 ,13, etc.)
		- Bit counting starts from 1
		- Add power sums with errors to find location of error
		- See examples in powerpoint
	- 