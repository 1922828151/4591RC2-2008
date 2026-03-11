/*
 * func-name: sub_102BF760
 * func-address: 0x102bf760
 * callers: 0x10276ad0
 * callees: 0x102bf0f0
 */

void __thiscall sub_102BF760(
        _DWORD *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  char v16; // [esp-38h] [ebp-54h] BYREF
  int v17; // [esp-34h] [ebp-50h]
  int v18; // [esp-30h] [ebp-4Ch]
  int v19; // [esp-2Ch] [ebp-48h]
  int v20; // [esp-28h] [ebp-44h]
  int v21; // [esp-24h] [ebp-40h]
  int v22; // [esp-20h] [ebp-3Ch]
  char v23; // [esp-1Ch] [ebp-38h] BYREF
  int v24; // [esp-18h] [ebp-34h]
  int v25; // [esp-14h] [ebp-30h]
  int v26; // [esp-10h] [ebp-2Ch]
  int v27; // [esp-Ch] [ebp-28h]
  int v28; // [esp-8h] [ebp-24h]
  int v29; // [esp-4h] [ebp-20h]
  char *v30; // [esp+8h] [ebp-14h]
  char *v31; // [esp+Ch] [ebp-10h]
  int v32; // [esp+18h] [ebp-4h]

  v30 = &v23;
  v32 = 1;
  std::string::string(&v23, &a9);
  v31 = &v16;
  LOBYTE(v32) = 2;
  std::string::string(&v16, &a2);
  LOBYTE(v32) = 1;
  sub_102BF0F0(this, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29);
  LOBYTE(v32) = 0;
  std::string::~string(&a2);
  v32 = -1;
  std::string::~string(&a9);
}
