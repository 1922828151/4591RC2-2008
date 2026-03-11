/*
 * func-name: sub_10010C70
 * func-address: 0x10010c70
 * callers: 0x100122c0
 * callees: 0x100149b0, 0x10014d60
 */

unsigned int __usercall sub_10010C70@<eax>(int a1@<esi>, _DWORD *a2, unsigned int a3)
{
  int v3; // ebx
  int v4; // edi
  int v5; // ebp
  int v6; // ebp
  unsigned __int8 v7; // al
  bool v8; // cl
  int v9; // ebp
  int v10; // edi
  int v11; // edi
  unsigned __int8 v12; // al
  int v13; // edi
  int i; // ebp
  int v15; // edi
  unsigned __int8 v16; // al
  bool v17; // cl
  int v18; // edi
  int j; // ebp
  int v20; // edi
  unsigned __int8 v21; // al
  int v22; // edi
  int k; // ebp
  int v24; // edi
  unsigned __int8 v25; // al
  bool v26; // cl
  int v27; // edi
  int m; // ebp
  int v29; // edi
  unsigned __int8 v30; // al
  int v31; // edi
  int n; // ebp
  int v33; // edi
  unsigned __int8 v34; // al
  bool v35; // cl
  int v36; // edi
  int ii; // ebp
  int v38; // edi
  unsigned __int8 v39; // al
  int jj; // ebp
  int v41; // edi
  unsigned __int8 v42; // al
  bool v43; // cl
  int v44; // edi
  int kk; // ebp
  int v46; // edi
  unsigned __int8 v47; // al
  int v48; // edi
  int mm; // ebp
  int v50; // edi
  unsigned __int8 v51; // al
  bool v52; // cl
  int nn; // ebp
  int v54; // edi
  unsigned __int8 v55; // al
  int v56; // edi
  unsigned int result; // eax
  unsigned int v58; // [esp+Ch] [ebp-8h]
  unsigned int v59; // [esp+10h] [ebp-4h]

  v3 = 0;
  if ( a3 > 0x20 )
  {
    if ( a3 > 0x40 )
    {
      if ( a3 > 0x80 )
      {
        if ( a3 <= 0x100 )
          v3 = 8;
      }
      else
      {
        v3 = 7;
      }
    }
    else
    {
      v3 = 6;
    }
  }
  else
  {
    v3 = 5;
  }
  v4 = 32;
  v5 = 0;
  do
  {
    --v4;
    v6 = 2 * v5;
    if ( !*(_BYTE *)(a1 + 24) )
    {
      *(_BYTE *)(a1 + 25) = sub_10014D60(a1);
      *(_BYTE *)(a1 + 24) = 0x80;
    }
    v7 = *(_BYTE *)(a1 + 24);
    v8 = (v7 & *(_BYTE *)(a1 + 25)) != 0;
    *(_BYTE *)(a1 + 24) = v7 >> 1;
    v5 = v8 | v6;
  }
  while ( v4 );
  v59 = v5;
  if ( a2[1] )
    a2[1] = 0;
  v58 = 0;
  if ( !v5 )
    return 0;
  do
  {
    v9 = 5;
    v10 = 0;
    do
    {
      --v9;
      v11 = 2 * v10;
      if ( !*(_BYTE *)(a1 + 24) )
      {
        *(_BYTE *)(a1 + 25) = sub_10014D60(a1);
        *(_BYTE *)(a1 + 24) = 0x80;
      }
      v12 = *(_BYTE *)(a1 + 24);
      v10 = ((v12 & *(_BYTE *)(a1 + 25)) != 0) | v11;
      *(_BYTE *)(a1 + 24) = v12 >> 1;
    }
    while ( v9 );
    ++dword_1005B138[v10];
    switch ( v10 )
    {
      case 0:
        --dword_10056388;
        break;
      case 1:
        ++dword_10056388;
        break;
      case 2:
        goto LABEL_24;
      case 3:
        goto LABEL_26;
      case 4:
        goto LABEL_35;
      case 5:
        goto LABEL_38;
      case 6:
        --dword_10056388;
LABEL_24:
        --dword_1005638C;
        break;
      case 7:
        ++dword_10056388;
LABEL_26:
        ++dword_1005638C;
        break;
      case 8:
        --dword_10056388;
        ++dword_1005638C;
        break;
      case 9:
        ++dword_10056388;
        --dword_1005638C;
        break;
      case 10:
        goto LABEL_34;
      case 11:
        goto LABEL_37;
      case 12:
        goto LABEL_40;
      case 13:
        goto LABEL_42;
      case 14:
        --dword_10056388;
        --dword_10056390;
        break;
      case 15:
        ++dword_10056388;
        ++dword_10056390;
        break;
      case 16:
        --dword_10056388;
        ++dword_10056390;
        break;
      case 17:
        ++dword_10056388;
        --dword_10056390;
        break;
      case 18:
        --dword_10056388;
LABEL_34:
        --dword_1005638C;
LABEL_35:
        --dword_10056390;
        break;
      case 19:
        ++dword_10056388;
LABEL_37:
        ++dword_1005638C;
LABEL_38:
        ++dword_10056390;
        break;
      case 20:
        --dword_10056388;
LABEL_40:
        --dword_1005638C;
        ++dword_10056390;
        break;
      case 21:
        ++dword_10056388;
LABEL_42:
        ++dword_1005638C;
        --dword_10056390;
        break;
      case 22:
        ++dword_10056388;
        --dword_1005638C;
        --dword_10056390;
        break;
      case 23:
        --dword_10056388;
        ++dword_1005638C;
        ++dword_10056390;
        break;
      case 24:
        ++dword_10056388;
        --dword_1005638C;
        ++dword_10056390;
        break;
      case 25:
        --dword_10056388;
        ++dword_1005638C;
        --dword_10056390;
        break;
      case 26:
        v13 = 0;
        for ( i = v3; i; v13 = v17 | v15 )
        {
          --i;
          v15 = 2 * v13;
          if ( !*(_BYTE *)(a1 + 24) )
          {
            *(_BYTE *)(a1 + 25) = sub_10014D60(a1);
            *(_BYTE *)(a1 + 24) = 0x80;
          }
          v16 = *(_BYTE *)(a1 + 24);
          v17 = (v16 & *(_BYTE *)(a1 + 25)) != 0;
          *(_BYTE *)(a1 + 24) = v16 >> 1;
        }
        dword_10056388 = v13;
        break;
      case 27:
        v18 = 0;
        for ( j = v3; j; *(_BYTE *)(a1 + 24) = v21 >> 1 )
        {
          --j;
          v20 = 2 * v18;
          if ( !*(_BYTE *)(a1 + 24) )
          {
            *(_BYTE *)(a1 + 25) = sub_10014D60(a1);
            *(_BYTE *)(a1 + 24) = 0x80;
          }
          v21 = *(_BYTE *)(a1 + 24);
          v18 = ((v21 & *(_BYTE *)(a1 + 25)) != 0) | v20;
        }
        dword_1005638C = v18;
        break;
      case 28:
        v22 = 0;
        for ( k = v3; k; v22 = v26 | v24 )
        {
          --k;
          v24 = 2 * v22;
          if ( !*(_BYTE *)(a1 + 24) )
          {
            *(_BYTE *)(a1 + 25) = sub_10014D60(a1);
            *(_BYTE *)(a1 + 24) = 0x80;
          }
          v25 = *(_BYTE *)(a1 + 24);
          v26 = (v25 & *(_BYTE *)(a1 + 25)) != 0;
          *(_BYTE *)(a1 + 24) = v25 >> 1;
        }
        goto LABEL_92;
      case 29:
        v27 = 0;
        for ( m = v3; m; *(_BYTE *)(a1 + 24) = v30 >> 1 )
        {
          --m;
          v29 = 2 * v27;
          if ( !*(_BYTE *)(a1 + 24) )
          {
            *(_BYTE *)(a1 + 25) = sub_10014D60(a1);
            *(_BYTE *)(a1 + 24) = 0x80;
          }
          v30 = *(_BYTE *)(a1 + 24);
          v27 = ((v30 & *(_BYTE *)(a1 + 25)) != 0) | v29;
        }
        dword_10056388 = v27;
        v31 = 0;
        for ( n = v3; n; v31 = v35 | v33 )
        {
          --n;
          v33 = 2 * v31;
          if ( !*(_BYTE *)(a1 + 24) )
          {
            *(_BYTE *)(a1 + 25) = sub_10014D60(a1);
            *(_BYTE *)(a1 + 24) = 0x80;
          }
          v34 = *(_BYTE *)(a1 + 24);
          v35 = (v34 & *(_BYTE *)(a1 + 25)) != 0;
          *(_BYTE *)(a1 + 24) = v34 >> 1;
        }
        dword_1005638C = v31;
        break;
      case 30:
        v36 = 0;
        for ( ii = v3; ii; *(_BYTE *)(a1 + 24) = v39 >> 1 )
        {
          --ii;
          v38 = 2 * v36;
          if ( !*(_BYTE *)(a1 + 24) )
          {
            *(_BYTE *)(a1 + 25) = sub_10014D60(a1);
            *(_BYTE *)(a1 + 24) = 0x80;
          }
          v39 = *(_BYTE *)(a1 + 24);
          v36 = ((v39 & *(_BYTE *)(a1 + 25)) != 0) | v38;
        }
        dword_10056388 = v36;
        v22 = 0;
        for ( jj = v3; jj; v22 = v43 | v41 )
        {
          --jj;
          v41 = 2 * v22;
          if ( !*(_BYTE *)(a1 + 24) )
          {
            *(_BYTE *)(a1 + 25) = sub_10014D60(a1);
            *(_BYTE *)(a1 + 24) = 0x80;
          }
          v42 = *(_BYTE *)(a1 + 24);
          v43 = (v42 & *(_BYTE *)(a1 + 25)) != 0;
          *(_BYTE *)(a1 + 24) = v42 >> 1;
        }
        goto LABEL_92;
      case 31:
        v44 = 0;
        for ( kk = v3; kk; *(_BYTE *)(a1 + 24) = v47 >> 1 )
        {
          --kk;
          v46 = 2 * v44;
          if ( !*(_BYTE *)(a1 + 24) )
          {
            *(_BYTE *)(a1 + 25) = sub_10014D60(a1);
            *(_BYTE *)(a1 + 24) = 0x80;
          }
          v47 = *(_BYTE *)(a1 + 24);
          v44 = ((v47 & *(_BYTE *)(a1 + 25)) != 0) | v46;
        }
        dword_10056388 = v44;
        v48 = 0;
        for ( mm = v3; mm; v48 = v52 | v50 )
        {
          --mm;
          v50 = 2 * v48;
          if ( !*(_BYTE *)(a1 + 24) )
          {
            *(_BYTE *)(a1 + 25) = sub_10014D60(a1);
            *(_BYTE *)(a1 + 24) = 0x80;
          }
          v51 = *(_BYTE *)(a1 + 24);
          v52 = (v51 & *(_BYTE *)(a1 + 25)) != 0;
          *(_BYTE *)(a1 + 24) = v51 >> 1;
        }
        dword_1005638C = v48;
        v22 = 0;
        for ( nn = v3; nn; *(_BYTE *)(a1 + 24) = v55 >> 1 )
        {
          --nn;
          v54 = 2 * v22;
          if ( !*(_BYTE *)(a1 + 24) )
          {
            *(_BYTE *)(a1 + 25) = sub_10014D60(a1);
            *(_BYTE *)(a1 + 24) = 0x80;
          }
          v55 = *(_BYTE *)(a1 + 24);
          v22 = ((v55 & *(_BYTE *)(a1 + 25)) != 0) | v54;
        }
LABEL_92:
        dword_10056390 = v22;
        break;
      default:
        break;
    }
    v56 = dword_10056388 + a3 * (dword_1005638C + a3 * dword_10056390);
    if ( a2[1] == *a2 )
      sub_100149B0(1);
    *(_DWORD *)(a2[2] + 4 * a2[1]++) = v56;
    result = v59;
    ++v58;
  }
  while ( v58 < v59 );
  return result;
}
