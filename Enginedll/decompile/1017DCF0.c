/*
 * func-name: sub_1017DCF0
 * func-address: 0x1017dcf0
 * callers: 0x100db940
 * callees: 0x1017d680
 */

int __thiscall sub_1017DCF0(
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
  char v17; // [esp-38h] [ebp-54h] BYREF
  int v18; // [esp-34h] [ebp-50h]
  int v19; // [esp-30h] [ebp-4Ch]
  int v20; // [esp-2Ch] [ebp-48h]
  int v21; // [esp-28h] [ebp-44h]
  int v22; // [esp-24h] [ebp-40h]
  int v23; // [esp-20h] [ebp-3Ch]
  char v24; // [esp-1Ch] [ebp-38h] BYREF
  int v25; // [esp-18h] [ebp-34h]
  int v26; // [esp-14h] [ebp-30h]
  int v27; // [esp-10h] [ebp-2Ch]
  int v28; // [esp-Ch] [ebp-28h]
  int v29; // [esp-8h] [ebp-24h]
  int v30; // [esp-4h] [ebp-20h]
  char *v31; // [esp+8h] [ebp-14h]
  char *v32; // [esp+Ch] [ebp-10h]
  int v33; // [esp+18h] [ebp-4h]

  v31 = &v24;
  v33 = 1;
  std::string::string(&v24, &a9);
  v32 = &v17;
  LOBYTE(v33) = 2;
  std::string::string(&v17, &a2);
  LOBYTE(v33) = 1;
  sub_1017D680(this, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30);
  LOBYTE(v33) = 0;
  std::string::~string(&a2);
  v33 = -1;
  return std::string::~string(&a9);
}
