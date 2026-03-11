/*
 * func-name: sub_10018E80
 * func-address: 0x10018e80
 * callers: 0x10018ef0
 * callees: 0x10017ef0
 */

int __usercall sub_10018E80@<eax>(
        unsigned __int8 *a1@<edx>,
        unsigned __int8 **a2@<ebx>,
        int a3@<edi>,
        unsigned __int8 *a4@<esi>)
{
  char v4; // al
  int v5; // eax
  char v6; // al
  int v7; // eax

  if ( a1 == a4 )
    return -1;
  v4 = a1[1];
  if ( v4 )
    v5 = sub_10017EF0(v4, *a1);
  else
    v5 = *(unsigned __int8 *)(*a1 + a3 + 72);
  if ( (unsigned int)(v5 - 24) > 1 )
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
    v6 = a1[1];
    v7 = v6 ? sub_10017EF0(v6, *a1) : *(unsigned __int8 *)(*a1 + a3 + 72);
    if ( v7 == 18 )
      break;
    if ( (unsigned int)(v7 - 24) > 1 )
      goto LABEL_15;
    a1 += 2;
    if ( a1 == a4 )
      return -1;
  }
  *a2 = a1 + 2;
  return 10;
}
