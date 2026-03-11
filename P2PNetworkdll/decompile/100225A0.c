/*
 * func-name: sub_100225A0
 * func-address: 0x100225a0
 * callers: 0x10020130, 0x10020f30
 * callees: 0x10022d40, 0x10023100
 */

int __usercall sub_100225A0@<eax>(_DWORD *a1@<ebx>, char **a2)
{
  char **v2; // ecx
  char *v3; // ebp
  char v4; // al
  char *v5; // edi
  int v6; // edx
  char *v7; // eax
  int v8; // ecx

  v2 = a2;
  v3 = *a2;
  v4 = **a2;
  if ( !v4 )
    return 1;
  while ( 1 )
  {
    if ( v4 != 58 )
      goto LABEL_14;
    v5 = *v2;
    if ( *v2 != v3 )
      break;
LABEL_7:
    if ( a1[92] == a1[91] && !sub_10023100() )
      return 0;
    *(_BYTE *)a1[92] = 0;
    v6 = a1[93];
    ++a1[92];
    v7 = (char *)sub_10022D40(v6, 8u);
    if ( !v7 )
      return 0;
    v8 = a1[93];
    if ( *(_DWORD *)v7 == v8 )
      a1[93] = a1[92];
    else
      a1[92] = v8;
    v2 = a2;
    a2[1] = v7;
LABEL_14:
    v4 = *++v3;
    if ( !v4 )
      return 1;
  }
  while ( a1[92] != a1[91] || sub_10023100() )
  {
    *(_BYTE *)a1[92]++ = *v5;
    if ( ++v5 == v3 )
      goto LABEL_7;
  }
  return 0;
}
