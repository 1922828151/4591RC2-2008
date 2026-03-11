/*
 * func-name: sub_1001BC10
 * func-address: 0x1001bc10
 * callers: 0x1001bca0
 * callees: 0x10017ef0, 0x1001bb90
 */

int __usercall sub_1001BC10@<eax>(_DWORD *a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  unsigned __int8 v6; // al
  int v8; // eax
  int v9; // eax

  if ( a2 == a3 )
    return -1;
  if ( *(_BYTE *)a2 )
  {
    v8 = sub_10017EF0(*(_BYTE *)a2, *(_BYTE *)(a2 + 1));
  }
  else
  {
    v6 = *(_BYTE *)(a2 + 1);
    if ( v6 == 120 )
      return sub_1001BB90(a2 + 2, a1, a4, a3);
    v8 = *(unsigned __int8 *)(v6 + a4 + 72);
  }
  if ( v8 != 25 )
  {
LABEL_8:
    *a1 = a2;
    return 0;
  }
  a2 += 2;
  if ( a2 == a3 )
    return -1;
  while ( 1 )
  {
    v9 = *(_BYTE *)a2
       ? sub_10017EF0(*(_BYTE *)a2, *(_BYTE *)(a2 + 1))
       : *(unsigned __int8 *)(*(unsigned __int8 *)(a2 + 1) + a4 + 72);
    if ( v9 == 18 )
      break;
    if ( v9 != 25 )
      goto LABEL_8;
    a2 += 2;
    if ( a2 == a3 )
      return -1;
  }
  *a1 = a2 + 2;
  return 10;
}
