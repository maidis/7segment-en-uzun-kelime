# 7segment-en-uzun-kelime


## Yedi segmentli gösterge karakterlerinin temsili

Yedi segmentli gösterge karakterlerinin temsili; sayıların, harflerin ve noktalama işaretlerinin yedi segmentli göstergede nasıl görüntüleneceğiyle ilgilidir. Bu temsille ilgili herhangi bir kurum (ISO, IEEE, IEC, vs.) tarafından standartlaştırılma yapılmamıştır.


## Rakam konvansiyonları

```
 __A__
|     |
F     B
|__G__|
|     |
E     C
|__D__|
```

Arap rakamları için iki temel konvansiyon vardır:

```
 _     _  _     _  _  _  _  _
| |  | _| _||_||_ |_   ||_||_|
|_|  ||_  _|  | _||_|  ||_| _|

                      _     _
 _ |              |_ | |   |_|
|_||              |_|  |     |
```

A segmenti 6, F segmenti 7 ve D segmenti 9 için isteğe bağlıdır. 1'i temsil etmek için EF'nin kullanıldığı olsa da pek yaygın değildir. CDEG'nin 0'ı temsil etmesiyle de bazen eski hesap makinelerinde karşılaşılır.


## Alfabetik harfler

Rakamlara ek olarak alfabenin bazı harflerini göstermek için de yedi segmentli göstergeler kullanılabilir. Ancak harflerin bir kısmı çok sayıda dikey çizgiye veya bir tane bile olsa temsili imkansız veya çok zor olan çapraz çizgiye sahip olduğundan yalnızca çok az sayıda gösterim aynı anda hem net hem de sezgiseldir.

Ayrıca, alfabetik harfler ve diğer birçok diğer karakter, halihazırda kolayca bulunabilen ve düşük fiyatlı nokta matrisli, on dört segmentli veya on altı segmentli ekranlarda çok daha net bir şekilde gösterilebilmektedir. Bütün bunlar, yedi segmentten oluşan göstergelerde harflerin gösterilmesi ihtiyacını ortadan kaldırmaktadır.

Özel durumlardan biri, 10-15 aralığındaki onaltılık değerlerin (rakamların) belirtilmesinde A–F harflerinin görüntülenmesidir. Bunlar bazı bilimsel hesap makinelerinde gereklidir ve elektronik cihazlarda bazı test ekranlarında kullanılır. Resmi bir standart olmamasına rağmen, bugün onaltılık hane görüntüleyen çoğu aygıt aşağıda gösterilen benzersiz biçimleri kullanır:

```
 _     _     _  _
|_||_ |   _||_ |_
| ||_||_ |_||_ |
```

10-15 aralığındaki değerleri temsil etmek için sırasıyla büyük A, C, E, F ve küçük b ve d harfleri kullanılır. Ayrıca 6 rakamı ve b harfi arasındaki belirsizliği önlemek için 6 rakamında A segmenti de yakılır.

## Örnek uygulamalar

Aşağıdaki kelimeler, taşınabilir bir medya oynatıcısının yedi segmentli göstergesinden alınmıştır. Bu, yedi segmentli bir göstergenin, harfleri görüntülemek için yeterli olduğu bir uygulamanın iyi bir örneğidir, çünkü ilgili mesajlar ne kritiktir ne de yanlış anlaşılma riski vardır. Bu nedenle, daha açık bir gösterim için doğrudan bir ihtiyaç yoktur. Ancak gösterilmesi gereken daha çeşitli mesajlar olsaydı en az 14 segmentli veya nokta matrisli bir göstergeye ihtiyaç duyulacaktır.

```
 _
| | _
|_|| |
```
```
 _  _ _
| ||_|_
|_|| |
```
```
 _    _  _  _
|  | | ||_ |_
|_ |_|_| _||_
```
```
 _     _
|_||  |_||_|
|  |_ | | _|
```
```
 _  _     _  _
|_||_|| ||_ |_
|  | ||_| _||_
```
```
 _     _  _
|_ |_ | ||_|
 _||_ |_||
```
```
       _
|    ||_ |_
|_   | _||_
```
```
 _        _  _     _
|_ |_|| ||_ |_ |  |_
 _|| ||_||  |  |_ |_
```
```
 _
|_  _  _  _  _
|_ |  |  |_||
```

