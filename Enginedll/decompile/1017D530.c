/*
 * func-name: sub_1017D530
 * func-address: 0x1017d530
 * callers: none
 * callees: 0x100116a0, 0x100161f0
 */

int __thiscall sub_1017D530(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  _DWORD *v9; // esi
  int v10; // ebp
  int v11; // eax
  unsigned int i; // edi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  _BYTE v17[136]; // [esp+14h] [ebp-94h] BYREF
  int v18; // [esp+A4h] [ebp-4h]

  v9 = this + 12;
  v10 = 0;
  v18 = 0;
  sub_100116A0(this + 12, &a2);
  v11 = std::string::c_str(this + 16);
  std::ofstream::ofstream(v17, v11, 2, 64, 1);
  LOBYTE(v18) = 1;
  for ( i = 0; ; ++i )
  {
    v13 = v9[1];
    if ( !v13 || i >= (v9[2] - v13) / 28 )
      break;
    v14 = v9[1];
    if ( !v14 || i >= (v9[2] - v14) / 28 )
      invalid_parameter_noinfo();
    v15 = std::operator<<<char>(v17, v10 + v9[1]);
    std::ostream::operator<<(v15, std::endl);
    v10 += 28;
  }
  sub_100161F0((int)v17, (int)"//END-OF-FILE");
  std::ofstream::close(v17);
  LOBYTE(v18) = 0;
  std::ofstream::`vbase destructor'(v17);
  v18 = -1;
  return std::string::~string(&a2);
}
