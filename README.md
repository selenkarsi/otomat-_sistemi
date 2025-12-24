
# Çiçek Otomatı

Basit bir **otomatik satış sistemi**. Kullanıcı menüden çiçek seçer ve adet girer; stok yeterliyse satış yapılır ve `satislar.txt` dosyasına kaydedilir.

## 🚀 Özellikler
- Ürünler: **Orkide**, **Zambak**, **Menekşe**
- Stok ve fiyatlar **diziler** ile tutulur
- Ürün isimleri için **2D karakter dizisi**: `char urunler[3][20]`
- **Güvenli giriş**: `fgets + sscanf` ile tamsayı okuma (önerilen sürüm)
- Satış kaydı **dosyaya yazılır** (`satislar.txt`)
- Menü döngüsü: sürekli çalışır, çıkış için **0**

## 📁 Dosya Yapısı
``
