/*
 * func-name: sub_1000EF10
 * func-address: 0x1000ef10
 * callers: 0x10020740
 * callees: none
 */

int __thiscall sub_1000EF10(int *this)
{
  _DWORD *v1; // edx
  int result; // eax
  int v3; // ecx
  int v4; // esi
  int v5; // ecx

  v1 = (_DWORD *)this[1];
  result = 0;
  if ( v1 )
  {
    v3 = *this;
    if ( v3 )
    {
      v4 = v3;
      do
      {
        v5 = (*v1 & 0x1FFFFFFF) == 0x1FFFFFFF;
        if ( (v1[1] & 0x1FFFFFFF) == 0x1FFFFFFF )
          ++v5;
        if ( (v1[2] & 0x1FFFFFFF) == 0x1FFFFFFF )
          ++v5;
        result += v5;
        v1 += 3;
        --v4;
      }
      while ( v4 );
    }
  }
  return result;
}
