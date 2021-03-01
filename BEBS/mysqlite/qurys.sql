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
select *  from book_store.books where amount>1 and active_item=true;
 SELECT * FROM book_store.books WHERE amount>1 and CONCAT(`title`,`pages` ,`section`,`price`,`author`) LIKE '%c++%' ;
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

-- get all books
select * from book_store.books
where amount >1;
-- order by amount asc limit 1 
select * from book_store.books where amount>1 and active_item=true;
UPDATE  book_store.books SET  active_item = false WHERE book_id = '1';
SELECT max(purchase_id) from book_store.purchases ;

select  bl.book_id as Id, b.title as Title, sum(b.price) as Price  from book_store.book_list bl inner join book_store.purchases s on bl.purchase_id = s.purchase_id inner join book_store.books b on bl.book_id = b.book_id where pyment_date >= now()-interval 1 week group by b.price;
select  bl.book_id as Id, b.title as Title, sum(b.price) as Price  from book_store.book_list bl inner join book_store.purchases s on bl.purchase_id = s.purchase_id inner join book_store.books b on bl.book_id = b.book_id where pyment_date >= now()-interval 1 month group by b.price;


select count(bl.book_id), bl.book_id, b.title from book_store.book_list bl inner join book_store.purchases s on bl.purchase_id = s.purchase_id inner join book_store.books b on bl.book_id = b.book_id WHERE   MONTH(order_date) = 11 and Year(order_date) = 2020 group by b.book_id;
	select  percent from book_store.discounts where now()>=date_from and now()<=date_until;	
    select  percent from book_store.discounts where now()>date_until;	
select max(percent) from book_store.discounts where now()>=date_from and now()<=date_until and user_id_discount=1||user_id_discount ='all';
UPDATE  book_store.discounts SET  active_discount = false where discount_id=1;


INSERT INTO `book_store`.`orders_from_provider`(`order_provider_id`,`book_id`,`amount`,`provider`,`order_date`,`order_status`) VALUES(6,9,90,'Dolev','2020-12-18','active'); 

INSERT INTO `book_store`.`orders_from_provider`(`book_id`,`provider`,`amount`) VALUES(9,'Dolev','90'); 
select pyment_date as Date, price_paid as TotalPrice,payment_method from book_store.purchases where user_id=1;
select * from book_store.books;