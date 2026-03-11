/*
 * func-name: sub_1001AA80
 * func-address: 0x1001aa80
 * callers: none
 * callees: 0x100028b0, 0x100074b0, 0x1001b4d0, 0x100294f2
 */

void __thiscall sub_1001AA80(_DWORD *this, int a2, int a3, int a4, int a5)
{
  void **v5; // edi
  _DWORD *v6; // ebp
  void **v7; // esi
  void *v8; // esi

  v5 = (void **)this[9];
  v6 = this + 8;
  if ( (unsigned int)v5 > this[10] )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v7 = (void **)v6[2];
    if ( v6[1] > (unsigned int)v7 )
      invalid_parameter_noinfo();
    if ( v5 == v7 )
      break;
    if ( (unsigned int)v5 >= v6[2] )
      invalid_parameter_noinfo();
    sub_1001B4D0(v5);
    if ( (unsigned int)v5 >= v6[2] )
      invalid_parameter_noinfo();
    v8 = *v5;
    if ( *v5 )
    {
      sub_100028B0((int)v8 + 40);
      sub_100074B0((int)v8);
      operator delete(v8);
    }
    if ( (unsigned int)v5 >= v6[2] )
      invalid_parameter_noinfo();
    v5 += 3;
  }
}
