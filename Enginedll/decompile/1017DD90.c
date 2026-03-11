/*
 * func-name: sub_1017DD90
 * func-address: 0x1017dd90
 * callers: 0x1007f2e0
 * callees: 0x1017d680
 */

int __thiscall sub_1017DD90(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, char *a9)
{
  const char *v10; // eax
  char v12; // [esp-38h] [ebp-50h] BYREF
  int v13; // [esp-34h] [ebp-4Ch]
  int v14; // [esp-30h] [ebp-48h]
  int v15; // [esp-2Ch] [ebp-44h]
  int v16; // [esp-28h] [ebp-40h]
  int v17; // [esp-24h] [ebp-3Ch]
  int v18; // [esp-20h] [ebp-38h]
  char v19; // [esp-1Ch] [ebp-34h] BYREF
  int v20; // [esp-18h] [ebp-30h]
  int v21; // [esp-14h] [ebp-2Ch]
  int v22; // [esp-10h] [ebp-28h]
  int v23; // [esp-Ch] [ebp-24h]
  int v24; // [esp-8h] [ebp-20h]
  int v25; // [esp-4h] [ebp-1Ch]
  char *v26; // [esp+8h] [ebp-10h]
  int v27; // [esp+14h] [ebp-4h]

  v27 = 0;
  v10 = "true";
  if ( !(_BYTE)a9 )
    v10 = "false";
  a9 = &v19;
  std::string::string(&v19, v10);
  v26 = &v12;
  LOBYTE(v27) = 1;
  std::string::string(&v12, &a2);
  LOBYTE(v27) = 0;
  sub_1017D680(this, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25);
  v27 = -1;
  return std::string::~string(&a2);
}
