## ```TR``` Proje Push Nasıl Yapılır ?

Git deposuna klasörlerinizi eklemek ve pushlamak için aşağıdaki adımları takip edebilirsiniz:
 Klasörlerinizi git depo dizinine taşıyın.
 Git depo dizinine gidin ve `git init` komutunu çalıştırın. Bu, git deposunu başlatmak için kullanılır.
 `git add .` komutunu kullanarak klasörleri değişiklikler için hazırlayın. Bu, tüm dosyaları stagelamak için kullanılır.
 `git commit -m "commit message"` komutunu kullanarak stagelenen dosyaları commit edin. "commit message" yerine değişiklikleriniz hakkında açıklayıcı bir mesaj yazın.
 Depo adını ve uzak sunucu adresini eklemek için `git remote add origin <remote repository URL>` komutunu kullanın.
 Klasörleri uzak sunucuya pushlamak için `git push origin master` komutunu çalıştırın. "master" yerine, hangi dalı pushlamak istediğinize bağlı olarak farklı bir dal adı kullanabilirsiniz.
Bu adımları takip ederek, klasörlerinizi git deposuna ekleyebilir ve uzak sunucuya pushlayabilirsiniz.

!!! Projelerinizi Push lamadan önce `Norminette` kurallarına ve main yazımına dikkat ediniz ve Header Eklemeyi Unutmayınız... <42-Header Repo>

## ```ENG``` How to Push Project?

You can follow the steps below to add and push your folders to the Git repository:
 Move your folders to the git repository directory.
 Go to the git repository directory and run the `git init` command. This is used to initialize the git repository.
 Prepare the folders for changes using the `git add .` command. This is used to stage all files.
 Commit the staged files using the command `git commit -m "commit message"`. Replace "commit message" with a descriptive message about your changes.
 Use the command `git remote add origin <remote repository URL>` to add the repository name and remote server address.
 Run `git push origin master` command to push folders to remote server. Instead of "master" you can use a different branch name depending on which branch you want to push.
By following these steps, you can add your folders to the git repository and push them to the remote server.
