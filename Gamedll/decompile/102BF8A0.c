/*
 * func-name: sub_102BF8A0
 * func-address: 0x102bf8a0
 * callers: 0x1029bf40
 * callees: 0x102bf0f0, 0x102c9d62
 */

void __thiscall sub_102BF8A0(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, float a9)
{
  char v10; // [esp-30h] [ebp-6Ch] BYREF
  int v11; // [esp-2Ch] [ebp-68h]
  int v12; // [esp-28h] [ebp-64h]
  int v13; // [esp-24h] [ebp-60h]
  int v14; // [esp-20h] [ebp-5Ch]
  int v15; // [esp-1Ch] [ebp-58h]
  int v16; // [esp-18h] [ebp-54h]
  char v17; // [esp-14h] [ebp-50h] BYREF
  int v18; // [esp-10h] [ebp-4Ch]
  int v19; // [esp-Ch] [ebp-48h]
  int v20; // [esp-8h] [ebp-44h]
  int v21; // [esp-4h] [ebp-40h]
  int v22[4]; // [esp+0h] [ebp-3Ch]
  char *v23; // [esp+10h] [ebp-2Ch]
  char *v24; // [esp+14h] [ebp-28h]
  char Buffer[20]; // [esp+18h] [ebp-24h] BYREF
  int v26; // [esp+38h] [ebp-4h]

  v26 = 0;
  sprintf(Buffer, "%.2f", a9);
  v24 = &v17;
  std::string::string(&v17, Buffer);
  v23 = &v10;
  LOBYTE(v26) = 1;
  std::string::string(&v10, &a2);
  LOBYTE(v26) = 0;
  sub_102BF0F0(this, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22[0], v22[1]);
  v26 = -1;
  std::string::~string(&a2);
}
