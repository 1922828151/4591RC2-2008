/*
 * func-name: ?UpdateVertex@TerrainNode@@QAE_N_N00000VVector2@@1@Z
 * func-address: 0x1015edf0
 * callers: 0x1008e470, 0x10164f30, 0x101658e0, 0x10168040
 * callees: 0x1009dd90, 0x1015d490, 0x1015dbd0, 0x1015dc40
 */

char __thiscall TerrainNode::UpdateVertex(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        int a8,
        float a9,
        float a10,
        float a11)
{
  _DWORD *v11; // esi
  struct Mesh *Mesh; // edi
  struct Mesh *v14; // ebx
  struct Mesh *v15; // ebp
  int v16; // eax
  double v17; // st7
  double v18; // st6
  int v19; // ebp
  double v20; // st5
  int v21; // edi
  double v22; // st4
  double v23; // st3
  int v24; // ebx
  _DWORD *v25; // esi
  double v26; // st7
  float v27; // edx
  float v28; // eax
  float v29; // ecx
  float v30; // eax
  float v31; // edx
  float v32; // ecx
  float v33; // edx
  float v34; // eax
  int v35; // eax
  float v36; // edx
  int v37; // eax
  int v38; // ebx
  int v39; // ecx
  char *v40; // ebp
  int VertexCodeComplete; // eax
  int v42; // ecx
  int v43; // eax
  float v44; // edx
  int v45; // eax
  int v46; // ebx
  int v47; // ecx
  char *v48; // ebp
  int v49; // eax
  int v50; // ecx
  struct Mesh *v51; // [esp+18h] [ebp-44h]
  struct Mesh *v52; // [esp+1Ch] [ebp-40h]
  int v53; // [esp+20h] [ebp-3Ch]
  int v54; // [esp+24h] [ebp-38h]
  struct Mesh *v55; // [esp+28h] [ebp-34h]
  float v57; // [esp+34h] [ebp-28h] BYREF
  float v58; // [esp+38h] [ebp-24h]
  float v59; // [esp+3Ch] [ebp-20h]
  float v60; // [esp+40h] [ebp-1Ch]
  float v61; // [esp+44h] [ebp-18h]
  float v62; // [esp+48h] [ebp-14h]
  float v63; // [esp+4Ch] [ebp-10h]
  float v64; // [esp+50h] [ebp-Ch]
  float v65; // [esp+54h] [ebp-8h]
  float v66; // [esp+58h] [ebp-4h]

  v11 = this;
  if ( !this[316] )
    return 0;
  Mesh = ModelFrame::GetMesh(*(ModelFrame **)(this[179] + 308), 0);
  v51 = Mesh;
  v14 = ModelFrame::GetMesh(*(ModelFrame **)(v11[179] + 308), 1u);
  v55 = v14;
  v15 = ModelFrame::GetMesh(*(ModelFrame **)(v11[179] + 308), 2u);
  v52 = v15;
  if ( Mesh )
  {
    if ( LOBYTE(a6) )
    {
      v16 = (*(int (__thiscall **)(struct Mesh *, float *))(*(_DWORD *)Mesh + 128))(Mesh, &v57);
      v17 = a9;
      v18 = *(float *)&a8;
      v19 = 0;
      v20 = 0.0;
      v21 = v16;
      v22 = 1.0;
      v54 = 0;
      v23 = 0.015625;
      do
      {
        v24 = 0;
        v53 = 0;
        do
        {
          if ( (v19 || (v24 & 1) == 0)
            && (v24 || !(v19 % 2))
            && (v19 != 64 || (v24 & 1) == 0)
            && (v24 != 64 || !(v19 % 2)) )
          {
            if ( (_BYTE)a2 )
            {
              v25 = v11 + 296;
              sub_1015DBD0(v25, v24, v19, &a6);
              v26 = a6;
              if ( a6 < -100000.0 )
              {
                a6 = v26 + 200000.0;
                sub_1015DC40(v25, v24, v19, a6);
                v26 = a6;
              }
              if ( v26 > 100000.0 )
              {
                a6 = v26 - 200000.0;
                sub_1015DC40(v25, v24, v19, a6);
                v26 = a6;
              }
              v11 = this;
              *(float *)(v21 + 4) = v26;
              v17 = a9;
              v20 = 0.0;
              v18 = *(float *)&a8;
              v23 = 0.015625;
              v22 = 1.0;
            }
            if ( (_BYTE)a5 )
            {
              *(float *)v21 = (double)(v24 - 32) * *(float *)(v11[316] + 1444);
              *(float *)(v21 + 8) = (double)(v19 - 32) * *(float *)(v11[316] + 1444);
            }
            if ( (_BYTE)a4 )
            {
              v58 = v20;
              v59 = v58;
              v27 = v58;
              *(float *)(v21 + 24) = v58;
              v60 = v22;
              v28 = v60;
              *(float *)(v21 + 28) = v27;
              v61 = v20;
              v29 = v61;
              v63 = v61;
              *(float *)(v21 + 32) = v28;
              v30 = v63;
              v62 = v22;
              v31 = v62;
              v64 = v62;
              *(float *)(v21 + 12) = v29;
              v32 = v64;
              v65 = v20;
              *(float *)(v21 + 16) = v31;
              v33 = v65;
              v66 = v20;
              *(float *)(v21 + 20) = v30;
              v34 = v66;
              *(float *)(v21 + 36) = v32;
              *(float *)(v21 + 40) = v33;
              *(float *)(v21 + 44) = v34;
            }
            if ( (_BYTE)a3 )
            {
              *(float *)(v21 + 48) = (a10 - v18) * ((double)v53 * v23) + v18;
              *(float *)(v21 + 52) = (a11 - v17) * ((double)v54 * v23) + v17;
            }
            v21 += 56;
          }
          v53 = ++v24;
        }
        while ( v24 < 65 );
        v54 = ++v19;
      }
      while ( v19 < 65 );
      (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)v51 + 132))(v51);
      Mesh = v51;
      v14 = v55;
      v15 = v52;
    }
    if ( v14 && LOBYTE(a7) )
    {
      a3 = (*(int (__thiscall **)(struct Mesh *, int *))(*(_DWORD *)Mesh + 128))(Mesh, &a5);
      v35 = (*(int (__thiscall **)(struct Mesh *, int *))(*(_DWORD *)v14 + 128))(v14, &a5);
      v36 = 0.0;
      a4 = v35;
      v37 = 0;
      a6 = 0.0;
      a2 = 0;
      while ( 1 )
      {
        v38 = 0;
        v39 = v37 % 2;
        a8 = v37 % 2;
        v40 = (char *)(a4 + 56 * LODWORD(v36));
        do
        {
          if ( !v39 && (v38 & 1) == 0 )
          {
            VertexCodeComplete = TerrainNode::GetVertexCodeComplete(v38, v37);
            ++LODWORD(a6);
            v42 = 7 * VertexCodeComplete;
            v37 = a2;
            qmemcpy(v40, (const void *)(a3 + 8 * v42), 0x38u);
            v39 = a8;
            v40 += 56;
          }
          ++v38;
        }
        while ( v38 <= 64 );
        a2 = ++v37;
        if ( v37 > 64 )
          break;
        v36 = a6;
      }
      (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)v55 + 132))(v55);
      (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)v51 + 132))(v51);
      Mesh = v51;
      v15 = v52;
    }
    if ( v15 && LOBYTE(a7) )
    {
      a4 = (*(int (__thiscall **)(struct Mesh *, int *))(*(_DWORD *)Mesh + 128))(Mesh, &a2);
      v43 = (*(int (__thiscall **)(struct Mesh *, int *))(*(_DWORD *)v15 + 128))(v15, &a2);
      v44 = 0.0;
      a5 = v43;
      *(float *)&v45 = 0.0;
      a7 = 0.0;
      a6 = 0.0;
      while ( 1 )
      {
        v46 = 0;
        v47 = v45 % 4;
        a3 = v45 % 4;
        v48 = (char *)(a5 + 56 * LODWORD(v44));
        do
        {
          if ( !v47 && (v46 & 3) == 0 )
          {
            v49 = TerrainNode::GetVertexCodeComplete(v46, v45);
            ++LODWORD(a7);
            v50 = 7 * v49;
            *(float *)&v45 = a6;
            qmemcpy(v48, (const void *)(a4 + 8 * v50), 0x38u);
            v47 = a3;
            v48 += 56;
          }
          ++v46;
        }
        while ( v46 <= 64 );
        ++v45;
        a6 = *(float *)&v45;
        if ( v45 > 64 )
          break;
        v44 = a7;
      }
      (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)v51 + 132))(v51);
      (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)v52 + 132))(v52);
    }
  }
  return 1;
}
