/*
 * func-name: ?Compile@TerrainNode@@QAE_N_N0@Z
 * func-address: 0x1015d190
 * callers: 0x1008e470, 0x101658e0, 0x10169d00
 * callees: 0x10077b70, 0x10078420, 0x1007bf30, 0x1007da70, 0x1009dd90, 0x1017809e, 0x1017eaef
 */

char __userpurge TerrainNode::Compile@<al>(TerrainNode *this@<ecx>, int a2@<edi>, bool a3, bool a4)
{
  ModelFrame *v5; // ecx
  unsigned int v6; // esi
  struct Mesh *Mesh; // eax
  int v8; // eax
  int v9; // eax
  void (**v10)(void *, const char *, ...); // edi
  int v11; // eax
  int v12; // edx
  int v13; // eax
  struct Mesh *v14; // eax
  int v16; // [esp+30h] [ebp-40h]
  _DWORD v17[4]; // [esp+40h] [ebp-30h] BYREF
  int v18; // [esp+50h] [ebp-20h]
  int v19; // [esp+54h] [ebp-1Ch]
  char v20; // [esp+58h] [ebp-18h]
  char v21; // [esp+59h] [ebp-17h]
  float v22; // [esp+5Ch] [ebp-14h]
  float v23; // [esp+60h] [ebp-10h]
  int v24; // [esp+6Ch] [ebp-4h]

  if ( a3 )
  {
    v5 = *(ModelFrame **)(*((_DWORD *)this + 179) + 308);
    v6 = 0;
    if ( *((_DWORD *)v5 + 10) )
    {
      v16 = a2;
      do
      {
        Mesh = ModelFrame::GetMesh(v5, v6);
        v8 = (*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)Mesh + 4))(Mesh);
        v9 = D3DXComputeTangentFrameEx(v8, 5, 0, -1, 0, 6, 0, 3, 0, 1536, 0, -1.01, -1.01, -1.01, 0, 0);
        if ( v9 < 0 )
        {
          v10 = (void (**)(void *, const char *, ...))(*(_DWORD *)dword_11249F38 + 4);
          v11 = sub_1017EAEF(v9);
          (*v10)(
            dword_11249F38,
            " Error: %s, in: D3DXComputeTangentFrameEx( pOrigCmp, D3DDECLUSAGE_TEXCOORD, 0, D3DX_DEFAULT, 0, D3DDECLUSAGE"
            "_TANGENT, 0, D3DDECLUSAGE_NORMAL, 0, D3DXTANGENT_GENERATE_IN_PLACE | D3DXTANGENT_CALCULATE_NORMALS, NULL, -1"
            ".01f, -1.01f, -1.01f, NULL, 0 )",
            v11);
        }
        v5 = *(ModelFrame **)(*((_DWORD *)this + 179) + 308);
        ++v6;
      }
      while ( v6 < *((_DWORD *)v5 + 10) );
      a2 = v16;
    }
  }
  if ( a4 )
  {
    v20 = 1;
    v22 = 100.0;
    v18 = 0;
    v23 = 100.0;
    v17[1] = 0;
    LOWORD(v17[0]) = 0;
    v21 = 0;
    v17[2] = 0;
    v19 = 0;
    v17[3] = GetTickCount();
    v12 = *((_DWORD *)this + 178);
    v24 = 0;
    v18 = v12;
    sub_1007DA70(v17, (int)this);
    v13 = *((_DWORD *)this + 179);
    if ( v13 )
    {
      sub_10077B70(*(_DWORD **)(*(_DWORD *)(v13 + 308) + 452));
      v14 = ModelFrame::GetMesh(*(ModelFrame **)(*((_DWORD *)this + 179) + 308), 0);
      sub_10078420(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 179) + 308) + 452), a2, (int)v14);
    }
    v24 = -1;
    nullsub_1();
  }
  return 1;
}
