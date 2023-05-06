import math

#Khoi lenh co the phat sinh loi
def check_so_nguyen_to(n):
   
   if n < 2:
       return 0
   else:
       #Su dung vong lap for de duyet cac so tu 2 den can bac hai cua n
       for i in range(2, int(math.sqrt(n))+1):
           #Kiem tra tinh chia het
           if n % i == 0:
               return 0
               #Thoat vong lap
               break
       #Neu khong thoat vong lap thi khoi lenh else se duoc thuc hien
       else:
           return 1

    
def down_to_zero(n):
    min = n 
    if check_so_nguyen_to(n) == 1:
        return min
    else:
        for i in range(2, n):
            if n%i == 0:
                temp = max(n/i, i)
                if temp + 1< min:
                    min = temp + 1
        return min

    
    
n = int(input())
for i in range(0, n):
    x = int(input())
    print(down_to_zero(x))


