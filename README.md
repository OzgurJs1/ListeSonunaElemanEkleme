# ListeSonunaElemanEkleme
Bu program, bağlı liste yapısını kullanarak, listenin sonuna yeni bir düğüm ekler ve listenin eleman sayısını hesaplar.

İlk olarak, struct Node yapısı tanımlanır. Bu yapı, veri saklamak için bir data değişkeni ve bir sonraki düğümün adresini tutmak için bir next değişkeni içerir.

push fonksiyonu, yeni bir düğüm eklemek için kullanılır. Bu fonksiyon, bir başlangıç düğümünü (başlangıçta head_ref) ve yeni veriyi ( new_data) alır. İlk olarak, yeni bir düğüm oluşturulur ve veri değeri atanır. Daha sonra, son düğüm bulunur ve son düğümün next değişkenine yeni düğümün adresi atanır.

countNodes fonksiyonu, listenin eleman sayısını hesaplar. Bu fonksiyon, başlangıç düğümünü alır ve listenin sonuna kadar her düğümü ziyaret ederek bir sayacı arttırır.

main fonksiyonunda, bir bağlı liste oluşturulur ve push fonksiyonu kullanılarak birkaç eleman eklenir. Son olarak, countNodes fonksiyonu kullanılarak listenin eleman sayısı hesaplanır ve ekrana yazdırılır.
