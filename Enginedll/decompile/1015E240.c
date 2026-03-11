/*
 * func-name: ?DrawEditLine@Terrain@@QAEXAAVVector@@@Z
 * func-address: 0x1015e240
 * callers: 0x10169d00
 * callees: 0x10064610, 0x1007eed0, 0x1015dbd0, 0x101a26c0
 */

void __thiscall Terrain::DrawEditLine(Terrain *this, struct Vector *a2)
{
  struct Canvas *v3; // eax
  struct Canvas *v4; // eax
  int v6; // ecx
  float *v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // ebp
  float *v11; // edi
  float *v12; // ebx
  struct Canvas *v13; // eax
  int v14; // eax
  int v15; // ebx
  int v16; // ebp
  float *v17; // edi
  int v18; // eax
  int v19; // ecx
  _DWORD *v20; // ecx
  struct Canvas *v21; // eax
  int v22; // eax
  int v23; // ebx
  int v24; // ebp
  float *v25; // edi
  int v26; // eax
  int v27; // ecx
  _DWORD *v28; // ecx
  struct Canvas *v29; // eax
  int v30; // eax
  int v31; // ebx
  int v32; // ebp
  float *v33; // edi
  int v34; // eax
  int v35; // ecx
  _DWORD *v36; // ecx
  struct Canvas *v37; // eax
  struct Canvas *v38; // eax
  double v39; // [esp+18h] [ebp-30h]
  int v40; // [esp+30h] [ebp-18h]
  int v41; // [esp+34h] [ebp-14h]
  int v42; // [esp+38h] [ebp-10h]
  float v43[2]; // [esp+40h] [ebp-8h] BYREF
  float v44; // [esp+4Ch] [ebp+4h]
  struct Vector *v45; // [esp+4Ch] [ebp+4h]
  struct Vector *v46; // [esp+4Ch] [ebp+4h]
  struct Vector *v47; // [esp+4Ch] [ebp+4h]
  struct Vector *v48; // [esp+4Ch] [ebp+4h]

  v3 = Canvas::Instance();
  (*(void (__thiscall **)(struct Canvas *))(*(_DWORD *)v3 + 92))(v3);
  sub_1007EED0(v43);
  v4 = Canvas::Instance();
  v39 = *((float *)a2 + 1);
  v44 = v43[0] + 10.0;
  (*(void (**)(struct Canvas *, _DWORD, int, _DWORD, _DWORD, const char *, ...))(*(_DWORD *)v4 + 44))(
    v4,
    0,
    -5636096,
    LODWORD(v44),
    LODWORD(v43[1]),
    "%.2f",
    v39);
  if ( (dword_11248A40 & 1) == 0 )
  {
    dword_11248A40 |= 1u;
    v6 = 1023;
    v7 = (float *)&unk_11242A48;
    do
    {
      *(v7 - 2) = 0.0;
      v7 += 6;
      --v6;
      *(v7 - 7) = 0.0;
      *(v7 - 6) = 0.0;
    }
    while ( v6 >= 0 );
  }
  v8 = (int)((*(float *)a2 - *((float *)this + 214)) / *((float *)this + 361)
           + (double)((*((_DWORD *)this + 340) - 1) / 2));
  v40 = v8;
  v41 = (int)((*((float *)a2 + 2) - *((float *)this + 216)) / *((float *)this + 361)
            + (double)((*((_DWORD *)this + 341) - 1) / 2));
  v45 = 0;
  v9 = (int)*((float *)this + 378);
  v42 = v41 - v9;
  v10 = v8 - v9;
  if ( v8 - v9 <= v8 + v9 )
  {
    v11 = (float *)&unk_11242A48;
    do
    {
      v12 = v11 - 1;
      if ( sub_1015DBD0((_DWORD *)this + 338, v10, v42, v11 - 1) )
      {
        v45 = (struct Vector *)((char *)v45 + 1);
        *v12 = *v12 + 0.1000000014901161;
        *(v11 - 2) = (double)(v10 - (*((_DWORD *)this + 340) - 1) / 2) * *((float *)this + 361);
        v11 += 6;
        *(v11 - 6) = (double)(v42 - (*((_DWORD *)this + 341) - 1) / 2) * *((float *)this + 361);
        *(v11 - 8) = *(v11 - 8) + *((float *)this + 214);
        *v12 = *((float *)this + 215) + *v12;
        *(v11 - 6) = *((float *)this + 216) + *(v11 - 6);
        *(v11 - 5) = -1.7014636e38;
      }
      ++v10;
    }
    while ( v10 <= v40 + (int)*((float *)this + 378) );
    if ( (int)v45 > 1 )
    {
      v13 = Canvas::Instance();
      (*(void (__thiscall **)(struct Canvas *, struct Vector *, void *, int, _DWORD))(*(_DWORD *)v13 + 84))(
        v13,
        v45,
        &unk_11242A40,
        24,
        0);
    }
    v8 = v40;
  }
  v46 = 0;
  v14 = (int)*((float *)this + 378);
  v15 = v14 + v8;
  v16 = v41 - v14;
  if ( v41 - v14 <= v41 + v14 )
  {
    v17 = (float *)&unk_11242A44;
    while ( 1 )
    {
      v18 = *((_DWORD *)this + 340);
      if ( v15 >= v18 || v16 >= *((_DWORD *)this + 341) || v15 < 0 || v16 < 0 )
        goto LABEL_25;
      v19 = *((_DWORD *)this + 343);
      if ( v19 )
      {
        *v17 = *(float *)(v19 + 4 * (v15 + v16 * v18));
      }
      else
      {
        if ( !*((_DWORD *)this + 345) )
          goto LABEL_25;
        v20 = (_DWORD *)*((_DWORD *)this + 345);
        if ( !v20 )
          goto LABEL_25;
        sub_1015DBD0(v20, v15 + *((_DWORD *)this + 338), v16 + *((_DWORD *)this + 339), v17);
      }
      v46 = (struct Vector *)((char *)v46 + 1);
      *v17 = *v17 + 0.1000000014901161;
      *(v17 - 1) = (double)(v15 - (*((_DWORD *)this + 340) - 1) / 2) * *((float *)this + 361);
      v17 += 6;
      *(v17 - 5) = (double)(v16 - (*((_DWORD *)this + 341) - 1) / 2) * *((float *)this + 361);
      *(v17 - 7) = *(v17 - 7) + *((float *)this + 214);
      *(v17 - 6) = *((float *)this + 215) + *(v17 - 6);
      *(v17 - 5) = *((float *)this + 216) + *(v17 - 5);
      *(v17 - 4) = -1.7014636e38;
LABEL_25:
      if ( ++v16 > v41 + (int)*((float *)this + 378) )
      {
        if ( (int)v46 > 1 )
        {
          v21 = Canvas::Instance();
          (*(void (__thiscall **)(struct Canvas *, struct Vector *, void *, int, _DWORD))(*(_DWORD *)v21 + 84))(
            v21,
            v46,
            &unk_11242A40,
            24,
            0);
        }
        v8 = v40;
        break;
      }
    }
  }
  v47 = 0;
  v22 = (int)*((float *)this + 378);
  v23 = v22 + v41;
  v24 = v22 + v8;
  if ( v22 + v8 < v8 - v22 )
    goto LABEL_46;
  v25 = (float *)&unk_11242A44;
  do
  {
    v26 = *((_DWORD *)this + 340);
    if ( v24 < v26 && v23 < *((_DWORD *)this + 341) && v24 >= 0 && v23 >= 0 )
    {
      v27 = *((_DWORD *)this + 343);
      if ( v27 )
      {
        *v25 = *(float *)(v27 + 4 * (v24 + v23 * v26));
LABEL_41:
        v47 = (struct Vector *)((char *)v47 + 1);
        *v25 = *v25 + 0.1000000014901161;
        *(v25 - 1) = (double)(v24 - (*((_DWORD *)this + 340) - 1) / 2) * *((float *)this + 361);
        v25 += 6;
        *(v25 - 5) = (double)(v23 - (*((_DWORD *)this + 341) - 1) / 2) * *((float *)this + 361);
        *(v25 - 7) = *((float *)this + 214) + *(v25 - 7);
        *(v25 - 6) = *((float *)this + 215) + *(v25 - 6);
        *(v25 - 5) = *((float *)this + 216) + *(v25 - 5);
        *(v25 - 4) = -1.7014636e38;
        goto LABEL_42;
      }
      if ( *((_DWORD *)this + 345) )
      {
        v28 = (_DWORD *)*((_DWORD *)this + 345);
        if ( v28 )
        {
          sub_1015DBD0(v28, v24 + *((_DWORD *)this + 338), v23 + *((_DWORD *)this + 339), v25);
          goto LABEL_41;
        }
      }
    }
LABEL_42:
    --v24;
  }
  while ( v24 >= v40 - (int)*((float *)this + 378) );
  if ( (int)v47 > 1 )
  {
    v29 = Canvas::Instance();
    (*(void (__thiscall **)(struct Canvas *, struct Vector *, void *, int, _DWORD))(*(_DWORD *)v29 + 84))(
      v29,
      v47,
      &unk_11242A40,
      24,
      0);
  }
  v8 = v40;
LABEL_46:
  v48 = 0;
  v30 = (int)*((float *)this + 378);
  v31 = v8 - v30;
  v32 = v30 + v41;
  if ( v30 + v41 < v41 - v30 )
    goto LABEL_62;
  v33 = (float *)&unk_11242A44;
  while ( 2 )
  {
    v34 = *((_DWORD *)this + 340);
    if ( v31 < v34 && v32 < *((_DWORD *)this + 341) && v31 >= 0 && v32 >= 0 )
    {
      v35 = *((_DWORD *)this + 343);
      if ( v35 )
      {
        *v33 = *(float *)(v35 + 4 * (v31 + v32 * v34));
        goto LABEL_58;
      }
      if ( *((_DWORD *)this + 345) )
      {
        v36 = (_DWORD *)*((_DWORD *)this + 345);
        if ( v36 )
        {
          sub_1015DBD0(v36, v31 + *((_DWORD *)this + 338), v32 + *((_DWORD *)this + 339), v33);
LABEL_58:
          v48 = (struct Vector *)((char *)v48 + 1);
          *v33 = *v33 + 0.1000000014901161;
          *(v33 - 1) = (double)(v31 - (*((_DWORD *)this + 340) - 1) / 2) * *((float *)this + 361);
          v33 += 6;
          *(v33 - 5) = (double)(v32 - (*((_DWORD *)this + 341) - 1) / 2) * *((float *)this + 361);
          *(v33 - 7) = *(v33 - 7) + *((float *)this + 214);
          *(v33 - 6) = *((float *)this + 215) + *(v33 - 6);
          *(v33 - 5) = *((float *)this + 216) + *(v33 - 5);
          *(v33 - 4) = -1.7014636e38;
        }
      }
    }
    if ( --v32 >= v41 - (int)*((float *)this + 378) )
      continue;
    break;
  }
  if ( (int)v48 > 1 )
  {
    v37 = Canvas::Instance();
    (*(void (__thiscall **)(struct Canvas *, struct Vector *, void *, int, _DWORD))(*(_DWORD *)v37 + 84))(
      v37,
      v48,
      &unk_11242A40,
      24,
      0);
  }
LABEL_62:
  v38 = Canvas::Instance();
  (*(void (__thiscall **)(struct Canvas *))(*(_DWORD *)v38 + 100))(v38);
}
