/*
 * func-name: sub_1017DE30
 * func-address: 0x1017de30
 * callers: 0x1007f2e0
 * callees: 0x1017d680, 0x101a2c8e
 */

int __thiscall sub_1017DE30(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, float a9)
{
  char v11; // [esp-30h] [ebp-6Ch] BYREF
  int v12; // [esp-2Ch] [ebp-68h]
  int v13; // [esp-28h] [ebp-64h]
  int v14; // [esp-24h] [ebp-60h]
  int v15; // [esp-20h] [ebp-5Ch]
  int v16; // [esp-1Ch] [ebp-58h]
  int v17; // [esp-18h] [ebp-54h]
  char v18; // [esp-14h] [ebp-50h] BYREF
  int v19; // [esp-10h] [ebp-4Ch]
  int v20; // [esp-Ch] [ebp-48h]
  int v21; // [esp-8h] [ebp-44h]
  int v22; // [esp-4h] [ebp-40h]
  int v23[4]; // [esp+0h] [ebp-3Ch]
  char *v24; // [esp+10h] [ebp-2Ch]
  char *v25; // [esp+14h] [ebp-28h]
  char Buffer[20]; // [esp+18h] [ebp-24h] BYREF
  int v27; // [esp+38h] [ebp-4h]

  v27 = 0;
  sprintf(Buffer, "%.2f", a9);
  v25 = &v18;
  std::string::string(&v18, Buffer);
  v24 = &v11;
  LOBYTE(v27) = 1;
  std::string::string(&v11, &a2);
  LOBYTE(v27) = 0;
  sub_1017D680(this, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23[0], v23[1]);
  v27 = -1;
  return std::string::~string(&a2);
}
