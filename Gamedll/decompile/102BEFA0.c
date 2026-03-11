/*
 * func-name: sub_102BEFA0
 * func-address: 0x102befa0
 * callers: none
 * callees: 0x1000ab4b, 0x102c04d0
 */

void __thiscall sub_102BEFA0(int this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // esi
  int v10; // ebp
  int v11; // eax
  unsigned int i; // edi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  _BYTE v16[136]; // [esp+14h] [ebp-94h] BYREF
  int v17; // [esp+A4h] [ebp-4h]

  v9 = this + 48;
  v10 = 0;
  v17 = 0;
  sub_1000AB4B((void *)(this + 48), &a2);
  v11 = std::string::c_str(this + 64);
  std::ofstream::ofstream(v16, v11, 2, 64, 1);
  LOBYTE(v17) = 1;
  for ( i = 0; ; ++i )
  {
    v13 = *(_DWORD *)(v9 + 4);
    if ( !v13 || i >= (*(_DWORD *)(v9 + 8) - v13) / 28 )
      break;
    v14 = *(_DWORD *)(v9 + 4);
    if ( !v14 || i >= (*(_DWORD *)(v9 + 8) - v14) / 28 )
      _invalid_parameter_noinfo();
    v15 = std::operator<<<char>(v16, v10 + *(_DWORD *)(v9 + 4));
    std::ostream::operator<<(v15, std::endl);
    v10 += 28;
  }
  sub_102C04D0(v16, "//END-OF-FILE");
  std::ofstream::close(v16);
  LOBYTE(v17) = 0;
  std::ofstream::`vbase destructor'(v16);
  v17 = -1;
  std::string::~string(&a2);
}
