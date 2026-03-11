/*
 * func-name: sub_102BF960
 * func-address: 0x102bf960
 * callers: 0x1029bf40
 * callees: 0x102bf0f0, 0x102c9d62
 */

void __thiscall sub_102BF960(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  char v10; // [esp-38h] [ebp-98h] BYREF
  int v11; // [esp-34h] [ebp-94h]
  int v12; // [esp-30h] [ebp-90h]
  int v13; // [esp-2Ch] [ebp-8Ch]
  int v14; // [esp-28h] [ebp-88h]
  int v15; // [esp-24h] [ebp-84h]
  int v16; // [esp-20h] [ebp-80h]
  char v17; // [esp-1Ch] [ebp-7Ch] BYREF
  int v18; // [esp-18h] [ebp-78h]
  int v19; // [esp-14h] [ebp-74h]
  int v20; // [esp-10h] [ebp-70h]
  int v21; // [esp-Ch] [ebp-6Ch]
  int v22; // [esp-8h] [ebp-68h]
  int v23; // [esp-4h] [ebp-64h]
  char *v24; // [esp+8h] [ebp-58h]
  char *v25; // [esp+Ch] [ebp-54h]
  char Buffer[64]; // [esp+10h] [ebp-50h] BYREF
  int v27; // [esp+5Ch] [ebp-4h]

  v27 = 0;
  sprintf(Buffer, "%d", a9);
  v25 = &v17;
  std::string::string(&v17, Buffer);
  v24 = &v10;
  LOBYTE(v27) = 1;
  std::string::string(&v10, &a2);
  LOBYTE(v27) = 0;
  sub_102BF0F0(this, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23);
  v27 = -1;
  std::string::~string(&a2);
}
