/*
 * func-name: sub_100224F0
 * func-address: 0x100224f0
 * callers: 0x10020f30
 * callees: 0x100234ec
 */

int __usercall sub_100224F0@<eax>(int a1@<edx>, int a2@<ebx>, int a3@<edi>, _DWORD *a4@<esi>, int a5)
{
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // eax
  int result; // eax
  void *v9; // ecx
  int v10; // eax
  int v11; // eax

  if ( !a5 && !a1 )
  {
LABEL_11:
    v7 = a4[4];
    if ( a4[3] != v7
      || (v7
        ? (v9 = (void *)a4[5], v10 = 2 * v7, a4[4] = v10, result = (int)realloc(v9, 12 * v10))
        : (a4[4] = 8, result = (int)malloc(0x60u)),
          (a4[5] = result) != 0) )
    {
      v11 = a4[5] + 12 * a4[3];
      *(_DWORD *)v11 = a3;
      *(_DWORD *)(v11 + 8) = a5;
      *(_BYTE *)(v11 + 4) = a2;
      if ( !a2 )
        *(_BYTE *)(a3 + 8) = 1;
      result = 1;
      ++a4[3];
    }
    return result;
  }
  v5 = 0;
  if ( (int)a4[3] <= 0 )
  {
LABEL_7:
    if ( a1 && !a4[2] && !*(_BYTE *)(a3 + 9) )
      a4[2] = a3;
    goto LABEL_11;
  }
  v6 = (_DWORD *)a4[5];
  while ( a3 != *v6 )
  {
    ++v5;
    v6 += 3;
    if ( v5 >= a4[3] )
      goto LABEL_7;
  }
  return 1;
}
