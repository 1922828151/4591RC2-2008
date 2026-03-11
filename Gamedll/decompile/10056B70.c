/*
 * func-name: sub_10056B70
 * func-address: 0x10056b70
 * callers: 0x1000ea84
 * callees: none
 */

_DWORD *__stdcall sub_10056B70(_DWORD *a1, int a2, _DWORD *a3)
{
  int v3; // eax
  _DWORD *i; // ecx

  v3 = a2;
  for ( i = a1; v3; ++i )
  {
    *i = *a3;
    --v3;
  }
  return &a1[a2];
}
