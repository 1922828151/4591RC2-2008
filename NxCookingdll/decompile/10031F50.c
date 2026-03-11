/*
 * func-name: sub_10031F50
 * func-address: 0x10031f50
 * callers: 0x10032790
 * callees: 0x10031db0
 */

float **__cdecl sub_10031F50(float **a1, float *a2, unsigned int a3)
{
  float *v3; // edi
  float *i; // esi
  float *v5; // ebx
  float *v6; // ecx
  float v7; // edx
  int v8; // ebx
  int v9; // edx
  int v10; // ebx
  int v11; // edx
  int v12; // ebx
  int v13; // edx
  int v14; // ebx
  int v15; // edx
  int v16; // ebx
  float *v17; // ebp
  bool v18; // zf
  float *v19; // edx
  int v20; // eax
  int v21; // ebx
  float v22; // eax
  int v23; // edx
  float *v24; // eax
  float v25; // eax
  int v26; // edx
  int v27; // ebp
  float v28; // eax
  int v29; // edx
  float v30; // eax
  int v31; // edx
  float **result; // eax
  float *v33; // [esp+10h] [ebp-Ch]
  float v34; // [esp+14h] [ebp-8h]
  int v35; // [esp+18h] [ebp-4h]

  v3 = &a2[2 * (((int)(a3 - (_DWORD)a2) >> 3) / 2)];
  sub_10031DB0(a2, v3, (float *)(a3 - 8));
  for ( i = v3 + 2; a2 < v3; v3 -= 2 )
  {
    if ( v3[1] > (double)*(v3 - 1) )
      break;
    if ( *(v3 - 1) > (double)v3[1] )
      break;
  }
  if ( (int)(a3 - (_DWORD)i + 7) / 8 < 4 )
  {
LABEL_15:
    while ( (unsigned int)i < a3 )
    {
      if ( v3[1] > (double)i[1] )
        break;
      if ( i[1] > (double)v3[1] )
        break;
      i += 2;
    }
  }
  else
  {
    while ( v3[1] <= (double)i[1] && i[1] <= (double)v3[1] )
    {
      if ( v3[1] > (double)i[3] || i[3] > (double)v3[1] )
      {
        i += 2;
        break;
      }
      if ( v3[1] > (double)i[5] || i[5] > (double)v3[1] )
      {
        i += 4;
        break;
      }
      if ( v3[1] > (double)i[7] || i[7] > (double)v3[1] )
      {
        i += 6;
        break;
      }
      i += 8;
      if ( (int)i >= (int)(a3 - 24) )
        goto LABEL_15;
    }
  }
  v5 = v3;
  v6 = i;
  v33 = v3;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (int)(a3 - (_DWORD)v6 + 7) / 8 >= 4 )
      {
        do
        {
          if ( v6[1] <= (double)v3[1] )
          {
            if ( v3[1] > (double)v6[1] )
              goto LABEL_47;
            v7 = *i;
            v8 = *((_DWORD *)i + 1);
            *i = *v6;
            i[1] = v6[1];
            *((_DWORD *)v6 + 1) = v8;
            v5 = v33;
            i += 2;
            *v6 = v7;
          }
          if ( v6[3] <= (double)v3[1] )
          {
            if ( v3[1] > (double)v6[3] )
            {
              v6 += 2;
              goto LABEL_47;
            }
            v9 = *(_DWORD *)i;
            v10 = *((_DWORD *)i + 1);
            *i = v6[2];
            i[1] = v6[3];
            *((_DWORD *)v6 + 3) = v10;
            v5 = v33;
            i += 2;
            *((_DWORD *)v6 + 2) = v9;
          }
          if ( v6[5] <= (double)v3[1] )
          {
            if ( v3[1] > (double)v6[5] )
            {
              v6 += 4;
              goto LABEL_47;
            }
            v11 = *(_DWORD *)i;
            v12 = *((_DWORD *)i + 1);
            *i = v6[4];
            i[1] = v6[5];
            *((_DWORD *)v6 + 5) = v12;
            v5 = v33;
            i += 2;
            *((_DWORD *)v6 + 4) = v11;
          }
          if ( v6[7] <= (double)v3[1] )
          {
            if ( v3[1] > (double)v6[7] )
            {
              v6 += 6;
              goto LABEL_47;
            }
            v13 = *(_DWORD *)i;
            v14 = *((_DWORD *)i + 1);
            *i = v6[6];
            i[1] = v6[7];
            *((_DWORD *)v6 + 7) = v14;
            v5 = v33;
            i += 2;
            *((_DWORD *)v6 + 6) = v13;
          }
          v6 += 8;
        }
        while ( (int)v6 < (int)(a3 - 24) );
      }
      for ( ; (unsigned int)v6 < a3; v6 += 2 )
      {
        if ( v6[1] <= (double)v3[1] )
        {
          if ( v3[1] > (double)v6[1] )
            break;
          v15 = *(_DWORD *)i;
          v16 = *((_DWORD *)i + 1);
          *i = *v6;
          i[1] = v6[1];
          *((_DWORD *)v6 + 1) = v16;
          v5 = v33;
          i += 2;
          *(_DWORD *)v6 = v15;
        }
      }
LABEL_47:
      v17 = a2;
      v18 = v5 == a2;
      if ( v5 > a2 )
      {
        v19 = v5 - 2;
        do
        {
          if ( v3[1] <= (double)v19[1] )
          {
            if ( v19[1] > (double)v3[1] )
              break;
            v20 = *((_DWORD *)v3 - 2);
            v21 = *((_DWORD *)v3 - 1);
            v3 -= 2;
            *v3 = *v19;
            v3[1] = v19[1];
            *((_DWORD *)v19 + 1) = v21;
            v5 = v33;
            *(_DWORD *)v19 = v20;
          }
          v17 = a2;
          v5 -= 2;
          v19 -= 2;
          v33 = v5;
        }
        while ( a2 < v5 );
        v18 = v5 == v17;
      }
      if ( v18 )
        break;
      v5 -= 2;
      v33 = v5;
      if ( v6 == (float *)a3 )
      {
        v3 -= 2;
        if ( v5 != v3 )
        {
          v25 = *v5;
          v26 = *((_DWORD *)v5 + 1);
          *v5 = *v3;
          v5[1] = v3[1];
          *v3 = v25;
          *((_DWORD *)v3 + 1) = v26;
        }
        v27 = *((_DWORD *)i - 2);
        v28 = *v3;
        v29 = *((_DWORD *)v3 + 1);
        i -= 2;
        *(_DWORD *)v3 = v27;
        v3[1] = i[1];
        *i = v28;
        *((_DWORD *)i + 1) = v29;
      }
      else
      {
        v30 = *v6;
        v31 = *((_DWORD *)v6 + 1);
        *v6 = *v5;
        v6[1] = v5[1];
        *v5 = v30;
        *((_DWORD *)v5 + 1) = v31;
        v6 += 2;
      }
    }
    if ( v6 == (float *)a3 )
      break;
    if ( i != v6 )
    {
      v22 = *v3;
      v23 = *((_DWORD *)v3 + 1);
      *v3 = *i;
      v3[1] = i[1];
      *i = v22;
      *((_DWORD *)i + 1) = v23;
    }
    v34 = *v3;
    v24 = v6;
    v35 = *((_DWORD *)v3 + 1);
    *v3 = *v6;
    v3[1] = v6[1];
    *v6 = v34;
    i += 2;
    v3 += 2;
    v6 += 2;
    *((_DWORD *)v24 + 1) = v35;
  }
  result = a1;
  *a1 = v3;
  a1[1] = i;
  return result;
}
