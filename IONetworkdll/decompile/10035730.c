/*
 * func-name: sub_10035730
 * func-address: 0x10035730
 * callers: 0x10035760
 * callees: none
 */

_WORD *__usercall sub_10035730@<eax>(_WORD *a1@<edx>, _WORD *a2@<edi>, int a3@<esi>)
{
  int v3; // eax
  _WORD *i; // ecx

  v3 = a3;
  for ( i = a2; v3; ++i )
  {
    *i = *a1;
    --v3;
  }
  return &a2[a3];
}
