/*
 * func-name: sub_1007DC30
 * func-address: 0x1007dc30
 * callers: 0x10083250
 * callees: 0x1007da70, 0x101a2500
 */

char __thiscall sub_1007DC30(_DWORD *this, int a2, _DWORD *a3, int a4, int a5)
{
  unsigned int v6; // edi
  char v8; // [esp+13h] [ebp-11h]

  v6 = 0;
  *(_BYTE *)this = 1;
  if ( !a3 || !((a4 - (int)a3) >> 2) )
    invalid_parameter_noinfo();
  this[4] = *(_DWORD *)(*a3 + 712);
  v8 = 1;
  while ( v6 < (a4 - (int)a3) >> 2 )
  {
    if ( !sub_1007DA70(this, a3[v6]) )
      v8 = 0;
    ++v6;
  }
  operator delete(a3);
  return v8;
}
