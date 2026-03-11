/*
 * func-name: sub_102BFA30
 * func-address: 0x102bfa30
 * callers: none
 * callees: 0x102bf0f0, 0x102c9d62
 */

void __thiscall sub_102BFA30(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, unsigned int a9)
{
  int v10; // ecx
  char v11; // [esp-38h] [ebp-98h] BYREF
  int v12; // [esp-34h] [ebp-94h]
  int v13; // [esp-30h] [ebp-90h]
  int v14; // [esp-2Ch] [ebp-8Ch]
  int v15; // [esp-28h] [ebp-88h]
  int v16; // [esp-24h] [ebp-84h]
  int v17; // [esp-20h] [ebp-80h]
  _DWORD v18[11]; // [esp-1Ch] [ebp-7Ch] BYREF
  char Buffer[64]; // [esp+10h] [ebp-50h] BYREF
  int v20; // [esp+5Ch] [ebp-4h]

  v20 = 0;
  sprintf(Buffer, "RGBA %d %d %d %d", BYTE2(a9), BYTE1(a9), (unsigned __int8)a9, HIBYTE(a9));
  v18[0] = v10;
  v18[10] = v18;
  std::string::string(v18, Buffer);
  v18[9] = &v11;
  LOBYTE(v20) = 1;
  std::string::string(&v11, &a2);
  LOBYTE(v20) = 0;
  sub_102BF0F0(this, v11, v12, v13, v14, v15, v16, v17, v18[0], v18[1], v18[2], v18[3], v18[4], v18[5], v18[6]);
  v20 = -1;
  std::string::~string(&a2);
}
