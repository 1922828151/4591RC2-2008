/*
 * func-name: sub_1017DFC0
 * func-address: 0x1017dfc0
 * callers: none
 * callees: 0x1017d680, 0x101a2c8e
 */

int __thiscall sub_1017DFC0(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, unsigned int a9)
{
  int v10; // ecx
  char v12; // [esp-38h] [ebp-98h] BYREF
  int v13; // [esp-34h] [ebp-94h]
  int v14; // [esp-30h] [ebp-90h]
  int v15; // [esp-2Ch] [ebp-8Ch]
  int v16; // [esp-28h] [ebp-88h]
  int v17; // [esp-24h] [ebp-84h]
  int v18; // [esp-20h] [ebp-80h]
  _DWORD v19[11]; // [esp-1Ch] [ebp-7Ch] BYREF
  char Buffer[64]; // [esp+10h] [ebp-50h] BYREF
  int v21; // [esp+5Ch] [ebp-4h]

  v21 = 0;
  sprintf(Buffer, "RGBA %d %d %d %d", BYTE2(a9), BYTE1(a9), (unsigned __int8)a9, HIBYTE(a9));
  v19[0] = v10;
  v19[10] = v19;
  std::string::string(v19, Buffer);
  v19[9] = &v12;
  LOBYTE(v21) = 1;
  std::string::string(&v12, &a2);
  LOBYTE(v21) = 0;
  sub_1017D680(this, v12, v13, v14, v15, v16, v17, v18, v19[0], v19[1], v19[2], v19[3], v19[4], v19[5], v19[6]);
  v21 = -1;
  return std::string::~string(&a2);
}
