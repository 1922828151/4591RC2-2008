/*
 * func-name: sub_10135650
 * func-address: 0x10135650
 * callers: 0x100769d0
 * callees: 0x10135c90, 0x10136090, 0x101a2534
 */

unsigned int __thiscall sub_10135650(_DWORD *this, unsigned int a2, unsigned int a3, int a4, int a5, int a6)
{
  unsigned int result; // eax
  unsigned int v9; // ecx
  float *v10; // eax
  float v11; // edx
  unsigned int v12; // ecx
  float **v13; // ecx
  void *v14; // esi
  unsigned int v15; // edx
  unsigned int v16; // ebp
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // edi
  int v20; // ecx
  int v21; // edi
  int v22; // eax
  unsigned int v23; // edi
  unsigned int i; // ebp
  int v25; // eax
  unsigned int v26; // esi
  int v27; // ebp
  int v28; // eax
  unsigned int v29; // ebp
  unsigned int j; // esi
  int v31; // eax
  unsigned int v32; // edi
  unsigned int v33; // [esp+14h] [ebp-28h]
  int v34; // [esp+18h] [ebp-24h] BYREF
  int v35; // [esp+1Ch] [ebp-20h] BYREF
  float v36; // [esp+24h] [ebp-18h]
  float v37; // [esp+28h] [ebp-14h]
  float v38; // [esp+2Ch] [ebp-10h]
  int v39; // [esp+38h] [ebp-4h]
  unsigned int v41; // [esp+48h] [ebp+Ch]
  unsigned int v42; // [esp+4Ch] [ebp+10h]
  unsigned int v43; // [esp+4Ch] [ebp+10h]

  result = a3;
  if ( a3 )
  {
    v33 = a3;
    do
    {
      v9 = a2;
      if ( a2 )
      {
        v42 = a2;
        do
        {
          v10 = (float *)operator new(0x2Cu);
          if ( v10 )
          {
            v10[2] = 0.0;
            v10[6] = 0.0;
            v10[3] = 0.0;
            v10[7] = 0.0;
            v10[4] = 0.0;
            v10[8] = 0.0;
            v36 = 0.0;
            *((_DWORD *)v10 + 1) = a5;
            v37 = 0.0;
            v38 = 0.0;
            v10[2] = v36;
            v11 = v38;
            v10[3] = 0.0;
            *(_DWORD *)v10 = a4;
            v10[4] = v11;
            *((_BYTE *)v10 + 40) = 0;
            v10[9] = 0.0;
          }
          else
          {
            v10 = 0;
          }
          v12 = this[4];
          v39 = -1;
          v34 = (int)v10;
          if ( v12 && (int)(this[5] - v12) >> 2 < (unsigned int)((int)(this[6] - v12) >> 2) )
          {
            v13 = (float **)this[5];
            *v13 = v10;
            this[5] = v13 + 1;
          }
          else
          {
            v14 = (void *)this[5];
            if ( v12 > (unsigned int)v14 )
              invalid_parameter_noinfo();
            sub_10135C90((int)&v35, (int)(this + 3), v14, (int)&v34);
          }
          a5 += a6;
          a4 += a6;
          --v42;
        }
        while ( v42 );
        v9 = a2;
      }
      --v33;
    }
    while ( v33 );
    result = a3;
  }
  else
  {
    v9 = a2;
  }
  v15 = 0;
  v41 = 0;
  if ( !result )
    return result;
  do
  {
    v16 = 0;
    v43 = 0;
    if ( !v9 )
      goto LABEL_74;
    v17 = v9 * v15;
    v34 = v9 * v15;
    while ( 1 )
    {
      v18 = this[4];
      v19 = v17 + v16;
      if ( !v18 || v19 >= (this[5] - v18) >> 2 )
      {
        invalid_parameter_noinfo();
        v15 = v41;
      }
      v20 = *(_DWORD *)(this[4] + 4 * v19);
      if ( !v16 )
      {
        if ( !v15 )
        {
          v21 = 3;
LABEL_43:
          v22 = 0;
          goto LABEL_44;
        }
        v22 = 6;
        if ( v15 == a3 - 1 )
        {
          v21 = 3;
          goto LABEL_44;
        }
        goto LABEL_41;
      }
      if ( v16 != a2 - 1 )
      {
        if ( !v15 )
        {
          v21 = 5;
          goto LABEL_43;
        }
        if ( v15 != a3 - 1 )
        {
          v21 = 8;
          goto LABEL_43;
        }
        v22 = 4;
LABEL_41:
        v21 = 5;
        goto LABEL_44;
      }
      if ( v15 )
      {
        if ( v15 == a3 - 1 )
        {
          v22 = 4;
          v21 = 3;
        }
        else
        {
          v22 = 2;
          v21 = 5;
        }
      }
      else
      {
        v22 = 2;
        v21 = 3;
      }
LABEL_44:
      *(_DWORD *)(v20 + 36) = v21;
      v23 = v22 + v21;
      for ( i = v22; i < v23; ++i )
      {
        v25 = this[4];
        v26 = v43 + dword_10282B70[i & 7] + a2 * (v41 + dword_10282B90[i & 7]);
        if ( !v25 || v26 >= (this[5] - v25) >> 2 )
          invalid_parameter_noinfo();
        sub_10136090(*(_DWORD *)(this[4] + 4 * v26));
      }
      if ( v43 < 2 )
      {
        if ( v41 < 2 )
        {
          v27 = 3;
LABEL_66:
          v28 = 0;
          goto LABEL_67;
        }
        v28 = 6;
        if ( v41 > a3 - 3 )
        {
          v27 = 3;
          goto LABEL_67;
        }
        goto LABEL_64;
      }
      if ( v43 <= a2 - 3 )
      {
        if ( v41 < 2 )
        {
          v27 = 5;
          goto LABEL_66;
        }
        if ( v41 <= a3 - 3 )
        {
          v27 = 8;
          goto LABEL_66;
        }
        v28 = 4;
LABEL_64:
        v27 = 5;
        goto LABEL_67;
      }
      if ( v41 >= 2 )
      {
        if ( v41 <= a3 - 3 )
        {
          v28 = 2;
          v27 = 5;
        }
        else
        {
          v28 = 4;
          v27 = 3;
        }
      }
      else
      {
        v28 = 2;
        v27 = 3;
      }
LABEL_67:
      v29 = v28 + v27;
      for ( j = v28; j < v29; ++j )
      {
        v31 = this[4];
        v32 = v43 + a2 * (v41 + 2 * dword_10282B90[j & 7]) + 2 * dword_10282B70[j & 7];
        if ( !v31 || v32 >= (this[5] - v31) >> 2 )
          invalid_parameter_noinfo();
        sub_10136090(*(_DWORD *)(this[4] + 4 * v32));
      }
      v15 = v41;
      result = ++v43;
      if ( v43 >= a2 )
        break;
      v17 = v34;
      v16 = v43;
    }
    v9 = a2;
LABEL_74:
    v41 = ++v15;
  }
  while ( v15 < a3 );
  return result;
}
