# BookEasyBuyShoop (bebs)

# A local shortcut is located in the BEBS folder - named BEBS - Shortcut Its will be the best to run it from visual studio to get the best performance

#  Store management system with user interface
# c++ project with net Project

### Team
Made by :

* Idan   Kario      | 300853751   (https://github.com/idankario)
* Shani  Levi       | 308428226   (https://github.com/shani24levi)

### Project specification: [link](https://github.com/idankario/BookShoop-Cpp).

### Overview

The purpose of this work is to develop a system for coordinating the sales, orders and stock management of a book editor, while following the Service Oriented Architecture (SOA) principles. As such, a building block can play any of three roles, the service provider, the service registry and the server requester. The customers are capable of doing an order in the store.

### Architecture Specification

### Schema

* Book - saves all information related to the books in the inventory;
  * book_id
  * active_item (type boolean that informs whether book is valid in the shop)  
  * title
  * pages
  * section
  * Price
  * amount 
  * publish_date
  * info
  * img
  * author
* orders_from_provider - saves all information related to the orders of the service:
  * order_provider_id
  * book_id
  * amount
  * provider
  * order_status
  * order_date
  * Book
* purchases - saves all information about purchases:
  * purchase_id
  * cart_id
  * user_id
  * payment_method
  * pyment_date
  * price_paid
* book_list - saves all information related to the purchases devide by book
  * book_list_id
  * purchase_id
  * book_id
  * price
  * amount
* users - saves all information related to the registered users of the service
  * user_role
  * user_id
  * email
  * pass
  * user_name
  * last_activity
  * join_date
  * user_status
* discounts - saves all discounts related to users or the shop
  * discount_id
  * percent
  * date_from
  * date_until
  * user_id_discount
  * active_discount

