/*
 * func-name: sub_1017DEF0
 * func-address: 0x1017def0
 * callers: none
 * callees: 0x1017d680, 0x101a2c8e
 */

int __thiscall sub_1017DEF0(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  char v11; // [esp-38h] [ebp-98h] BYREF
  int v12; // [esp-34h] [ebp-94h]
  int v13; // [esp-30h] [ebp-90h]
  int v14; // [esp-2Ch] [ebp-8Ch]
  int v15; // [esp-28h] [ebp-88h]
  int v16; // [esp-24h] [ebp-84h]
  int v17; // [esp-20h] [ebp-80h]
  char v18; // [esp-1Ch] [ebp-7Ch] BYREF
  int v19; // [esp-18h] [ebp-78h]
  int v20; // [esp-14h] [ebp-74h]
  int v21; // [esp-10h] [ebp-70h]
  int v22; // [esp-Ch] [ebp-6Ch]
  int v23; // [esp-8h] [ebp-68h]
  int v24; // [esp-4h] [ebp-64h]
  char *v25; // [esp+8h] [ebp-58h]
  char *v26; // [esp+Ch] [ebp-54h]
  char Buffer[64]; // [esp+10h] [ebp-50h] BYREF
  int v28; // [esp+5Ch] [ebp-4h]

  v28 = 0;
  sprintf(Buffer, "%d", a9);
  v26 = &v18;
  std::string::string(&v18, Buffer);
  v25 = &v11;
  LOBYTE(v28) = 1;
  std::string::string(&v11, &a2);
  LOBYTE(v28) = 0;
  sub_1017D680(this, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24);
  v28 = -1;
  return std::string::~string(&a2);
}
