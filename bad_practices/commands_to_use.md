## Das absolute Must-Have zur Laufzeit: (Warn All), (Extra Warnungen), (Warnungen als Fehler behandeln)
clang -g -Wall -Wextra -Werror -std=c11 main.c -o main

## Einsatz eines Adress-Sanitizers
clang -fsanitize=address -g -O1 asan.c -o asan
clang -fsanitize=address -g -O0 asan.c -o asan

## Cppcheck für erweiterte Prüfung
cppcheck --enable=all --suppress=missingIncludeSystem .

## Formatieren über die Kommandozeile
clang-format -i main.c
clang-format -style=google -i main.c
# eigenen Stil definieren über (.clang-format)

# in VS-Code braucht man die C/C++ extension
# Ctrl + , ("Format On Save" und "Default Formatter" ).
