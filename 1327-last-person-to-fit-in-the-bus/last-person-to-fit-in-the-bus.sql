SELECT person_name from (SELECT person_name,turn,
sum(weight) over (order by turn) AS c FROM queue) p1
where c<=1000 order by turn DESC limit 1;