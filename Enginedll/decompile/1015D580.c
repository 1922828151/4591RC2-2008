/*
 * func-name: ?GenerateIndex@TerrainNode@@SA_NPAG0@Z
 * func-address: 0x1015d580
 * callers: 0x1015f2a0
 * callees: 0x1015d490
 */

char __cdecl TerrainNode::GenerateIndex(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v3; // esi
  int v4; // ebp
  unsigned __int16 v5; // ax
  int v6; // ebx
  int v7; // edx
  int v8; // esi
  unsigned __int16 v9; // ax
  int v10; // ebx
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // esi
  int v14; // esi
  bool v15; // sf
  int v16; // ebx
  unsigned __int16 VertexCodeComplete; // ax
  int v18; // esi
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // ax
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // ax
  int v23; // eax
  int v24; // esi
  unsigned __int16 v25; // bx
  int v26; // esi
  int v27; // eax
  int v28; // ecx
  unsigned __int16 *v29; // eax
  unsigned __int16 *v30; // eax
  int v31; // edi
  int v32; // edx
  __int16 v33; // si
  unsigned __int16 *v34; // ecx
  __int16 v35; // ax
  __int16 v36; // bx
  int v37; // edi
  unsigned __int16 *i; // eax
  int v39; // edx
  __int16 v40; // si
  unsigned __int16 *v41; // ecx
  __int16 v42; // ax
  __int16 v43; // bx
  unsigned __int16 v45; // [esp+10h] [ebp-20h]
  unsigned __int16 v46; // [esp+14h] [ebp-1Ch]
  unsigned int v47; // [esp+1Ch] [ebp-14h]
  int v48; // [esp+20h] [ebp-10h]
  int v49; // [esp+24h] [ebp-Ch]
  int v50; // [esp+24h] [ebp-Ch]
  int v51; // [esp+28h] [ebp-8h]
  int v52; // [esp+28h] [ebp-8h]
  int v53; // [esp+2Ch] [ebp-4h]
  int v54; // [esp+2Ch] [ebp-4h]
  unsigned __int16 *v55; // [esp+34h] [ebp+4h]
  unsigned __int16 *v56; // [esp+34h] [ebp+4h]
  unsigned __int16 *v57; // [esp+38h] [ebp+8h]

  if ( a1 )
  {
    v3 = 0;
    v4 = 0;
    v55 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v4 > 0x40 || (v4 & 0x80000001) != 0 )
      {
        v5 = -1;
      }
      else if ( v4 )
      {
        v6 = 63 * (v4 / 2);
        v7 = 65 * ((v4 - 1) / 2);
        v5 = v6 + v7 + 33;
        if ( !((v4 - 1) % 2) )
          v5 = v6 + v7 + 32;
      }
      else
      {
        v5 = 0;
      }
      a1[v3] = v5;
      v8 = v3 + 1;
      v48 = v4 + 2;
      if ( (unsigned int)(v4 + 2) > 0x40 || (v4 + 2) % 2 )
      {
        v9 = -1;
      }
      else if ( v4 == -2 )
      {
        v9 = 0;
      }
      else
      {
        v10 = 63 * ((v4 + 2) / 2);
        v11 = 65 * ((v4 + 1) / 2);
        v9 = v10 + v11 + 33;
        if ( v4 != 62 && !((v4 + 1) % 2) )
          v9 = v10 + v11 + 32;
      }
      v12 = v4 + 1;
      a1[v8] = v9;
      v13 = v8 + 1;
      v47 = v4 + 1;
      a1[v13] = TerrainNode::GetVertexCodeComplete(1, v4 + 1);
      v14 = v13 + 1;
      v15 = v4 < 0;
      if ( v4 > 0 )
      {
        v16 = 1;
        do
        {
          VertexCodeComplete = TerrainNode::GetVertexCodeComplete(v16 - 1, v4);
          a1[v14] = VertexCodeComplete;
          v46 = VertexCodeComplete;
          v18 = v14 + 1;
          v19 = TerrainNode::GetVertexCodeComplete(v16, v4);
          a1[v18] = v19;
          v45 = v19;
          ++v18;
          v20 = TerrainNode::GetVertexCodeComplete(v16, v4 - 1);
          a1[v18++] = v20;
          a1[v18++] = v20;
          a1[v18++] = v45;
          v21 = TerrainNode::GetVertexCodeComplete(v16 + 1, v4);
          a1[v18] = v21;
          a1[v18 + 1] = v21;
          v18 += 2;
          a1[v18++] = v45;
          v22 = TerrainNode::GetVertexCodeComplete(v16++, v4 + 1);
          a1[v18++] = v22;
          a1[v18++] = v22;
          a1[v18++] = v45;
          a1[v18] = v46;
          v14 = v18 + 1;
          --v4;
        }
        while ( v16 - 1 < (int)v55 );
        v4 = (int)v55;
        v12 = v47;
        v15 = (int)v55 < 0;
      }
      if ( v15 || v4 > 64 || v4 % 2 )
        LOWORD(v23) = -1;
      else
        v23 = v4 / 2;
      a1[v14] = v23;
      v24 = v14 + 1;
      if ( v12 > 0x40 || !v12 || v12 == 64 )
        v25 = -1;
      else
        v25 = v12 + 32;
      a1[v24] = v25;
      v26 = v24 + 1;
      if ( (unsigned int)v48 > 0x40 || v48 % 2 )
        LOWORD(v27) = -1;
      else
        v27 = v48 / 2;
      a1[v26] = v27;
      v3 = v26 + 1;
      v55 = (unsigned __int16 *)v48;
      if ( v48 >= 64 )
        break;
      v4 = v48;
    }
    v28 = 2 * v3;
    if ( v3 < 2 * v3 )
    {
      v29 = a1;
      do
        a1[v3++] = 4096 - *v29++;
      while ( v3 < v28 );
    }
  }
  v30 = a2;
  if ( a2 )
  {
    v31 = 0;
    while ( 1 )
    {
      v32 = 0;
      v33 = 33 * v31;
      v34 = v30;
      v56 = v30 + 192;
      do
      {
        v35 = v33 + v32;
        if ( (v32 + v31) % 2 )
        {
          v36 = v35 + 33;
          HIWORD(v51) = v35 + 1;
        }
        else
        {
          v36 = v35 + 34;
          HIWORD(v51) = v33 + v32;
        }
        LOWORD(v53) = v35 + 33;
        HIWORD(v53) = v35 + 34;
        HIWORD(v49) = v36;
        LOWORD(v49) = v33 + v32;
        *(_DWORD *)v34 = v49;
        LOWORD(v51) = v35 + 1;
        *((_DWORD *)v34 + 1) = v51;
        *((_DWORD *)v34 + 2) = v53;
        ++v32;
        v34 += 6;
      }
      while ( v32 < 32 );
      if ( ++v31 >= 32 )
        break;
      v30 = v56;
    }
    v37 = 0;
    for ( i = a2 + 6144; ; i = v57 )
    {
      v39 = 0;
      v40 = 33 * v37;
      v41 = i;
      v57 = i + 96;
      do
      {
        v42 = v40 + v39;
        if ( (v39 + v37) % 4 )
        {
          v43 = v42 + 66;
          HIWORD(v52) = v42 + 2;
        }
        else
        {
          v43 = v42 + 68;
          HIWORD(v52) = v40 + v39;
        }
        LOWORD(v54) = v42 + 66;
        HIWORD(v54) = v42 + 68;
        HIWORD(v50) = v43;
        LOWORD(v50) = v40 + v39;
        *(_DWORD *)v41 = v50;
        LOWORD(v52) = v42 + 2;
        *((_DWORD *)v41 + 1) = v52;
        *((_DWORD *)v41 + 2) = v54;
        v39 += 2;
        v41 += 6;
      }
      while ( v39 < 32 );
      v37 += 2;
      if ( v37 >= 32 )
        break;
    }
  }
  return 1;
}
