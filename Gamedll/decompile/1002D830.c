/*
 * func-name: sub_1002D830
 * func-address: 0x1002d830
 * callers: 0x10030f00
 * callees: none
 */

_DWORD *__usercall sub_1002D830@<eax>(int a1@<edi>)
{
  int v1; // esi
  _DWORD *v2; // edx
  int v3; // esi
  _DWORD *v4; // ecx
  _DWORD *result; // eax

  v1 = dword_103B4E90;
  if ( dword_103B4E90 )
  {
    while ( strcmp(*(const char **)v1, *(const char **)a1) )
    {
      v1 = *(_DWORD *)(v1 + 16);
      if ( !v1 )
        goto LABEL_4;
    }
    v2 = (_DWORD *)v1;
    v3 = *(_DWORD *)(v1 + 12);
  }
  else
  {
LABEL_4:
    v2 = (_DWORD *)a1;
    v3 = 0;
    *(_DWORD *)(a1 + 16) = dword_103B4E90;
    dword_103B4E90 = a1;
  }
  v4 = (_DWORD *)(a1 + 24);
  for ( result = v2; *v4; v4 += 6 )
  {
    v2[3] = v4;
    v4[4] = v2;
    v2 = v4;
  }
  v2[3] = v3;
  return result;
}
