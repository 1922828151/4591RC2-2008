/*
 * func-name: sub_102940A0
 * func-address: 0x102940a0
 * callers: 0x1001361f
 * callees: 0x10017c97
 */

int __thiscall sub_102940A0(_DWORD *this, int a2, int a3)
{
  int v3; // ebx
  unsigned int v4; // edi
  int i; // ebp
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int result; // eax

  v3 = a3;
  v4 = 0;
  for ( i = 0; ; i += 60 )
  {
    v7 = this[134];
    if ( !v7 || v4 >= (this[135] - v7) / 60 )
      break;
    v8 = this[134];
    if ( !v8 || v4 >= (this[135] - v8) / 60 )
      _invalid_parameter_noinfo();
    v9 = sub_10017C97(i + this[134]);
    if ( v3 <= v9 )
      break;
    v3 += -5 - v9;
    ++v4;
  }
  if ( v3 < 0 )
    v3 = 0;
  result = a3;
  this[168] = v4;
  this[169] = v3;
  this[166] = a2;
  this[167] = a3;
  return result;
}
