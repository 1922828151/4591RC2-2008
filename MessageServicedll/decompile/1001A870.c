/*
 * func-name: sub_1001A870
 * func-address: 0x1001a870
 * callers: none
 * callees: 0x100028b0, 0x100074b0, 0x1001ae60, 0x100294f2
 */

void __thiscall sub_1001A870(_DWORD *this, int a2, int a3, int a4, int a5)
{
  void **v6; // esi
  _DWORD *v7; // ebp
  void **v8; // edi
  void *v9; // edi

  v6 = (void **)this[9];
  v7 = this + 8;
  if ( (unsigned int)v6 > this[10] )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v8 = (void **)v7[2];
    if ( v7[1] > (unsigned int)v8 )
      invalid_parameter_noinfo();
    if ( v6 == v8 )
      break;
    if ( (unsigned int)v6 >= v7[2] )
    {
      invalid_parameter_noinfo();
      if ( (unsigned int)v6 >= v7[2] )
        invalid_parameter_noinfo();
    }
    sub_1001AE60(*(_DWORD *)(this[7] + 76), v6 + 1);
    if ( (unsigned int)v6 >= v7[2] )
      invalid_parameter_noinfo();
    v9 = *v6;
    if ( *v6 )
    {
      sub_100028B0((int)v9 + 40);
      sub_100074B0((int)v9);
      operator delete(v9);
    }
    if ( (unsigned int)v6 >= v7[2] )
      invalid_parameter_noinfo();
    v6 += 2;
  }
}
