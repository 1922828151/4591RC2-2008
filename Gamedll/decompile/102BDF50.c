/*
 * func-name: sub_102BDF50
 * func-address: 0x102bdf50
 * callers: 0x10217fe0, 0x10219e90, 0x1021b1d0, 0x1022ef60, 0x102766a0, 0x102b7ad0, 0x102be340
 * callees: 0x102bd940
 */

void *__thiscall sub_102BDF50(
        _DWORD *this,
        void *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  int v18[7]; // [esp-38h] [ebp-60h] BYREF
  char v19; // [esp-1Ch] [ebp-44h] BYREF
  int v20; // [esp-18h] [ebp-40h]
  int v21; // [esp-14h] [ebp-3Ch]
  int v22; // [esp-10h] [ebp-38h]
  int v23; // [esp-Ch] [ebp-34h]
  int v24; // [esp-8h] [ebp-30h]
  int v25; // [esp-4h] [ebp-2Ch]
  int v26; // [esp+Ch] [ebp-1Ch]
  void *v27; // [esp+10h] [ebp-18h]
  char *v28; // [esp+14h] [ebp-14h]
  int *v29; // [esp+18h] [ebp-10h]
  int v30; // [esp+24h] [ebp-4h]

  v27 = a2;
  v26 = 0;
  v28 = &v19;
  v30 = 2;
  std::string::string(&v19, &a10);
  v29 = v18;
  LOBYTE(v30) = 3;
  std::string::string(v18, &a3);
  LOBYTE(v30) = 2;
  sub_102BD940(this, a2, v18[0], v18[1], v18[2], v18[3], v18[4], v18[5], v18[6], v19, v20, v21, v22, v23, v24, v25);
  v26 = 1;
  LOBYTE(v30) = 1;
  std::string::~string(&a3);
  LOBYTE(v30) = 0;
  std::string::~string(&a10);
  return a2;
}
