# Sınav Seviyeleri - Exam Levels

Level 00          | Level 01            | Level 02          | Level 03          | Level 04            | Level 05
:-----------  	  | :-----------:       | :-----------:     | -----------:      | -----------:        | -----------:
aff_a             | first_word          | alpha_mirror      | add_prime_sum     | check_mate          | brackets
aff_first_param	  | ft_putstr           | do_op	            | epur_str          | fprime              | print_memory
aff_last_param	  | ft_strcpy           | ft_atoi	      	| expand_str        | ft_itoa             | rpn_calc
aff_z		  | ft_strlen                 | ft_strcmp 		        | ft_atoi_base      | ft_list_foreach     | cycle_detector
ft_countdown	  | ft_swap		          | ft_strdup 	      | ft_list_size      | ft_list_remove_if   | options
ft_print_numbers  | repeat_alpha		| ft_strrev	      | ft_range          | ft_split            | biggest_pal
hello		  | rev_print	          |	inter		    	| ft_rrange         | rev_wstr            |
maff_alpha	  | rot_13	          |	is_power_of_2       			| hidenp            | rostring            |
maff_revalpha	  | rotone          	  |	last_word 	    | lcm               | sort_int_tab        |
only_a	          | search_and_replace	|	max     		| paramsum          | sort_list           |
only_z	          | ulstr             	|	print_bits	            	| pgcd              | flood_fill
---	          |    fizzbuzz                	| reverse_bits        | print_hex         | brainfuck
---	          |                     	| swap_bits      | rstr_capitalizer  | ft_itoa_base
---           |                     	| union         | str_capitalizer   | moment
---	          |                     	| wdmatch            | tab_mult

```TR```

#  Sınava Nasıl Giriş Yapılır?

    login -> exam
    password -> exam
    
Terminale examshell yazınız.
   
   login -> 42 intra kullanıcı adınız (örn. kgucluer)
   şifre -> şifreniz

Examshell'de yalnızca aşağıdaki 3 komutunuz vardır:

- status - zamanı ve diğer şeyleri kontrol edin

- grademe - push egzersizini kontrol etme (moulinet)

- finish - sınavı bitirme 

4 Terminal ile çalışmak size hız kazandırabilir.

- examshell - sınavımızın ana terminalidir.

- Subjects - soruların oldugu klasördür.

- Rendu - projeleri yazacagımız klasördür.

- Traces - hatalarımızı yazan klasördür.

Bu 4 terminalin açık olması sürekli dosya dizinleri değiştirmemenizi ve sizin hızlı olmanızı sağlar.

Projeniz Hazır olduğunda renduya gidin (.\a.out klasörünü sildiğinizden emin olun)

1. git add .

2. git commit -m "Mesajınız(proje ismi)"

3. git push

4. examshell terminaline `grademe` yazın.


```ENG```

# How To Login Into The Exam

    login -> exam
    password -> exam

Type examshell in terminal

    login -> your 42 intra username (eg. prossi)
    pasword -> your password

Allow photo check

In the  examshell, you have only the following 3 commands:

- status - check the time and other things

- grademe - checking pushed exercise (moulinet)

- finish - closing examshell and finish exam

Open new terminal

    You can find your exam subject in the directory subject
    Then you can see directory Rendu. It is your repository.
    You must create the directory named by the project, create .c and/or .h and start working.
    When you are ready go in Rendu and push the directory by doing the following:

1. git add .

2. git commit -m "done"

3. git push

4. After the git push, type `grademe`
