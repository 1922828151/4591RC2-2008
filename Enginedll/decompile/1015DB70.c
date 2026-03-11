/*
 * func-name: sub_1015DB70
 * func-address: 0x1015db70
 * callers: 0x1007ffa0, 0x10169d00
 * callees: 0x101a252e
 */

int __thiscall sub_1015DB70(_DWORD *this, _DWORD *a2)
{
  int result; // eax
  int v4; // ebp
  int v5; // ebx
  int v6; // eax

  result = a2[1];
  v4 = *a2 + result * this[2];
  v5 = 0;
  if ( a2[3] - result > 0 )
  {
    do
    {
      v6 = 4 * (v4 + v5 * this[2]);
      memcpy((void *)(v6 + this[6]), (const void *)(v6 + this[5]), 4 * (a2[2] - *a2));
      result = a2[3] - a2[1];
      ++v5;
    }
    while ( v5 < result );
  }
  return result;
}
