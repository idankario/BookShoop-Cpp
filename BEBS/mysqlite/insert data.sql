use book_store;

-- users																								
INSERT INTO `book_store`.`users`(`user_role`,`user_id`,`email`,`pass`,`user_name`, `last_activity`,`join_date`,`user_status`)VALUES('buyer',1,'idan@gmail.com',123,'Idan Ryrman','2019-10-10','2018-10-10','active');
INSERT INTO `book_store`.`users`(`user_role`,`user_id`,`email`,`pass`,`user_name`, `last_activity`,`join_date`,`user_status`)VALUES('buyer',2,'sarah@gmail.com',123,'Sarah Hopman','2020-10-20','2018-10-10','Unregistered');
INSERT INTO `book_store`.`users`(`user_role`,`user_id`,`email`,`pass`,`user_name`, `last_activity`,`join_date`,`user_status`)VALUES('admin',3,'tomas@gmail.com',123,'Tomas Eily','2019-01-01','2017-01-01','active');
INSERT INTO `book_store`.`users`(`user_role`,`user_id`,`email`,`pass`,`user_name`, `last_activity`,`join_date`,`user_status`)VALUES('buyer',4,'shani@gmail.com',123,'Shani Queen' ,'2019-01-01','2019-01-01','active');


-- discounts
INSERT INTO `book_store`.`discounts`(`discount_id`,`percent`,`date_from`,`date_until`)VALUES(1, 30 ,'2020-11-01','2020-11-20');
INSERT INTO `book_store`.`discounts`(`discount_id`,`percent`,`date_from`,`date_until`)VALUES(2, 10 ,'2020-12-01','2020-12-20');
INSERT INTO `book_store`.`discounts`(`discount_id`,`percent`,`date_from`,`date_until`)VALUES(3, 60 ,'2020-12-30','2021-01-01');

-- shoping_carts
INSERT INTO `book_store`.`shoping_carts`(`shoping_cart_id`,`order_date`,`discount_id`) VALUES(1, '2020-11-02', 1);
INSERT INTO `book_store`.`shoping_carts`(`shoping_cart_id`,`order_date`,`discount_id`) VALUES(2, '2020-12-31', 3);
INSERT INTO `book_store`.`shoping_carts`(`shoping_cart_id`,`order_date`,`discount_id`) VALUES(3, '2020-11-06', null);
-- 100 + user undofiend 
INSERT INTO `book_store`.`shoping_carts`(`shoping_cart_id`,`order_date`,`discount_id`) VALUES(100, '2020-11-02', null);
INSERT INTO `book_store`.`shoping_carts`(`shoping_cart_id`,`order_date`,`discount_id`) VALUES(101, '2020-11-24', null);
INSERT INTO `book_store`.`shoping_carts`(`shoping_cart_id`,`order_date`,`discount_id`) VALUES(102, '2020-11-17', null);


-- books
-- html, mysql, php , cpp
INSERT INTO `book_store`.`books`(`book_id`,`title`,`pages` ,`section`,`price`,`amount`,`publish_date`,`info`,`img`,`author`) VALUES(1,'C++ Programing',300,'Cpp', 180 ,10, '2018-05-21','The C++ Programming Language, the Bell Laboratories developer who created C++. Now, Stroustrup has updated this classic with clarifications based on reader feedback and new information in two brand-new appendices on ISO/ANSI C++: internationalization and exception safety. This makes The C++ Programming Language: Special Edition the only book with authoritative coverage of every important element of C++','Image\\books\\c++.jpg',"anonimous");
INSERT INTO `book_store`.`books`(`book_id`,`title`,`pages` ,`section`,`price`,`amount`,`publish_date`,`info`,`img`,`author`) VALUES(5,'C++ Programing',330,'Cpp', 250 ,20, '2015-08-01','The new C++11 standard allows programmers to express ideas more clearly, simply, and directly, and to write faster, more efficient code. Bjarne Stroustrup, the designer and original implementer of C++, has reorganized, extended, and completely rewritten his definitive reference and tutorial for programmers who want to use C++ most effectively.','Image\\books\\c++1.jpg',"anonimous");
INSERT INTO `book_store`.`books`(`book_id`,`title`,`pages` ,`section`,`price`,`amount`,`publish_date`,`info`,`img`,`author`) VALUES(9,'C++: The Reference',50,'Cpp', 99 ,50, '2015-07-31','Best-selling genius Herb Schildt covers everything from keywords, syntax, and libraries, to advanced features such as overloading, inheritance, virtual functions, namespaces, templates, and RTTI―plus, a complete description of the Standard Template Library (STL)','Image\\books\\c++2.jpg',"Shani");
INSERT INTO `book_store`.`books`(`book_id`,`title`,`pages` ,`section`,`price`,`amount`,`publish_date`,`info`,`img`,`author`) VALUES(11,'C++ Primer',140,'Cpp', 400 ,8, '2019-01-01','Fully updated and recast for the newly released C++11 standard, this authoritative and comprehensive introduction to C++ will help you to learn the language fast, and to use it in modern, highly effective ways. Highlighting today’s best practices, the authors show how to use both the core language and its standard library to write efficient, readable, and powerful code','Image\\books\\c++3.jpg',"Coral Rubilar");

