<h1>🚀Banking Management System🚀</h1>

<h2>OverView👉</h2>

The Banking Management System is an all-inclusive program designed to use an Oracle Database to handle banking activities. Users may undertake a variety of financial procedures using this system,
including opening accounts, updating information, verifying balances, making deposits and withdrawals, transferring money, and more. The program connects to the Oracle database using cx_Oracle
and communicates with it by running SQL queries.


<h1>Features🌐</h1>

<h2>User Authentication:</h2> Secure login for access control.

<h2>Account Management:</h2> Create, update, and delete bank accounts.

<h2>Balance Inquiry:</h2> Check the balance of an account.

<h2>Fund Management:</h2> Deposit and withdraw funds.

<h2>Transfer Funds:</h2> Transfer money between accounts.

<h2>Account Search:</h2> Search for accounts by number.

<h2>Account Details:</h2> View detailed information of a single account.

<h2>Customer Support:</h2> Option to contact customer support.

<h2>Account Summary:</h2> Display summary statistics of all accounts.

<h2>Transaction History:</h2> View transaction history for an account.

<h1>Prerequisites⚒</h1>

Python 3.x

Oracle Database

cx_Oracle library (install via pip install cx_Oracle)

Oracle Instant Client (download and set up Oracle Instant Client)

<h1>Installation🔒</h1>

Clone the Repository

git clone https://github.com/syedmaazsaeed/Oracle-Database-Project.git

cd BANKING_MANAGEMENT_SYSTEM_PROJECT

<h1>Install Dependencies</h1>

pip install cx_Oracle

<h2>Set Up Oracle Instant Client</h2>

Download and extract the Oracle Instant Client, then set the lib_dir to the directory containing oci.dll (for Windows) or libclntsh.so (for Linux) in the script.

<h2>Configure Database Connection🌐.</h2>

Update the database connection details in the script to match your Oracle Database configuration:

conn = cx_Oracle.connect('username/password@//localhost:1521/xe')

<h1>Usage</h1>

<h2>Run the Application☁️</h2>

python BANKING_MANAGEMENT_SYSTEM_PROJECT.py

Login

Enter your username and password to access the system.

<h1>Select an Option🫲</h1>

1: Create Account

2: Deposit Amount

3: Withdraw Amount

4: Balance Inquiry

5: Display All Account Holders

6: Delete an Account

7: Update an Account

8: Transfer Funds

9: Search for Accounts

10: View Account Details

11: Customer Support

12: Exit System

13: Display Account Summary


<h1>Files🗂️</h1>

BANKING_MANAGEMENT_SYSTEM_PROJECT.py: Main application script.

BRMS_TABLES_CREATION_QUERIES.txt: SQL queries for creating tables in the database.

BRMS_ERD_MODEL.png: Entity-Relationship Diagram of the database.

BRMS_ORACLE_DEVELOPER_TABLES.png: Screenshot of tables in Oracle SQL Developer.

BRMS_PROJECT_DATABASE.zip: Database backup or project files.


<h1>Contributing💫</h1>

Feel free to open issues or submit pull requests. Contributions are welcome!