## Yedi segmentli göstergelerde gösterilebilecek en uzun kelime

Bugün takip etmeye başladığım Tom Scott'un [What's The Longest Word You Can Write With Seven-Segment Displays?](https://www.youtube.com/watch?v=zp4BMR88260) videosunda harika bir şekilde cevap aradığı soruydu bu.

Ben de yedi segmentli göstergelere saygımı göstermek için bu projeyi hazırladım. Biraz daha eğlenceli hale getirmek için de metinleri yedi segmenti göstergelerde görüntüleneceği şekle çevirdim.

Bu, internetteki kodlama yarışmalarında da arasıra sorulan bir soruymuş:

* [Display words using 7-segment display](https://codegolf.stackexchange.com/questions/54008/display-words-using-7-segment-display)
* [Code Golf: Seven Segments](https://stackoverflow.com/questions/1407422/code-golf-seven-segments)
* [7-Segment display with printf and multidimensional array in C](https://stackoverflow.com/questions/33137164/7-segment-display-with-printf-and-multidimensional-array-in-c)

0-F arasındaki değerler için harika ve karmaşık gerçekleştirimler olsa da benim 0-Z arası mümkün olan değerler için gerçekleştirimim epey basit ve iyileştirmelere epey yer var gibi.

Programla şimdilik şöyle bir çıktı alınabilir:

```
AB
 _
|_||_
| ||_|

ABA
 _     _
|_||_ |_|
| ||_|| |

ABACI
 _     _  _
|_||_ |_||    |
| ||_|| ||_   |

ABAJUR
 _     _
|_||_ |_|  || | _
| ||_|| ||_||_||

ABAJURCU
 _     _           _
|_||_ |_|  || | _ |  | |
| ||_|| ||_||_||  |_ |_|

ABAJURLU
 _     _
|_||_ |_|  || | _ |  | |
| ||_|| ||_||_||  |_ |_|

ABANDONE
 _     _        _     _
|_||_ |_| _  _|| | _ |_
| ||_|| || ||_||_|| ||_

ABARTICI
 _     _           _
|_||_ |_| _ |_   ||    |
| ||_|| ||  |_   ||_   |

ABARTILI
 _     _
|_||_ |_| _ |_   ||    |
| ||_|| ||  |_   ||_   |

ABDESTHANE
 _        _  _        _     _
|_||_  _||_ |_ |_ |_||_| _ |_
| ||_||_||_  _||_ | || || ||_

ACCELERANDO
 _  _  _  _     _     _        _
|_||  |  |_ |  |_  _ |_| _  _|| |
| ||_ |_ |_ |_ |_ |  | || ||_||_|

AHLATIERBAA
 _        _        _        _  _
|_||_||  |_||_   ||_  _ |_ |_||_|
| || ||_ | ||_   ||_ |  |_|| || |

APTALCASINA
 _  _     _     _  _  _        _
|_||_||_ |_||  |  |_||_   | _ |_|
| ||  |_ | ||_ |_ | | _|  || || |

AYDINLATICI
 _                 _        _
|_||_| _|  | _ |  |_||_   ||    |
| | _||_|  || ||_ | ||_   ||_   |

BALDIRPATLATAN
    _              _  _        _     _
|_ |_||   _|  | _ |_||_||_ |  |_||_ |_| _
|_|| ||_ |_|  ||  |  | ||_ |_ | ||_ | || |

CANLANDIRICI
 _  _        _                 _
|  |_| _ |  |_| _  _|  | _   ||    |
|_ | || ||_ | || ||_|  ||    ||_   |

SONLANDIRICI
 _  _        _                 _
|_ | | _ |  |_| _  _|  | _   ||    |
 _||_|| ||_ | || ||_|  ||    ||_   |

TATLANDIRICI
    _        _                 _
|_ |_||_ |  |_| _  _|  | _   ||    |
|_ | ||_ |_ | || ||_|  ||    ||_   |

TATLANDIRICILI
    _        _                 _
|_ |_||_ |  |_| _  _|  | _   ||    ||    |
|_ | ||_ |_ | || ||_|  ||    ||_   ||_   |
```