INSERT INTO `book_store`.`books`(`book_id`,`title`,`pages` ,`section`,`price`,`amount`,`publish_date`,`info`,`img`,`author`) VALUES(2,'PHP',130,'PHP', 120 ,60, '2015-08-01','PHP is a server-side programming language mainly used for web development and is also used as a general purpose programming language. It has become a rage in the Internet world. PHP: The Complete Reference, as the name suggests is a complete reference guide to the widely popular PHP. This book deals with explaining how to personalize the PHP work space, define operators and variables, manipulate strings and arrays and the way in which one can use HTML. It also covers details on how to access database information, track client-side preferences using cookies, execute FTP and e-mail transactions and publish your applications to the Web. Additionally, this book deals in PHPs next generation Web 2.0 design features including AJAX, XML and RSS','Image\\books\\PHP.jpg',"Phlip");
INSERT INTO `book_store`.`books`(`book_id`,`title`,`pages` ,`section`,`price`,`amount`,`publish_date`,`info`,`img`,`author`) VALUES(6,'Learning PHP HTML5',330,'PHP', 900 ,14, '2017-02-21','Build interactive, data-driven websites with the potent combination of open-source technologies and web standards, even if you have only basic HTML knowledge. With this popular hands-on guide, you will tackle dynamic web programming with the help of todays core technologies: PHP, MySQL, JavaScript, jQuery, CSS and HTML5','Image\\books\\PHP1.jpg',"J.S");

INSERT INTO `book_store`.`books`(`book_id`,`title`,`pages` ,`section`,`price`,`amount`,`publish_date`,`info`,`img`,`author`) VALUES(3,'MySql',30,'MySql', 680 ,20, '2019-02-15','MySQL is an open source relational database management system (DBMS) that has experienced a phenomenal growth in popularity and use. Known for its speed and ease of use, MySQL has proven itself to be particularly well-suited for developing database-backed websites and applications. MySQL runs on anything from modest hardware all the way up to enterprise servers, and its performance rivals any database system put up against it','Image\\books\\MySql.jpg',"Mike");
INSERT INTO `book_store`.`books`(`book_id`,`title`,`pages` ,`section`,`price`,`amount`,`publish_date`,`info`,`img`,`author`) VALUES(7,'MySQL in a Nutshell',140,'MySql', 350 ,3, '2020-02-11','when you need to find the right SQL keyword or MySQL client command-line option right away, turn to this convenient reference, known for the same speed and flexibility as the system It covers so thoroughly. Mysql is packed with so many capabilities that the odds of Remembering a particular function or statement at the right moment are pretty slim. With <MySQL in a nutshell, you get the details you need, day in and day out, in one concise and extremely well organized book.<Br> The new edition contains all the commands and programming information for version 5.1, including new features and language interfaces. Its ideal for anyone using MySQL, from novices who need to get up to speed to advanced users who want a handy reference. Like all OReilly nutshell references, its easy to use and highly authoritative, written by the editor of the MySQL knowledge base at MySQL ab, the creator and owner of MySQL','Image\\books\\MySql1.jpg',"Ryen");
INSERT INTO `book_store`.`books`(`book_id`,`title`,`pages` ,`section`,`price`,`amount`,`publish_date`,`info`,`img`,`author`) VALUES(10,'MySQL Admin LITE',740,'MySql', 990 ,1, '2020-02-05','This cookbook presents solutions to problems in the form of recipes. Each recipe provides the reader with easy step-by-step descriptions of the actions necessary to accomplish a specific task. Example values and code samples are used throughout the recipes, which makes adaptation for individual needs easy. This book is for ambitious MySQL users as well as professional data center database administrators. Beginners as well as experienced administrators will benefit from this cookbook and get fresh ideas to improve their MySQL environments. Detailed background information will enable them to widen their MySQL horizon. It does not cover SQL basics, how to install MySQL servers, or how to design a relational database schema. Readers are expected to have a basic understanding of the SQL language and database concepts in general','Image\\books\\MySql2.jpg',"M.S");

