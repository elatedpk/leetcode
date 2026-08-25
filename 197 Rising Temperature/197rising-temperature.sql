select w1.id from Weather w1
join Weather w2
on datediff(w2.recordDate, w1.recordDate) = -1 and w1.temperature > w2.temperature;
