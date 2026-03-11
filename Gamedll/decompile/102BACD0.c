/*
 * func-name: sub_102BACD0
 * func-address: 0x102bacd0
 * callers: 0x1001424a
 * callees: 0x10012035, 0x102c9d62
 */

void __stdcall sub_102BACD0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // edi
  int v10; // [esp+Ch] [ebp-34h] BYREF
  _BYTE v11[28]; // [esp+10h] [ebp-30h] BYREF
  int v12; // [esp+2Ch] [ebp-14h]
  int v13; // [esp+3Ch] [ebp-4h]

  v9 = a9;
  v13 = 0;
  std::string::string(v11);
  LOBYTE(v13) = 1;
  v10 = a1;
  v12 = v9;
  std::string::operator=(v11, &a2);
  sub_10012035((int)&v10);
  LOBYTE(v13) = 0;
  std::string::~string(v11);
  v13 = -1;
  std::string::~string(&a2);
}
