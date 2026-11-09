SQL\_All\_Queries.sql



**Queries with constraints (Pt. 1)**

Find the movie with a row id of 6 ✓

Find the movies released in the years between 2000 and 2010 ✓

Find the movies not released in the years between 2000 and 2010 ✓

Find the first 5 Pixar movies and their release year

**query:**

SELECT id, title

FROM movies

where (id=6);



SELECT year, title

FROM movies

where (year BETWEEN 2000 AND 2010);



SELECT year, title

FROM movies

where (year NOT BETWEEN 2000 AND 2010);



SELECT title, year FROM movies

WHERE year <= 2003;



**Queries with constraints (Pt. 2)**

Find all the Toy Story movies

Find all the movies directed by John Lasseter

Find all the movies (and director) not directed by John Lasseter

Find all the WALL-\* movies