INSERT INTO `book_store`.`books`(`book_id`,`title`,`pages` ,`section`,`price`,`amount`,`publish_date`,`info`,`img`,`author`) VALUES(4,'HTML5 for Masterminds',70,'html', 150 ,200, '2019-12-25','This book is not an introduction, but instead a complete course that teaches you how to build responsive websites and amazing web applications from scratch. Every chapter explores both basic and sophisticated concepts of HTML, CSS, and Javascript. Functional examples support the information introduced in every chapter to guide beginners and experts throughout every single element, style, and function included in these languages','Image\\books\\html5.jpg',"Yonit");
INSERT INTO `book_store`.`books`(`book_id`,`title`,`pages` ,`section`,`price`,`amount`,`publish_date`,`info`,`img`,`author`) VALUES(8,'HTML5 and CSS3',190,'html', 590 ,80, '2019-06-19','Prepare for Microsoft Exam 70-480—and help demonstrate your real-world mastery of programming with HTML5, JavaScript, and CSS3. Designed for experienced developers ready to advance their status, Exam Ref focuses on the critical-thinking and decision-making acumen needed for success at the Microsoft Specialist level','Image\\books\\html51.jpg',"David");


-- book_list thet paied
INSERT INTO `book_store`.`book_list`(`book_list_id`,`shoping_cart_id`,`book_id`,`user_id`,`done`) VALUES(1,1,1,1,'yes'); -- books of customer 1 is [1-5]
INSERT INTO `book_store`.`book_list`(`book_list_id`,`shoping_cart_id`,`book_id`,`user_id`,`done` ) VALUES(2,1,2,1,'yes');
INSERT INTO `book_store`.`book_list`(`book_list_id`,`shoping_cart_id`,`book_id`,`user_id`,`done` ) VALUES(3,1,3,1,'yes');
INSERT INTO `book_store`.`book_list`(`book_list_id`,`shoping_cart_id`,`book_id`,`user_id`,`done` ) VALUES(4,1,4,1,'yes');
INSERT INTO `book_store`.`book_list`(`book_list_id`,`shoping_cart_id`,`book_id`,`user_id`,`done` ) VALUES(5,1,5,1,'yes');
INSERT INTO `book_store`.`book_list`(`book_list_id`,`shoping_cart_id`,`book_id`,`user_id`,`done`) VALUES(6,2,1,2,'yes'); -- books of customer 2 is [1,6,7]
INSERT INTO `book_store`.`book_list`(`book_list_id`,`shoping_cart_id`,`book_id`,`user_id`,`done` ) VALUES(7,2,6,2,'yes');
INSERT INTO `book_store`.`book_list`(`book_list_id`,`shoping_cart_id`,`book_id`,`user_id`,`done` ) VALUES(8,2,7,2,'yes');
INSERT INTO `book_store`.`book_list`(`book_list_id`,`shoping_cart_id`,`book_id`,`user_id`,`done`) VALUES(9,100,8,1,'yes'); -- books of customer 3 is [8,10]
INSERT INTO `book_store`.`book_list`(`book_list_id`,`shoping_cart_id`,`book_id`,`user_id`,`done`) VALUES(10,100,6,2,'yes');-- shoping_carts
INSERT INTO `book_store`.`book_list`(`book_list_id`,`shoping_cart_id`,`book_id`,`user_id`,`done`) VALUES(11,101,5,1,'yes');-- shoping_carts
INSERT INTO `book_store`.`book_list`(`book_list_id`,`shoping_cart_id`,`book_id`,`user_id`,`done`) VALUES(12,102,4,2,'yes');-- shoping_carts




