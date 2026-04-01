🚦 Traffic Light 4 Arah Berbasis Arduino Uno


📌 Deskripsi Proyek

Proyek ini merupakan implementasi sistem traffic light (lampu lalu lintas) pada persimpangan 4 arah menggunakan Arduino Uno. Sistem dirancang menggunakan konsep GPIO (General Purpose Input Output) dan disimulasikan menggunakan Tinkercad.
Lampu lalu lintas terdiri dari 4 arah:
•	Utara

•	Timur

•	Selatan

•	Barat

Setiap arah memiliki 3 lampu:

•	🔴 Merah
•	🟡 Kuning
•	🟢 Hijau
________________________________________
⚙️ Fitur Sistem

•	Sistem berjalan otomatis (looping)

•	Urutan lampu searah jarum jam:
Utara → Timur → Selatan → Barat

•	Kondisi awal semua lampu MERAH

•	Lampu HIJAU menyala selama 5 detik

•	Lampu KUNING berkedip 3 kali (±2 detik)

•	Tidak ada konflik (hanya satu arah hijau)

________________________________________
🧰 Komponen yang Digunakan

•	Arduino Uno

•	12 LED (4 arah × 3 warna)

•	12 Resistor

•	Breadboard
________________________________________
💻 Program Arduino

File program dapat dilihat pada:

traffic_light.c++

Program menggunakan pendekatan modular dengan fungsi:

•	semuaMerah()

•	aktifkanSimpang()
________________________________________
🧪 Hasil Simulasi

Simulasi dilakukan menggunakan Tinkercad dan menunjukkan:

•	Perpindahan lampu sesuai urutan

•	Timing sesuai spesifikasi

•	Tidak terjadi konflik antar arah 
________________________________________
🔗 Link Simulasi Tinkercad

https://www.tinkercad.com/things/7CqEAtRr0Ak/editel?lessonid=EFU6PEHIXGFUR1J&projectid=OGK4Q7VL20FZRV9&collectionid=undefined&title=Editing%20Components#/lesson-viewer
________________________________________
📄 Laporan

Laporan lengkap dapat dilihat pada file:

Tugas 4_H1H024040_Arifin Budi Kusuma.pdf
________________________________________
📌 Kesimpulan

Sistem traffic light 4 arah berhasil diimplementasikan menggunakan Arduino Uno dengan memanfaatkan GPIO sebagai pengendali LED. Sistem berjalan secara otomatis, terstruktur, dan sesuai dengan aturan lalu lintas yang telah ditentukan.

