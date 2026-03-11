/*
 * func-name: sub_1001EDD0
 * func-address: 0x1001edd0
 * callers: 0x10020e70
 * callees: 0x1001de90
 */

int __cdecl sub_1001EDD0(int a1, _DWORD *a2, char *a3)
{
  char v3; // cl
  int result; // eax
  int v5; // esi

  if ( !a3 )
  {
    v3 = 6;
LABEL_3:
    *(_BYTE *)(a1 + 69) = v3;
    *(_DWORD *)a1 = sub_1001EC90;
    *(_DWORD *)(a1 + 4) = sub_1001EDB0;
    *(_DWORD *)(a1 + 48) = sub_1001DED0;
    *(_DWORD *)(a1 + 72) = a2;
    *a2 = a1;
    return 1;
  }
  v5 = 0;
  while ( 1 )
  {
    result = sub_1001DE90(off_1003008C[v5], a3);
    if ( result )
      break;
    if ( ++v5 >= 6 )
      return result;
  }
  v3 = v5;
  if ( v5 != -1 )
    goto LABEL_3;
  return 0;
}
