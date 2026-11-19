Topic: LIKE & Wildcards (% and _)
===========================================================

-- Task 1: Find all the Toy Story movies
SELECT title, director 
FROM movies
WHERE title LIKE 'Toy Story%';

-- Task 2: Find all the movies directed by John Lasseter
SELECT title, director 
FROM movies
WHERE director = 'John Lasseter';

-- Task 3: Find all the movies (and director) not directed by John Lasseter
SELECT title, director 
FROM movies
WHERE director != 'John Lasseter';

-- Task 4: Find all the WALL-* movies
SELECT title, director 
FROM movies
WHERE title LIKE 'WALL-%';
