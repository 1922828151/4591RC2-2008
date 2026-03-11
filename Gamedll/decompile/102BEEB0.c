/*
 * func-name: sub_102BEEB0
 * func-address: 0x102beeb0
 * callers: none
 * callees: 0x10002d6a, 0x102c04d0
 */

void __thiscall sub_102BEEB0(_BYTE *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // eax
  int v10[4]; // [esp-1Ch] [ebp-C0h] BYREF
  int v11; // [esp-Ch] [ebp-B0h]
  int v12; // [esp-8h] [ebp-ACh]
  int v13; // [esp-4h] [ebp-A8h]
  int *v14; // [esp+Ch] [ebp-98h]
  _BYTE v15[136]; // [esp+10h] [ebp-94h] BYREF
  int v16; // [esp+A0h] [ebp-4h]

  v16 = 0;
  v14 = v10;
  std::string::string(v10);
  sub_10002D6A(this + 48, 0, v10[0], v10[1], v10[2], v10[3], v11, v12, v13);
  std::string::operator=(this + 64, &a2);
  v13 = 1;
  v12 = 64;
  v11 = 2;
  v9 = std::string::c_str(this + 64);
  std::ofstream::ofstream(v15, v9, v11, v12, v13);
  LOBYTE(v16) = 1;
  sub_102C04D0(v15, "//END-OF-FILE");
  std::ofstream::close(v15);
  this[92] = 1;
  LOBYTE(v16) = 0;
  std::ofstream::`vbase destructor'(v15);
  v16 = -1;
  std::string::~string(&a2);
}
