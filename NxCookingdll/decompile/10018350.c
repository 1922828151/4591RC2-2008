/*
 * func-name: sub_10018350
 * func-address: 0x10018350
 * callers: 0x10017e30, 0x10018590
 * callees: none
 */

int __thiscall sub_10018350(_DWORD *this)
{
  int v1; // edx
  int result; // eax
  int v3; // esi
  _DWORD *v4; // ecx
  int v5; // ebp
  int v6; // ebx
  int v7; // edi
  int v8; // edx

  v1 = this[2];
  result = 0;
  if ( v1 )
  {
    v3 = this[5];
    v4 = (_DWORD *)this[4];
    v5 = v1;
    do
    {
      v6 = v3 + 12 * *v4;
      v7 = v3 + 12 * v4[1];
      v8 = v3 + 12 * v4[2];
      if ( v6 == v7 || v7 == v8 || v8 == v6 )
        ++result;
      v4 += 3;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
