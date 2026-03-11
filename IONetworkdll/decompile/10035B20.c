/*
 * func-name: sub_10035B20
 * func-address: 0x10035b20
 * callers: 0x100328d0, 0x10046860
 * callees: 0x10009a30, 0x10009b30
 */

int *__userpurge sub_10035B20@<eax>(int a1@<edi>, int a2)
{
  int v2; // eax
  int *v3; // ebp
  const char *v4; // ebx
  const char *v5; // esi

  v2 = *(_DWORD *)(a1 + 4);
  v3 = (int *)a2;
  if ( v2 )
    a2 = (*(_DWORD *)(a1 + 8) - v2) >> 1;
  else
    a2 = 0;
  sub_10009B30(v3, (const char *)&a2);
  v4 = *(const char **)(a1 + 4);
  if ( (unsigned int)v4 > *(_DWORD *)(a1 + 8) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v5 = *(const char **)(a1 + 8);
    if ( *(_DWORD *)(a1 + 4) > (unsigned int)v5 )
      invalid_parameter_noinfo();
    if ( v4 == v5 )
      break;
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 8) )
      invalid_parameter_noinfo();
    sub_10009A30(v3, v4);
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 8) )
      invalid_parameter_noinfo();
    v4 += 2;
  }
  return v3;
}
