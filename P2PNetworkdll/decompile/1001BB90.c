/*
 * func-name: sub_1001BB90
 * func-address: 0x1001bb90
 * callers: 0x1001bc10
 * callees: 0x10017ef0
 */

int __usercall sub_1001BB90@<eax>(int a1@<edx>, _DWORD *a2@<ebx>, int a3@<edi>, int a4@<esi>)
{
  int v4; // eax
  int v5; // eax

  if ( a1 == a4 )
    return -1;
  if ( *(_BYTE *)a1 )
    v4 = sub_10017EF0(*(_BYTE *)a1, *(_BYTE *)(a1 + 1));
  else
    v4 = *(unsigned __int8 *)(*(unsigned __int8 *)(a1 + 1) + a3 + 72);
  if ( (unsigned int)(v4 - 24) > 1 )
  {
LABEL_15:
    *a2 = a1;
    return 0;
  }
  a1 += 2;
  if ( a1 == a4 )
    return -1;
  while ( 1 )
  {
    v5 = *(_BYTE *)a1
       ? sub_10017EF0(*(_BYTE *)a1, *(_BYTE *)(a1 + 1))
       : *(unsigned __int8 *)(*(unsigned __int8 *)(a1 + 1) + a3 + 72);
    if ( v5 == 18 )
      break;
    if ( (unsigned int)(v5 - 24) > 1 )
      goto LABEL_15;
    a1 += 2;
    if ( a1 == a4 )
      return -1;
  }
  *a2 = a1 + 2;
  return 10;
}
