-- use book_store;

-- 1 login
select user_name from users where email = 'idan@gmail.com' and pass=123;
INSERT INTO `book_store`.`users`(`user_name`,`email`,`pass` )VALUES('Tomas Eily','tomas122@gmail.com',123 );
-- 1 testing


SELECT *  FROM (
   select 
         DATE_FORMAT(publish_date, '%m-%d-%Y') as publishDate
FROM book_store.books
   ) ; 


select pass from book_store.users where email="idan@gmail.com";
SELECT DATE_FORMAT(publish_date, '%m-%d-%Y') as publishDate ,book_store.books.* FROM book_store.books; 

 SELECT * FROM book_store.books WHERE amount>1 and CONCAT(`book_id`,`title`,`pages` ,`section`,`price`,`amount`,`publish_date`,`info`,`img`,`author`) LIKE '%HTML%' ;
 SELECT * FROM book_store.books ;
select * from book_store.purchases where pyment_date >= now()-interval 1 week;
-- 1 register 
INSERT INTO `book_store`.`users`(`user_id`,`user_name`,`email`,`pass`,`join_date`, `user_role`)VALUES(4,'test','test@gmail.com',123,'2019-10-10','buyer');
INSERT INTO `book_store`.`customers`(`customer_id`,`is_member`,`user_id`)VALUES(4, true, 4); 
-- get discount of the login date
 select * from  book_store.discounts where date_from between '2020-12-01' and now() ;
 -- select * from  book_store.discounts where date_from >= now() and  date_until <= now();

INSERT INTO `book_store`.`purchases`(`cart_id`,`user_id`,`payment_method`,`price_paid`) VALUES('1','2', 'Bit',  '39');

-- craet a shoping card 
INSERT INTO `book_store`.`shoping_carts`(`shoping_cart_id`,`customer_id`,`order_date`,`discount_id`) VALUES(4,4, '2020-11-02', null);

INSERT INTO `book_store`.`purchases`(`cart_id`,`user_id`,`payment_method`,`pyment_date`,`price_paid`)VALUES('1','4', 'Bit', '350');
('"
+ cartId + "','" + userId + "','" + pamentM + "'"1200");
-- get all books
select * from book_store.books
where amount >1
-- order by amount asc limit 1 
;