-- purchases
INSERT INTO `book_store`.`purchases`(`purchase_id`,`user_id`,`payment_method`,`pyment_date`,`price_paid`) VALUES(1,1, 'Bit', '2020-11-02', 370);
INSERT INTO `book_store`.`purchases`(`purchase_id`,`user_id`,`payment_method`,`pyment_date`,`price_paid`) VALUES(2,1, 'Bit', '2020-11-19', 850);
INSERT INTO `book_store`.`purchases`(`purchase_id`,`user_id`,`payment_method`,`pyment_date`,`price_paid`) VALUES(3,1, 'Card', '2020-12-22', 45);
INSERT INTO `book_store`.`purchases`(`purchase_id`,`user_id`,`payment_method`,`pyment_date`,`price_paid`) VALUES(4,1, 'Cash', '2021-01-10', 60);
INSERT INTO `book_store`.`purchases`(`purchase_id`,`user_id`,`payment_method`,`pyment_date`,`price_paid`) VALUES(5,1, 'Bit', '2021-01-16', 1090);
INSERT INTO `book_store`.`purchases`(`purchase_id`,`user_id`,`payment_method`,`pyment_date`,`price_paid`) VALUES(6,2, 'Cash', '2020-07-03', 100);
INSERT INTO `book_store`.`purchases`(`purchase_id`,`user_id`,`payment_method`,`pyment_date`,`price_paid`) VALUES(7,2, 'Bit', '2020-09-30', 580);
INSERT INTO `book_store`.`purchases`(`purchase_id`,`user_id`,`payment_method`,`pyment_date`,`price_paid`) VALUES(8,1, 'Bit', '2020-12-19', 320);
INSERT INTO `book_store`.`purchases`(`purchase_id`,`user_id`,`payment_method`,`pyment_date`,`price_paid`) VALUES(9,1, 'Bit', '2020-12-19', 499);
INSERT INTO `book_store`.`purchases`(`purchase_id`,`user_id`,`payment_method`,`pyment_date`,`price_paid`) VALUES(10,2, 'Bit', '2020-10-31', 39);

INSERT INTO `book_store`.`purchases`(`purchase_id`,`user_id`,`payment_method`,`pyment_date`,`price_paid`) VALUES(11,100, 'Bit', '2020-04-01', 1039);
INSERT INTO `book_store`.`purchases`(`purchase_id`,`user_id`,`payment_method`,`pyment_date`,`price_paid`) VALUES(12,100, 'Bit', '2020-08-18', 3359);
INSERT INTO `book_store`.`purchases`(`purchase_id`,`user_id`,`payment_method`,`pyment_date`,`price_paid`) VALUES(13,100, 'Bit', '2020-02-27', 609);
INSERT INTO `book_store`.`purchases`(`purchase_id`,`user_id`,`payment_method`,`pyment_date`,`price_paid`) VALUES(14,100, 'Bit', '2020-01-08', 893);
INSERT INTO `book_store`.`purchases`(`purchase_id`,`user_id`,`payment_method`,`pyment_date`,`price_paid`) VALUES(15,100, 'Bit', '2020-03-09', 4859);

-- orders_from_provider
INSERT INTO `book_store`.`orders_from_provider`(`order_provider_id`,`book_id`,`amount`,`provider`,`order_date`,`order_status`) VALUES(1,1,2,'Dolev','2020-12-01','active'); 
INSERT INTO `book_store`.`orders_from_provider`(`order_provider_id`,`book_id`,`amount`,`provider`,`order_date`,`order_status`) VALUES(2,2,22,'Boris','2020-12-01','active'); 
INSERT INTO `book_store`.`orders_from_provider`(`order_provider_id`,`book_id`,`amount`,`provider`,`order_date`,`order_status`) VALUES(3,2,10,'Kik','2019-10-01','arrived'); 
INSERT INTO `book_store`.`orders_from_provider`(`order_provider_id`,`book_id`,`amount`,`provider`,`order_date`,`order_status`) VALUES(4,4,3,'Dolev','2019-05-01','active'); 
INSERT INTO `book_store`.`orders_from_provider`(`order_provider_id`,`book_id`,`amount`,`provider`,`order_date`,`order_status`) VALUES(5,2,10,'Kik','2020-11-21','active' ); 
INSERT INTO `book_store`.`orders_from_provider`(`order_provider_id`,`book_id`,`amount`,`provider`,`order_date`,`order_status`) VALUES(6,9,90,'Dolev','2020-12-18','active'); 




-- managment



