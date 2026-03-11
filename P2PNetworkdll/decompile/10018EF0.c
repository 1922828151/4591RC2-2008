/*
 * func-name: sub_10018EF0
 * func-address: 0x10018ef0
 * callers: 0x10018f80
 * callees: 0x10017ef0, 0x10018e80
 */

int __usercall sub_10018EF0@<eax>(
        unsigned __int8 **a1@<eax>,
        unsigned __int8 *a2@<edx>,
        unsigned __int8 *a3@<ecx>,
        int a4)
{
  char v6; // al
  int v8; // eax
  char v9; // al
  int v10; // eax

  if ( a2 == a3 )
    return -1;
  v6 = a2[1];
  if ( v6 )
  {
    v8 = sub_10017EF0(v6, *a2);
  }
  else
  {
    if ( *a2 == 120 )
      return sub_10018E80(a2 + 2, a1, a4, a3);
    v8 = *(unsigned __int8 *)(*a2 + a4 + 72);
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
    v9 = a2[1];
    v10 = v9 ? sub_10017EF0(v9, *a2) : *(unsigned __int8 *)(*a2 + a4 + 72);
    if ( v10 == 18 )
      break;
    if ( v10 != 25 )
      goto LABEL_8;
    a2 += 2;
    if ( a2 == a3 )
      return -1;
  }
  *a1 = a2 + 2;
  return 10;
}
