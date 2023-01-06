# C Programming 

# Hash Tables

# 0. >>> ht = {}

        Write a function that creates a hash table.

        To compile and run project execute the ff commands
<ul>

        gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a  
        ./a
        valgrind ./a

</ul>

# 1. djb2

        Write a hash function implementing the djb2 algorithm.

<ul>

        gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-djb2.c -o b
        ./b 

</ul>

# 2. key -> index

        Write a function that gives you the index of a key.

<ul>

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 1-djb2.c 2-key_index.c -o c
    ./c

</ul>

# 3. >>> ht['betty'] = 'cool'

        Write a function that adds an element to the hash table.

# 4. >>> ht['betty']

        Write a function that retrieves a value associated with a key.


<ul>

        gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c -o e

        ./e

</ul>

# 5. >>> print(ht)

        Write a function that prints a hash table.

<ul>

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c -o f

    ./f

</ul>

# 6. >>> del ht

        Write a function that deletes a hash table.

<ul>

        gcc -Wall -pedantic -Werror -Wextra 6-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c -o g

        valgrind ./g

</ul>

        


