/*
 * func-name: sub_10022D40
 * func-address: 0x10022d40
 * callers: 0x1001f4a0, 0x10020130, 0x10020f30, 0x10021cd0, 0x100225a0, 0x10022690
 * callees: 0x10022d10
 */

int __usercall sub_10022D40@<eax>(int *a1@<edi>, unsigned __int8 *a2, size_t Size)
{
  void *v4; // eax
  int v5; // ecx
  int v6; // esi
  unsigned __int8 *v7; // ecx
  unsigned __int8 v8; // dl
  int v9; // ebp
  unsigned __int8 v10; // al
  int v11; // esi
  _DWORD *v12; // ebx
  int v13; // ecx
  _BYTE *v14; // eax
  unsigned __int8 v15; // cl
  int v16; // edx
  size_t v17; // esi
  _DWORD *v18; // ebx
  unsigned int v19; // ecx
  unsigned __int8 ***v20; // eax
  unsigned __int8 **v21; // ebp
  unsigned __int8 *v22; // edx
  unsigned __int8 v23; // al
  int v24; // ecx
  int v25; // ebp
  int v26; // eax
  int v27; // eax
  size_t v28; // edx
  unsigned __int8 ***v29; // eax
  _DWORD *v30; // edx
  _BYTE v31[5]; // [esp+Fh] [ebp-Dh]
  unsigned int i; // [esp+14h] [ebp-8h]
  unsigned __int8 **v33; // [esp+18h] [ebp-4h]

  if ( !a1[1] )
  {
    if ( !Size )
      return 0;
    v4 = calloc(0x40u, 4u);
    *a1 = (int)v4;
    if ( !v4 )
      return 0;
    a1[1] = 64;
    a1[3] = 32;
    v6 = sub_10022D10(v5, a2) & 0x3F;
    goto LABEL_40;
  }
  v7 = a2;
  v8 = *a2;
  v9 = 0;
  v31[4] = 0;
  *(_DWORD *)v31 = *a2;
  if ( *a2 )
  {
    v10 = *a2;
    do
    {
      v11 = v10 + 33 * v9;
      v10 = *++v7;
      *(_DWORD *)&v31[1] = v11;
      v9 = v11;
    }
    while ( v10 );
  }
  v12 = (_DWORD *)*a1;
  v13 = a1[1] - 1;
  v6 = v9 & v13;
  if ( !*(_DWORD *)(*a1 + 4 * (v9 & v13)) )
  {
LABEL_19:
    if ( !Size )
      return 0;
    if ( a1[2] == a1[3] )
    {
      v17 = 2 * a1[1];
      v18 = calloc(v17, 4u);
      if ( !v18 )
        return 0;
      v19 = 0;
      for ( i = 0; v19 < a1[1]; i = v19 )
      {
        v20 = (unsigned __int8 ***)(*a1 + 4 * v19);
        if ( *v20 )
        {
          v21 = *v20;
          v22 = **v20;
          v23 = *v22;
          v24 = 0;
          v33 = v21;
          if ( *v22 )
          {
            do
            {
              v25 = v23 + 33 * v24;
              v23 = *++v22;
              v24 = v25;
            }
            while ( v23 );
            v21 = v33;
          }
          v26 = v24 & (v17 - 1);
          while ( v18[v26] )
          {
            if ( v26 )
              --v26;
            else
              v26 = v17 - 1;
          }
          v19 = i;
          v18[v26] = v21;
          v9 = *(_DWORD *)&v31[1];
        }
        ++v19;
      }
      free((void *)*a1);
      a1[1] = v17;
      v27 = v17 - 1;
      v28 = v17 >> 1;
      v6 = v9 & (v17 - 1);
      *a1 = (int)v18;
      a1[3] = v28;
      while ( v18[v6] )
      {
        if ( v6 )
          --v6;
        else
          v6 = v27;
      }
    }
LABEL_40:
    *(_DWORD *)(*a1 + 4 * v6) = calloc(1u, Size);
    v29 = (unsigned __int8 ***)(*a1 + 4 * v6);
    if ( *v29 )
    {
      **v29 = a2;
      v30 = (_DWORD *)*a1;
      ++a1[2];
      return v30[v6];
    }
    return 0;
  }
  while ( 1 )
  {
    v14 = *(_BYTE **)v12[v6];
    if ( v8 == *v14 )
      break;
LABEL_15:
    if ( v6 )
      --v6;
    else
      v6 = v13;
    if ( !v12[v6] )
      goto LABEL_19;
  }
  v15 = v8;
  v16 = a2 - v14;
  while ( v15 )
  {
    v15 = (v14++)[v16 + 1];
    if ( v15 != *v14 )
    {
      v8 = *a2;
      v13 = a1[1] - 1;
      goto LABEL_15;
    }
  }
  return v12[v6];
}
