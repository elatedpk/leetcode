SELECT
    p2.product_id,
    IFNULL(t.price,10) as price
FROM    
    (
        SELECT
            DISTINCT product_id
        FROM 
            products 
    ) p2
    LEFT JOIN (
        SELECT
            p1.product_id,
            p1.new_price as price
        FROM products p1
            JOIN (
                SELECT 
                    p.product_id,
                    MAX(p.change_date) as last_date
                FROM 
                    products p
                WHERE   
                    change_date<='2019-08-16'
                GROUP BY    
                    p.product_id
            ) last
            ON p1.product_id = last.product_id
            AND p1.change_date = last.last_date
    ) t
    ON p2.product_id = t.product_id;