# Homework_Lab2  
## Part I  
1. Создайте пустой репозиторий на сервисе github.com (или gitlab.com, или bitbucket.com).  
![Созданный пустой репозиторий](./git_init.png)\
[Ссылка на репозиторий](https://github.com/maxonhick/Homework_Lab2.git)
2. Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.\
![Выполненая инструкция, по созданию репозитория](./instruction.png)
3. Создайте файл ```hello_world.cpp``` в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу **Hello world** на языке C++ используя плохой стиль кода. Например, после заголовочных файлов вставьте строку ```using namespace std;```.
```sh
vim hello_world.cpp
```
Откроется редактор файлов, в котором будет написана нужная программа.\
4. Добавьте этот файл в локальную копию репозитория.\
```git add .```\
5. Закоммитьте изменения с осмысленным сообщением.\
```git commit -m "add first program(hello_world.cpp)"```
```sh
[main 2c72ddc] add first program(hello_world.cpp)
 4 files changed, 26 insertions(+), 1 deletion(-)
 create mode 100644 git_init.png
 create mode 100644 hello_world.cpp
 create mode 100644 instruction.png
```
6. Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение ```Hello world from @name```, где ```@name``` имя пользователя.\
Просто добавили пару строк кода, сомневаюсь, что есть что-то интересное.\
7. Закоммитьте новую версию программы. Почему не надо добавлять файл повторно git add?\
```git commit -m "modified hello_world.cpp"```\
8. Запуште изменения в удалёный репозиторий.\
```git push```\
9. Проверьте, что история коммитов доступна в удалёный репозитории.\
![Коммиты](./activity.png)
## Part II
1. В локальной копии репозитория создайте локальную ветку ```patch1```.\
```git branch patch1```\
2. Внесите изменения в ветке ```patch1``` по исправлению кода и избавления от ```using namespace std;```.\
Перейдём в ветку ```patch1```: ```git checkout patch1```\
Изменим файл также через vim.\
3. **commit, push** локальную ветку в удалённый репозиторий.\
```sh
git commit -am "vers. without 'using namespace std;'"
git push --set-upstream lab2 patch1
```
4. Проверьте, что ветка ```patch1``` доступна в удалёный репозитории.
![Проверка доступности новой ветки](./branches.png)
5. Создайте pull-request ```patch1 -> master```.
Для этого на самой странице репозитория надо нажать кнопку ```Compare && pull request```. (сомневаюсь, что нужны лишнее скрины)
6. В локальной копии в ветке ```patch1``` добавьте в исходный код комментарии.\
Всё такжечерез vim добавим комментарии.
7. **commit, push** Комментарии тут уже не нужны, это стало обычным делом.\
8. Проверьте, что новые изменения есть в созданном на **шаге 5** pull-request.\
![проверка изменений в pull-request](./checking_for_chages.png)
9. В удалённый репозитории выполните слияние PR ```patch1 -> master``` и удалите ветку ```patch1``` в удаленном репозитории.\
Это всё делает в интерфейсе GitHub, достаточно интуитивно, не очень хочесят захламлять отчёт фотографиями, поэтому можно будет просто посмотреть результат.
