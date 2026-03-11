/*
 * func-name: sub_102BE640
 * func-address: 0x102be640
 * callers: none
 * callees: 0x102c04d0
 */

void __thiscall sub_102BE640(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // ebp
  int v10; // eax
  unsigned int i; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  _BYTE v15[136]; // [esp+14h] [ebp-94h] BYREF
  int v16; // [esp+A4h] [ebp-4h]

  v9 = 0;
  v16 = 0;
  v10 = std::string::c_str(&a2);
  std::ofstream::ofstream(v15, v10, 2, 64, 1);
  LOBYTE(v16) = 1;
  for ( i = 0; ; ++i )
  {
    v12 = this[13];
    if ( !v12 || i >= (this[14] - v12) / 28 )
      break;
    v13 = this[13];
    if ( !v13 || i >= (this[14] - v13) / 28 )
      _invalid_parameter_noinfo();
    v14 = std::operator<<<char>(v15, v9 + this[13]);
    std::ostream::operator<<(v14, std::endl);
    v9 += 28;
  }
  sub_102C04D0(v15, "//END-OF-FILE");
  std::ofstream::close(v15);
  LOBYTE(v16) = 0;
  std::ofstream::`vbase destructor'(v15);
  v16 = -1;
  std::string::~string(&a2);
}
