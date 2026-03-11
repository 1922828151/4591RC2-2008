/*
 * func-name: sub_1001FCA0
 * func-address: 0x1001fca0
 * callers: 0x10020d70, 0x10021280, 0x10021fa0
 * callees: 0x100252f0, 0x10025310, 0x10025b00, 0x10034ca4, 0x10035700
 */

char __usercall sub_1001FCA0@<al>(unsigned int *a1@<esi>, _DWORD *a2, char a3)
{
  _DWORD *v3; // ebx
  unsigned int v4; // edi
  void *v5; // esp
  unsigned int v6; // edx
  int *v7; // eax
  int *v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // edx
  _DWORD *v11; // ecx
  _DWORD *v12; // eax
  char *v13; // edi
  int v15; // [esp+0h] [ebp-30h] BYREF
  int v16; // [esp+4h] [ebp-2Ch] BYREF
  _BYTE v17[20]; // [esp+8h] [ebp-28h] BYREF
  _DWORD *v18; // [esp+1Ch] [ebp-14h] BYREF
  unsigned int v19; // [esp+20h] [ebp-10h]

  v3 = a2;
  v4 = *a1;
  if ( !*a1 || !a2 )
    return 1;
  v5 = alloca(12 * v4);
  v6 = 0;
  if ( v4 )
  {
    v7 = &v16;
    v8 = a2;
    do
    {
      *(v7 - 1) = *v8;
      *v7 = *(int *)((char *)v7 + (char *)a2 - (char *)&v15);
      v7[1] = v8[2];
      ++v6;
      v8 += 3;
      v7 += 3;
    }
    while ( v6 < *a1 );
    v3 = a2;
  }
  sub_100252F0(&v15, *a1);
  sub_10025310(&v18);
  v9 = v19;
  if ( v19 >= *a1 )
  {
    sub_10025B00(v17);
    return 1;
  }
  if ( a3 )
  {
    v10 = 0;
    *a1 = v19;
    if ( v9 )
    {
      v11 = v18;
      v12 = v3 + 1;
      v13 = (char *)((char *)v18 - (char *)v3);
      do
      {
        *(v12 - 1) = *v11;
        *v12 = *(_DWORD *)((char *)v12 + (_DWORD)v13);
        v12[1] = v11[2];
        ++v10;
        v11 += 3;
        v12 += 3;
      }
      while ( v10 < *a1 );
    }
  }
  sub_10025B00(v17);
  return 0;
}
