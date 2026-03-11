/*
 * func-name: ?DeserializationComplete@SurfaceNode@@UAEXXZ
 * func-address: 0x10160210
 * callers: none
 * callees: 0x10001330, 0x1007ec70, 0x100ee930, 0x100ee980, 0x100eeba0, 0x100f2ca0, 0x101377c0, 0x1015eca0, 0x1017a0b0, 0x101a2534, 0x101a28ec
 */

void __thiscall SurfaceNode::DeserializationComplete(SurfaceNode *this)
{
  int Actor; // eax
  Terrain *v3; // edi
  unsigned int v4; // esi
  int v5; // ecx
  int v6; // esi
  Model *v7; // eax
  Model *v8; // eax
  struct TerrainNode *Node; // eax
  float *v10; // esi
  StaticModel *v11; // ecx
  int v12; // edi
  float v13; // edx
  float v14; // eax
  int v15; // [esp-10h] [ebp-8Ch]
  int v16; // [esp-Ch] [ebp-88h]
  _DWORD v17[4]; // [esp+8h] [ebp-74h] BYREF
  float v18; // [esp+18h] [ebp-64h]
  float v19; // [esp+1Ch] [ebp-60h]
  float v20; // [esp+20h] [ebp-5Ch]
  float v21; // [esp+24h] [ebp-58h]
  float v22; // [esp+28h] [ebp-54h]
  float v23; // [esp+2Ch] [ebp-50h]
  float v24[16]; // [esp+30h] [ebp-4Ch] BYREF
  int v25; // [esp+78h] [ebp-4h]

  if ( *((_BYTE *)Editor::Instance() + 2056) )
  {
    Actor = World::FindActor(*((_DWORD **)this + 178), (int)this + 1172);
    v3 = (Terrain *)_RTDynamicCast(Actor, 0, &Actor `RTTI Type Descriptor', &Terrain `RTTI Type Descriptor', 0);
    if ( v3 )
    {
      v4 = *((_DWORD *)this + 300) + *((_DWORD *)this + 301) * *((_DWORD *)v3 + 357);
      v5 = *((_DWORD *)v3 + 347);
      if ( v5 && v4 < (*((_DWORD *)v3 + 348) - v5) >> 2 )
        v6 = *(_DWORD *)(*((_DWORD *)v3 + 347) + 4 * v4);
      else
        v6 = 0;
      *(_DWORD *)(v6 + 28) = this;
      if ( !*((_DWORD *)this + 179) )
      {
        v7 = (Model *)operator new(0x1C8u);
        v25 = 0;
        if ( v7 )
          v8 = Model::Model(v7);
        else
          v8 = 0;
        *((_DWORD *)this + 179) = v8;
        *((_BYTE *)v8 + 312) = 1;
        v16 = *((_DWORD *)this + 301);
        v15 = *((_DWORD *)this + 300);
        v25 = -1;
        Node = Terrain::FindNode(v3, v15, v16);
        v10 = (float *)Node;
        if ( Node )
        {
          StaticModel::GetWorldBBox(*((_DWORD **)Node + 179), v17);
          v11 = (StaticModel *)*((_DWORD *)this + 179);
          v18 = v18 - v10[214];
          v25 = 1;
          v19 = v19 - v10[215];
          v20 = v20 - v10[216];
          v21 = v21 - v10[214];
          v22 = v22 - v10[215];
          v23 = v23 - v10[216];
          StaticModel::SetUserBBox(v11, (const struct BBox *)v17);
          sub_10001330(v24, (char *)this + 868);
          v12 = *((_DWORD *)this + 179);
          v13 = *((float *)this + 215);
          v14 = *((float *)this + 216);
          v24[12] = *((float *)this + 214);
          v24[13] = v13;
          v24[14] = v14;
          qmemcpy((void *)(v12 + 224), v24, 0x40u);
          StaticModel::UpdateWorldBBox(*((StaticModel **)this + 179));
          std::string::operator=(*((_DWORD *)this + 179) + 320, (char *)this + 444);
          (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 179) + 8))(*((_DWORD *)this + 179));
          v25 = -1;
          sub_1017A0B0(v17);
        }
      }
    }
  }
}
