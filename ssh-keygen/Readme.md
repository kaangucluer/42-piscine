##  GIT SSH Anahtarınızı Ayarlama -- Setting Up Your GIT SSH Key
````Tr```

Projeleriniz için SSH Anahtarınızı nasıl kurarsınız:

Adım 1 - Öncelikle iTerm'inizi açmanız gerekir. <br>
Adım 2 - Bu komutu çalıştırın `ssh-keygen <br>
Adım 3 - Enter'a basın. <br>
Adım 4 - Ekranınızda ssh dosyaları görünene kadar Enter tuşuna basmaya devam edin:
Adım 5 - Bu komutu çalıştırın `cat .ssh/id_rsa.pub` <br>
Adım 6 - Genel Anahtarı Kopyalayın. <br>
Adım 7 - 42 Intra Hesabınıza kopyalayın
- Profili Düzenle'ye tıklayın
- Ardından Genel Anahtar'ı tıklayın
- Genel Anahtarınızı Yapıştırın
- Gönder'e basın

````Eng```

How to set up your SSH Key for your Projects:

Step 1 - First you need to open your iTerm. <br>
Step 2 - Run this command `ssh-keygen -t rsa -b 4096` <br>
Step 3 - Press Enter. <br>
Step 4 - Keep pressing Enter until ssh files appear on your screen
Step 5 - Run this commmand `ssh key cat .ssh/id_rsa.pub` <br>
Step 6 - Copy The Public Key. <br>
Step 7 - Copy into your 42 Intra Account
- Click Edit Profile
- Then Click Public Key
- Paste Your Public Key
- Press Submit
