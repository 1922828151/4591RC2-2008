/*
 * func-name: sub_1017CBD0
 * func-address: 0x1017cbd0
 * callers: 0x10097ea0
 * callees: 0x100161f0
 */

int __thiscall sub_1017CBD0(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // ebp
  int v10; // eax
  unsigned int i; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  _BYTE v16[136]; // [esp+14h] [ebp-94h] BYREF
  int v17; // [esp+A4h] [ebp-4h]

  v9 = 0;
  v17 = 0;
  v10 = std::string::c_str(&a2);
  std::ofstream::ofstream(v16, v10, 2, 64, 1);
  LOBYTE(v17) = 1;
  for ( i = 0; ; ++i )
  {
    v12 = this[13];
    if ( !v12 || i >= (this[14] - v12) / 28 )
      break;
    v13 = this[13];
    if ( !v13 || i >= (this[14] - v13) / 28 )
      invalid_parameter_noinfo();
    v14 = std::operator<<<char>(v16, v9 + this[13]);
    std::ostream::operator<<(v14, std::endl);
    v9 += 28;
  }
  sub_100161F0((int)v16, (int)"//END-OF-FILE");
  std::ofstream::close(v16);
  LOBYTE(v17) = 0;
  std::ofstream::`vbase destructor'(v16);
  v17 = -1;
  return std::string::~string(&a2);
}
