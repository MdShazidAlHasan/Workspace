class Account:
    def __init__(self, balance):
        self._balance = balance
    def getBalance(self):
        return self._balance


class CheckingAccount(object):
    numberOfAccount = 0
    def __init__(self, money = 0):
        self._amount = float(money)
        CheckingAccount.numberOfAccount += 1

    def __str__(self):
        return f'Account Balance: {self._amount}' 













print('Number of Checking Accounts: ',CheckingAccount.numberOfAccount)
print(CheckingAccount())
print(CheckingAccount(100.00))
print(CheckingAccount(200.00))
print('Number of Checking Accounts: ',CheckingAccount.numberOfAccount)