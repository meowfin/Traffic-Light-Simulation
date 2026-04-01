// Deklarasi pin
// UTARA
int U_M = 2;
int U_K = 3;
int U_H = 4;

// TIMUR
int T_M = 5;
int T_K = 6;
int T_H = 7;

// SELATAN
int S_M = 8;
int S_K = 9;
int S_H = 10;

// BARAT
int B_M = 11;
int B_K = 12;
int B_H = 13;


// SETUP
void setup() {
  // Semua pin sebagai OUTPUT
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }

  // Kondisi awal: semua merah
  semuaMerah();
}


// Fungsi
// Fungsi untuk membuat semua lampu merah
void semuaMerah() {
  // Set semua merah ON, kuning & hijau OFF
  digitalWrite(U_M, HIGH); digitalWrite(U_K, LOW); digitalWrite(U_H, LOW);
  digitalWrite(T_M, HIGH); digitalWrite(T_K, LOW); digitalWrite(T_H, LOW);
  digitalWrite(S_M, HIGH); digitalWrite(S_K, LOW); digitalWrite(S_H, LOW);
  digitalWrite(B_M, HIGH); digitalWrite(B_K, LOW); digitalWrite(B_H, LOW);
}

// Fungsi untuk mengaktifkan satu sisi traffic light
void aktifkanSimpang(int merah, int kuning, int hijau) {

  // 1. Semua merah dulu
  semuaMerah();
  delay(500);

  // 2. Lampu HIJAU menyala (5 detik)
  digitalWrite(merah, LOW);
  digitalWrite(hijau, HIGH);
  delay(5000);

  // 3. Lampu KUNING berkedip 3 kali (total ±2 detik)
  digitalWrite(hijau, LOW);

  for (int i = 0; i < 3; i++) {
    digitalWrite(kuning, HIGH);
    delay(333);
    digitalWrite(kuning, LOW);
    delay(333);
  }

  // 4. Kembali ke merah
  digitalWrite(merah, HIGH);
}


//Loop
void loop() {
  aktifkanSimpang(U_M, U_K, U_H); // UTARA
  aktifkanSimpang(T_M, T_K, T_H); // TIMUR
  aktifkanSimpang(S_M, S_K, S_H); // SELATAN
  aktifkanSimpang(B_M, B_K, B_H); // BARAT

}
