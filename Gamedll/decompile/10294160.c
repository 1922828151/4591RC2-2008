/*
 * func-name: sub_10294160
 * func-address: 0x10294160
 * callers: 0x1000e78c
 * callees: 0x10002ec3
 */

unsigned int __thiscall sub_10294160(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // ebx
  unsigned int v8; // edi
  int i; // ebp
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  int j; // ebx
  unsigned int result; // eax
  int v15; // eax
  _DWORD v16[2]; // [esp+10h] [ebp-8h] BYREF

  v7 = this[167] + a2[1] - this[42];
  v16[0] = *a2 - this[41];
  v16[1] = v7;
  v8 = 1;
  for ( i = 60; ; i += 60 )
  {
    v10 = this[134];
    if ( !v10 || v8 >= (this[135] - v10) / 60 )
      break;
    v11 = this[134];
    if ( !v11 || v8 >= (this[135] - v11) / 60 )
      _invalid_parameter_noinfo();
    if ( v7 < *(_DWORD *)(this[134] + i + 36) )
      break;
    ++v8;
  }
  v12 = v8 - 1;
  for ( j = 60 * v12; ; j += 60 )
  {
    result = this[134];
    if ( !result )
      break;
    result = (int)(this[135] - result) / 60;
    if ( v12 >= result )
      break;
    v15 = this[134];
    if ( !v15 || v12 >= (this[135] - v15) / 60 )
      _invalid_parameter_noinfo();
    result = sub_10002EC3((int)v16, j + this[134], a6);
    if ( (_BYTE)result )
      break;
    ++v12;
  }
  return result;
}
