/*
 * func-name: sub_102BF800
 * func-address: 0x102bf800
 * callers: 0x10276ad0, 0x1029bf40
 * callees: 0x102bf0f0
 */

void __thiscall sub_102BF800(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, char *a9)
{
  const char *v10; // eax
  char v11; // [esp-38h] [ebp-50h] BYREF
  int v12; // [esp-34h] [ebp-4Ch]
  int v13; // [esp-30h] [ebp-48h]
  int v14; // [esp-2Ch] [ebp-44h]
  int v15; // [esp-28h] [ebp-40h]
  int v16; // [esp-24h] [ebp-3Ch]
  int v17; // [esp-20h] [ebp-38h]
  char v18; // [esp-1Ch] [ebp-34h] BYREF
  int v19; // [esp-18h] [ebp-30h]
  int v20; // [esp-14h] [ebp-2Ch]
  int v21; // [esp-10h] [ebp-28h]
  int v22; // [esp-Ch] [ebp-24h]
  int v23; // [esp-8h] [ebp-20h]
  int v24; // [esp-4h] [ebp-1Ch]
  char *v25; // [esp+8h] [ebp-10h]
  int v26; // [esp+14h] [ebp-4h]

  v26 = 0;
  v10 = "true";
  if ( !(_BYTE)a9 )
    v10 = "false";
  a9 = &v18;
  std::string::string(&v18, v10);
  v25 = &v11;
  LOBYTE(v26) = 1;
  std::string::string(&v11, &a2);
  LOBYTE(v26) = 0;
  sub_102BF0F0(this, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24);
  v26 = -1;
  std::string::~string(&a2);
}
