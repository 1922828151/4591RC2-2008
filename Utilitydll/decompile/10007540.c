/*
 * func-name: sub_10007540
 * func-address: 0x10007540
 * callers: 0x10007a10
 * callees: none
 */

_DWORD *__usercall sub_10007540@<eax>(_DWORD *a1@<edx>, _DWORD *a2@<edi>, int a3@<esi>)
{
  int v3; // eax
  _DWORD *i; // ecx

  v3 = a3;
  for ( i = a2; v3; ++i )
  {
    *i = *a1;
    --v3;
  }
  return &a2[a3];
}
