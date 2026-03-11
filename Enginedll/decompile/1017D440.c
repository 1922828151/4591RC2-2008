/*
 * func-name: sub_1017D440
 * func-address: 0x1017d440
 * callers: none
 * callees: 0x1000e9c0, 0x100161f0
 */

int __thiscall sub_1017D440(int this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // eax
  char v11; // [esp-1Ch] [ebp-C0h] BYREF
  int v12; // [esp-18h] [ebp-BCh]
  int v13; // [esp-14h] [ebp-B8h]
  int v14; // [esp-10h] [ebp-B4h]
  int v15; // [esp-Ch] [ebp-B0h]
  int v16; // [esp-8h] [ebp-ACh]
  int v17; // [esp-4h] [ebp-A8h]
  char *v18; // [esp+Ch] [ebp-98h]
  _BYTE v19[136]; // [esp+10h] [ebp-94h] BYREF
  int v20; // [esp+A0h] [ebp-4h]

  v20 = 0;
  v18 = &v11;
  std::string::string(&v11);
  sub_1000E9C0((int *)(this + 48), 0, v11, v12, v13, v14, v15, v16, v17);
  std::string::operator=(this + 64, &a2);
  v17 = 1;
  v16 = 64;
  v15 = 2;
  v9 = std::string::c_str(this + 64);
  std::ofstream::ofstream(v19, v9, v15, v16, v17);
  LOBYTE(v20) = 1;
  sub_100161F0((int)v19, (int)"//END-OF-FILE");
  std::ofstream::close(v19);
  *(_BYTE *)(this + 92) = 1;
  LOBYTE(v20) = 0;
  std::ofstream::`vbase destructor'(v19);
  v20 = -1;
  return std::string::~string(&a2);
}
