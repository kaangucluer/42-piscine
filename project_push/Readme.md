## ```TR``` Proje Push Nasıl Yapılır ?

Git deposuna klasörlerinizi eklemek ve pushlamak için aşağıdaki adımları takip edebilirsiniz:
 Klasörlerinizi git depo dizinine taşıyın.
 Git depo dizinine gidin ve `git init` komutunu çalıştırın. Bu, git deposunu başlatmak için kullanılır.
 `git add .` komutunu kullanarak klasörleri değişiklikler için hazırlayın. Bu, tüm dosyaları stagelamak için kullanılır.
 `git commit -m "commit message"` komutunu kullanarak stagelenen dosyaları commit edin. "commit message" yerine değişiklikleriniz hakkında açıklayıcı bir mesaj yazın.
 Depo adını ve uzak sunucu adresini eklemek için `git remote add origin <remote repository URL>` komutunu kullanın.
 Klasörleri uzak sunucuya pushlamak için `git push origin master` komutunu çalıştırın. "master" yerine, hangi dalı pushlamak istediğinize bağlı olarak farklı bir dal adı kullanabilirsiniz.
Bu adımları takip ederek, klasörlerinizi git deposuna ekleyebilir ve uzak sunucuya pushlayabilirsiniz.
