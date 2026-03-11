/*
 * func-name: sub_100075D0
 * func-address: 0x100075d0
 * callers: 0x1000bf10
 * callees: 0x100058e0
 */

int __thiscall sub_100075D0(_DWORD *this)
{
  unsigned int v1; // edx
  int v2; // esi
  int v3; // edi
  int *v4; // ecx
  unsigned int v5; // ebx
  int v6; // ebp
  _DWORD *v7; // edx
  int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // eax
  int v11; // esi
  int v12; // eax
  char *v13; // ecx
  int v14; // edi
  char *v15; // eax
  _DWORD *v16; // edx
  _DWORD *v17; // ebp
  _DWORD *v18; // eax
  int v19; // esi
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  int *v23; // esi
  _DWORD *v24; // edx
  int v25; // ebx
  unsigned int v26; // eax
  unsigned int v27; // ebp
  _DWORD *v28; // edi
  unsigned int v29; // ecx
  unsigned int v30; // eax
  int v31; // eax
  _DWORD *v32; // ecx
  _DWORD *v33; // ebx
  _DWORD *v34; // eax
  _DWORD *v35; // edx
  int v36; // ecx
  _DWORD *v37; // ecx
  int v38; // ebx
  _DWORD *v39; // eax
  unsigned int v40; // eax
  int v41; // edi
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  int result; // eax
  int v48; // [esp+28h] [ebp-20h]
  unsigned int v49; // [esp+28h] [ebp-20h]
  unsigned int v50; // [esp+2Ch] [ebp-1Ch]
  int v51; // [esp+30h] [ebp-18h]
  int *v52; // [esp+34h] [ebp-14h] BYREF
  int *v53; // [esp+38h] [ebp-10h]
  int v54; // [esp+3Ch] [ebp-Ch]

  v1 = (int)((unsigned __int64)(715827883LL * (*(_DWORD *)(this[179] + 4) - *(_DWORD *)this[179])) >> 32) >> 1;
  v2 = (*(_DWORD *)(this[179] + 4) - *(_DWORD *)this[179]) / 12;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v50 = v1 + (v1 >> 31);
  v52 = 0;
  v53 = 0;
  v54 = 0;
  if ( v2 > 0 )
  {
    while ( 1 )
    {
      v7 = this;
      v8 = this[178];
      v48 = -1;
      if ( v8 > 0 )
      {
        v48 = *(_DWORD *)(this[17] + 4 * v6);
        if ( v48 != -1 )
          goto LABEL_12;
        v7 = this;
      }
      if ( v8 > 1 )
      {
        v48 = *(_DWORD *)(v7[22] + 4 * v6);
        if ( v48 != -1 )
          goto LABEL_12;
        v7 = this;
      }
      if ( v8 > 2 )
        v48 = *(_DWORD *)(v7[27] + 4 * v6);
LABEL_12:
      if ( v5 <= (unsigned int)v4 )
      {
        v9 = 2 * (((int)v4 - v3) / 12) + 2;
        if ( v3 )
          v10 = (int)(v5 - v3) / 12;
        else
          v10 = 0;
        if ( v10 < v9 )
        {
          v11 = 12 * v9;
          v12 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, v11, 289);
          v13 = (char *)v53;
          v14 = v12;
          v15 = (char *)v52;
          v16 = (_DWORD *)v14;
          if ( v52 != v53 )
          {
            do
            {
              *v16 = *(_DWORD *)v15;
              v16[1] = *((_DWORD *)v15 + 1);
              v16[2] = *((_DWORD *)v15 + 2);
              v15 += 12;
              v16 += 3;
            }
            while ( v15 != v13 );
            v13 = (char *)v53;
            v15 = (char *)v52;
          }
          if ( v15 )
          {
            (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v15);
            v13 = (char *)v53;
            v15 = (char *)v52;
          }
          v4 = (int *)(v14 + 12 * ((v13 - v15) / 12));
          v54 = v14 + v11;
          v53 = v4;
          v52 = (int *)v14;
        }
        v2 = v50;
      }
      *v4 = v48;
      v53[1] = -1;
      v53[2] = v6;
      v3 = (int)v52;
      v4 = v53 + 3;
      ++v6;
      v53 += 3;
      if ( v6 >= v2 )
        break;
      v5 = v54;
    }
  }
  v17 = this;
  v18 = (_DWORD *)this[183];
  v19 = 0;
  if ( v18[1] - *v18 >= 0 && ((v18[1] - *v18) & 0xFFFFFFFC) != 0 )
  {
    do
    {
      v20 = *(_DWORD *)(*v18 + 4 * v19);
      v21 = *(_DWORD *)(v20 + 8) - *(_DWORD *)(v20 + 4);
      v22 = 0;
      if ( v21 >= 0 && (v21 & 0xFFFFFFFC) != 0 )
      {
        do
        {
          if ( *(_DWORD *)(v3 + 12 * *(_DWORD *)(*(_DWORD *)(v20 + 4) + 4 * v22)) == v19 )
          {
            *(_DWORD *)(v3 + 12 * *(_DWORD *)(*(_DWORD *)(v20 + 4) + 4 * v22) + 4) = v22;
            v3 = (int)v52;
          }
          ++v22;
        }
        while ( v22 < (*(_DWORD *)(v20 + 8) - *(_DWORD *)(v20 + 4)) >> 2 );
      }
      v18 = (_DWORD *)this[183];
      ++v19;
    }
    while ( v19 < (v18[1] - *v18) >> 2 );
    v4 = v53;
  }
  sub_100058E0((int *)&v52, 0, ((int)v4 - v3) / 12 - 1);
  v23 = (int *)this[181];
  v24 = (_DWORD *)*v23;
  v25 = v50;
  v26 = (v23[1] - *v23) >> 2;
  if ( v50 <= v26 )
  {
    if ( v50 < v26 )
      v23[1] -= 4 * ((v23[1] - (int)&v24[v50]) >> 2);
  }
  else
  {
    v27 = v50 - v26;
    v49 = v50 - v26;
    v28 = (_DWORD *)v23[1];
    if ( v50 != v26 )
    {
      if ( v24 )
        v29 = (v23[2] - (int)v24) >> 2;
      else
        v29 = 0;
      if ( v29 < v50 )
      {
        v51 = v28 - v24;
        if ( v24 )
          v30 = (v23[2] - (int)v24) >> 2;
        else
          v30 = 0;
        if ( v30 < 2 * v50 )
        {
          v31 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                  dword_100580A0,
                  8 * v50,
                  289);
          v32 = (_DWORD *)v23[1];
          v33 = (_DWORD *)v31;
          v34 = (_DWORD *)*v23;
          v35 = v33;
          if ( (_DWORD *)*v23 != v32 )
          {
            do
              *v35++ = *v34++;
            while ( v34 != v32 );
            v27 = v49;
          }
          if ( *v23 )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *v23);
          v36 = (v23[1] - *v23) >> 2;
          v23[2] = (int)&v33[2 * v50];
          v23[1] = (int)&v33[v36];
          *v23 = (int)v33;
        }
        v28 = (_DWORD *)(*v23 + 4 * v51);
      }
      v37 = (_DWORD *)v23[1];
      v38 = 4 * v27;
      v39 = v28;
      if ( v28 != v37 )
      {
        do
        {
          v39[v27] = *v39;
          ++v39;
        }
        while ( v39 != v37 );
        v27 = v49;
      }
      if ( v27 )
        memset(v28, 0, 4 * v27);
      v23[1] += v38;
      v25 = v50;
    }
    v17 = this;
  }
  if ( *v23 == v23[1] )
  {
    if ( *v23 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *v23);
    *v23 = 0;
    v23[1] = 0;
    v23[2] = 0;
  }
  v40 = v23[1];
  if ( v23[2] > v40 )
  {
    v41 = (int)(v40 - *v23) >> 2;
    v42 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 16))(
            dword_100580A0,
            *v23,
            4 * ((v23[1] - *v23) >> 2));
    v17 = this;
    *v23 = v42;
    v43 = v42 + 4 * v41;
    v23[1] = v43;
    v23[2] = v43;
  }
  v44 = 0;
  if ( v25 > 0 )
  {
    v45 = 0;
    do
    {
      *(_DWORD *)(*(_DWORD *)v17[181] + 4 * v52[v45 + 2]) = v44++;
      v45 += 3;
    }
    while ( v44 < v25 );
  }
  result = (int)v52;
  if ( v52 )
    return (*(int (__thiscall **)(int, int *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v52);
  return result;
}
