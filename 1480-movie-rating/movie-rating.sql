SELECT results
FROM (
    SELECT u.name AS results
    FROM Users u
    JOIN MovieRating r ON u.user_id = r.user_id
    GROUP BY u.user_id, u.name
    ORDER BY COUNT(*) DESC, u.name
    LIMIT 1
) a

UNION ALL

SELECT results
FROM (
    SELECT m.title AS results
    FROM Movies m
    JOIN MovieRating r ON m.movie_id = r.movie_id
    WHERE r.created_at LIKE '2020-02%'
    GROUP BY m.movie_id, m.title
    ORDER BY AVG(r.rating) DESC, m.title
    LIMIT 1
) b;