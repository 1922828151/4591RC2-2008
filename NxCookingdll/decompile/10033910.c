/*
 * func-name: sub_10033910
 * func-address: 0x10033910
 * callers: 0x10033d20
 * callees: 0x10015160, 0x10015220, 0x100316f0, 0x100337a0, 0x10035300
 */

void __thiscall sub_10033910(int *this, _DWORD *Src, unsigned int a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  int v7; // edi
  __int16 v8; // ax
  char *v9; // edi
  float *v10; // eax
  int v11; // ecx
  unsigned int v12; // esi
  float *v13; // edi
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double v17; // st7
  double v18; // st6
  double v19; // st5
  __int16 *v20; // ebp
  __int16 *v21; // edi
  int *v22; // esi
  unsigned int v23; // ebx
  int v24; // edi
  _WORD *v26; // [esp+28h] [ebp-4Ch]
  __int16 *v27; // [esp+2Ch] [ebp-48h]
  int v28; // [esp+30h] [ebp-44h]
  unsigned int v29; // [esp+34h] [ebp-40h]
  unsigned int v30; // [esp+34h] [ebp-40h]
  float *v31; // [esp+38h] [ebp-3Ch]
  void *v32; // [esp+3Ch] [ebp-38h]
  int v33; // [esp+40h] [ebp-34h]
  float v34; // [esp+44h] [ebp-30h]
  float v35; // [esp+48h] [ebp-2Ch]
  float v36; // [esp+4Ch] [ebp-28h]
  float v37; // [esp+50h] [ebp-24h]
  float v38; // [esp+54h] [ebp-20h]
  float v39; // [esp+58h] [ebp-1Ch]
  float v40; // [esp+5Ch] [ebp-18h] BYREF
  float v41; // [esp+60h] [ebp-14h]
  float v42; // [esp+64h] [ebp-10h]
  float v43; // [esp+68h] [ebp-Ch]
  float v44; // [esp+6Ch] [ebp-8h]
  float v45; // [esp+70h] [ebp-4h]
  __int16 *Srca; // [esp+78h] [ebp+4h]

  v3 = a3;
  v4 = 0;
  if ( a3 )
  {
    if ( a3 > 0x80 )
      v5 = ((a3 + 15) >> 7) + 1;
    else
      v5 = 1;
    v29 = v5;
    v28 = 0;
    do
    {
      v7 = Src[v4];
      v28 += *(unsigned __int16 *)(v7 + 24);
      if ( v4 )
        v8 = *(_WORD *)(Src[v4 - 1] + 32) + (*(_WORD *)(Src[v4 - 1] + 24) >> 5);
      else
        v8 = 59 * v5;
      ++v4;
      *(_WORD *)(v7 + 32) = v8;
    }
    while ( v4 < a3 );
    v32 = (void *)(*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                    dword_100580A0,
                    4 * a3,
                    1);
    memcpy_0(v32, Src, 4 * a3);
    v33 = 1888 * v5;
    v9 = (char *)(*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                   dword_100580A0,
                   1888 * v5,
                   1);
    Srca = (__int16 *)v9;
    v10 = (float *)(*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                     dword_100580A0,
                     24 * v5,
                     1);
    LOBYTE(v11) = v5 > 1;
    v31 = v10;
    sub_100337A0((int)v9, v5, v10, v11, (int)Src, a3);
    if ( v5 > 1 )
    {
      v12 = 0;
      v41 = 3.4028235e38;
      v44 = -3.4028235e38;
      v40 = 3.4028235e38;
      v42 = 3.4028235e38;
      v43 = -3.4028235e38;
      v45 = -3.4028235e38;
      v26 = v9 + 288;
      v27 = (__int16 *)(v9 + 96);
      v13 = v31 + 10;
      do
      {
        *v26 = 59 * (v12 + 1);
        sub_100316F0(v27, v13 - 4);
        v14 = v13[1];
        if ( v45 > v14 )
          v14 = v45;
        v15 = *v13;
        if ( v44 > v15 )
          v15 = v44;
        v16 = *(v13 - 1);
        if ( v43 > v16 )
          v16 = v43;
        v34 = v16;
        v35 = v15;
        v36 = v14;
        v17 = *(v13 - 2);
        if ( v42 < v17 )
          v17 = v42;
        v18 = *(v13 - 3);
        if ( v41 < v18 )
          v18 = v41;
        v19 = *(v13 - 4);
        if ( v40 < v19 )
          v19 = v40;
        v37 = v19;
        v38 = v18;
        ++v26;
        v39 = v17;
        v27 += 6;
        v40 = v37;
        v43 = v34;
        v5 = v29;
        v44 = v35;
        ++v12;
        v13 += 6;
        v41 = v38;
        v42 = v39;
        v45 = v36;
      }
      while ( v12 < v29 - 1 );
      v3 = a3;
      v9 = (char *)Srca;
      sub_100316F0(Srca, &v40);
      if ( v12 < 0x10 )
      {
        v20 = &Srca[6 * v12 + 48];
        v21 = &Srca[v12 + 144];
        v30 = 16 - v12;
        do
        {
          v41 = 3.4028235e38;
          v42 = 3.4028235e38;
          v40 = 3.4028235e38;
          v44 = -3.4028235e38;
          *v21 = 0;
          v43 = -3.4028235e38;
          v45 = -3.4028235e38;
          sub_100316F0(v20, &v40);
          ++v21;
          v20 += 6;
          --v30;
        }
        while ( v30 );
        v3 = a3;
        v9 = (char *)Srca;
      }
    }
    v22 = this + 2;
    sub_10015160(this + 2, 1346455365);
    sub_10015160(this + 2, v3);
    sub_10015160(this + 2, v28);
    sub_10015160(this + 2, v5);
    sub_10015220(this + 2, v9, v33);
    v23 = 0;
    if ( v3 )
    {
      do
      {
        v24 = *((_DWORD *)v32 + v23);
        sub_10015160(v22, *(unsigned __int16 *)(v24 + 24));
        sub_10015220(v22, (char *)v24, 24);
        sub_10015220(v22, *(char **)(v24 + 36), *(unsigned __int16 *)(v24 + 24));
        ++v23;
      }
      while ( v23 < v3 );
      v9 = (char *)Srca;
    }
    if ( v9 )
      (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v9);
    if ( v31 )
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v31);
    if ( v32 )
      (*(void (__thiscall **)(int, void *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v32);
    ++*this;
  }
}
