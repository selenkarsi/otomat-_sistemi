
# Çiçek Otomatı

Basit bir **otomatik satış sistemi**. Kullanıcı menüden çiçek seçer, adet girer; stok yeterliyse satış yapılır ve `satislar.txt` dosyasına **eklenir**.

## 🌼 Ürünler
- **Orkide** – 120.00 TL  
- **Zambak** – 80.00 TL  
- **Menekşe** – 60.00 TL  

> Stoklar: `{5, 3, 4}` olarak başlar. Ürün adları `char urunler[3][20]` 2B karakter dizisinde tutulur.

---

## 🧩 Özellikler
- Menü tabanlı akış (**while(1)** döngüsü)
- **if-else** ile seçim kontrolü
- Diziler: `stok[]`, `fiyat[]`, `urunler[][]`
- **Dosyalama**: Satışlar `satislar.txt` dosyasına **append** edilir
- Basit hata mesajları (yetersiz stok vs.)

> Not: Bu sürüm **girişleri `scanf` ile okur**. İstersen daha güvenli giriş için `fgets + sscanf` sürümüne geçebilirsin.

---

## 📁 Proje Yapısı (örnek)

