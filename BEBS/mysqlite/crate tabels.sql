DROP DATABASE  IF EXISTS book_store ;
CREATE DATABASE IF NOT EXISTS book_store ;
USE book_store;
SET FOREIGN_KEY_CHECKS = 0;

-- for login
CREATE TABLE users (
    user_role VARCHAR(45) DEFAULT 'Buyer',
    user_id SMALLINT UNSIGNED NOT NULL AUTO_INCREMENT,
    email VARCHAR(45) UNIQUE NOT NULL,
    pass VARCHAR(17) NOT NULL,
    user_name VARCHAR(45) NOT NULL,
    last_activity DATETIME DEFAULT CURRENT_TIMESTAMP,
    join_date DATETIME DEFAULT CURRENT_TIMESTAMP,
    user_status VARCHAR(45) DEFAULT 'active',
    PRIMARY KEY (user_id)
);

CREATE TABLE discounts (
    discount_id SMALLINT UNSIGNED NOT NULL AUTO_INCREMENT,
    percent SMALLINT UNSIGNED NOT NULL,
    date_from DATE NOT NULL,
    date_until DATE NOT NULL,
    PRIMARY KEY (discount_id)
);
CREATE TABLE books (
    book_id SMALLINT UNSIGNED NOT NULL AUTO_INCREMENT,
    title VARCHAR(200) NOT NULL,
    pages SMALLINT UNSIGNED NOT NULL,
    section VARCHAR(100) NOT NULL,
    price SMALLINT UNSIGNED NOT NULL,
    amount SMALLINT UNSIGNED NOT NULL,
    publish_date DATETIME DEFAULT CURRENT_TIMESTAMP,
    info VARCHAR(1000) NOT NULL,
    img VARCHAR(200) NOT NULL,
    author VARCHAR(50) DEFAULT 'anonimous',
    PRIMARY KEY (book_id)
);
CREATE TABLE shoping_carts (
    shoping_cart_id SMALLINT UNSIGNED NOT NULL AUTO_INCREMENT,
    order_date DATETIME DEFAULT CURRENT_TIMESTAMP,
    discount_id SMALLINT UNSIGNED,
    PRIMARY KEY (shoping_cart_id),
    FOREIGN KEY (discount_id)
	REFERENCES discounts (discount_id)
);

CREATE TABLE book_list (
    book_list_id SMALLINT UNSIGNED NOT NULL AUTO_INCREMENT,
    shoping_cart_id SMALLINT UNSIGNED NOT NULL,
    book_id SMALLINT UNSIGNED NOT NULL,
    user_id SMALLINT UNSIGNED NOT NULL,
    done VARCHAR(10) DEFAULT 'no',
    PRIMARY KEY (book_list_id),
    FOREIGN KEY (shoping_cart_id)
	REFERENCES shoping_carts (shoping_cart_id),
    FOREIGN KEY (book_id)
	REFERENCES books (book_id),
    FOREIGN KEY (user_id)
	REFERENCES users (user_id)
);

CREATE TABLE purchases (
    purchase_id SMALLINT UNSIGNED NOT NULL AUTO_INCREMENT,
    user_id SMALLINT UNSIGNED NOT NULL,
    payment_method VARCHAR(45),
    pyment_date DATETIME DEFAULT CURRENT_TIMESTAMP,
    price_paid SMALLINT UNSIGNED NOT NULL,
    PRIMARY KEY (purchase_id)
);
CREATE TABLE orders_from_provider (
    order_provider_id SMALLINT UNSIGNED NOT NULL AUTO_INCREMENT,
    book_id SMALLINT UNSIGNED NOT NULL,
    amount SMALLINT UNSIGNED NOT NULL,
    provider VARCHAR(45) NOT NULL,
    order_status VARCHAR(45) DEFAULT 'active',
    order_date DATE,
    PRIMARY KEY (order_provider_id),
    FOREIGN KEY (book_id)
	REFERENCES books (book_id)
);

-- CREATE TABLE customers
-- (
-- customer_id smallint unsigned NOT NULL AUTO_INCREMENT,
-- is_member boolean NOT NULL, 
-- user_id smallint unsigned,
-- PRIMARY KEY (customer_id),
-- FOREIGN KEY (user_id) REFERENCES users (user_id)
-- );

-- CREATE TABLE authors
-- (
-- author_id smallint unsigned NOT NULL AUTO_INCREMENT,
-- first_name varchar(45),
-- last_name varchar(45),
-- PRIMARY KEY (author_id)
-- );




-- CREATE TABLE book_list -- for user orders 
-- (
-- book_list_id smallint unsigned NOT NULL AUTO_INCREMENT,
-- book_id smallint unsigned NOT NULL,
-- customer_id smallint unsigned NOT NULL,
-- PRIMARY KEY (book_list_id),
-- FOREIGN KEY (book_id) REFERENCES books (book_id),
-- FOREIGN KEY (customer_id) REFERENCES customers (customer_id)
-- );




-- CREATE TABLE purchases  
-- (
-- purchase_id smallint unsigned NOT NULL AUTO_INCREMENT,
-- shoping_cart_id smallint unsigned NOT NULL,
-- purchase_status varchar(45) NOT NULL,  -- pending/waiting pickup/done/
-- payment_method varchar(45),
-- purchase_complited boolean NOT NULL,
-- pyment_date date ,
-- -- discount_id smallint unsigned, -- only for logged in usesrs
-- PRIMARY KEY (purchase_id),
-- FOREIGN KEY (shoping_cart_id) REFERENCES shoping_carts (shoping_cart_id)
-- -- FOREIGN KEY (discount_id) REFERENCES discounts (discount_id)
-- );

-- CREATE TABLE orders_from_provider
-- (
-- order_provider_id smallint unsigned NOT NULL AUTO_INCREMENT,
-- provider varchar(45) NOT NULL,
-- purchas_date date NOT NULL,
-- PRIMARY KEY (order_provider_id)
-- );

-- CREATE TABLE books_orders -- list of books for order store
-- (
-- order_provider_id smallint unsigned NOT NULL ,
-- book_id smallint unsigned NOT NULL,
-- amount smallint unsigned NOT NULL,
-- FOREIGN KEY (order_provider_id) REFERENCES orders_from_provider (order_provider_id),
-- FOREIGN KEY (book_id) REFERENCES books (book_id)
-- );


-- CREATE TABLE managment
 -- (
-- managment_id smallint unsigned NOT NULL AUTO_INCREMENT,
-- book_id smallint unsigned NOT NULL,
-- purchase_id smallint unsigned NOT NULL,
-- shoping_cart_id smallint unsigned NOT NULL,
-- order_provider_id smallint unsigned NOT NULL,
-- discount_id smallint unsigned NOT NULL,
-- pure_profit   smallint unsigned, 
-- PRIMARY KEY (managment_id),
-- FOREIGN KEY (book_id) REFERENCES books (book_id),
-- );

