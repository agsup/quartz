#DataStructures
<h1 style="text-align:center;">Hash Tables</h1>

- Consists of **buckets** that contain values, and can be accessed using a hash function
	- One of the most common of these is a modulo hash function
- This enables hash tables to be used as an excellent searching structure
	- If you can do filter the thing you're searching by, then you can easily find it in the table
	- Ex. if hash function is **`x % 50`**, and search entry is 51, then you can easily determine that your result is in bucket 1
	- Very near **`O(1)`** efficiency for searching, very nice
- Issue: Collisions
	- Collisions are when there are several arguments give the same hash value
	- These arguments are known as **hash synonyms**, and are the reason why hash tables aren't quite **`O(1)`** efficient
- Linear Probing
	- scud.
	- Runs into many problems with home addresses of keys and such
	- Very bad
- Hash table is not in the C++ stl
- The efficiency is also heavily determined by a good hash function