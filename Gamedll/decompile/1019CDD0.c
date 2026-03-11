/*
 * func-name: ?WriteSnapshot@ControlledEstab@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x1019cdd0
 * callers: 0x1000c4f5
 * callees: 0x10004b79, 0x1000df8f, 0x10019e57
 */

bool __thiscall GameClient::ControlledEstab::WriteSnapshot(GameClient::ControlledEstab *this, float a2)
{
  float v2; // esi
  bool result; // al
  int v5; // eax
  int v6; // ecx
  struct BinStream *v7; // eax
  int v8; // eax
  double v9; // st7
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  struct BinStream *v14; // eax
  int v15; // eax
  _DWORD *v16; // ebx
  void (__thiscall **v17)(_DWORD *, int); // esi
  int v18; // eax
  _DWORD *v19; // ebx
  void (__thiscall **v20)(_DWORD *, int); // esi
  int v21; // eax
  _BYTE v22[12]; // [esp+8h] [ebp-30h] BYREF
  _BYTE v23[36]; // [esp+14h] [ebp-24h] BYREF

  v2 = a2;
  result = GameClient::Establishment::WriteSnapshot(this, (struct BinStream *)LODWORD(a2));
  if ( result )
  {
    v5 = *(_DWORD *)(LODWORD(a2) + 12);
    v6 = v5 + 4;
    if ( (unsigned int)(v5 + 4) > *(_DWORD *)(LODWORD(a2) + 8) )
    {
      v7 = (struct BinStream *)LODWORD(a2);
    }
    else
    {
      v7 = *(struct BinStream **)(v5 + *(_DWORD *)(LODWORD(a2) + 4));
      *(_DWORD *)(LODWORD(a2) + 12) = v6;
    }
    GameClient::ControlledEstab::SetCurrentTransState((int)v7);
    v8 = *(_DWORD *)(LODWORD(a2) + 12);
    if ( (unsigned int)(v8 + 4) <= *(_DWORD *)(LODWORD(a2) + 8) )
    {
      v9 = *(float *)(v8 + *(_DWORD *)(LODWORD(a2) + 4));
      *(_DWORD *)(LODWORD(a2) + 12) = v8 + 4;
      a2 = v9;
    }
    v10 = *((_DWORD *)this + 116);
    if ( v10 )
    {
      if ( v10 == 1 )
        v11 = *((_DWORD *)this + 118);
      else
        v11 = 0;
    }
    else
    {
      v11 = *((_DWORD *)this + 117);
    }
    *(float *)(v11 + 12) = a2;
    v12 = *(_DWORD *)(LODWORD(v2) + 12);
    v13 = v12 + 4;
    if ( (unsigned int)(v12 + 4) > *(_DWORD *)(LODWORD(v2) + 8) )
    {
      v14 = (struct BinStream *)LODWORD(a2);
    }
    else
    {
      v14 = *(struct BinStream **)(v12 + *(_DWORD *)(LODWORD(v2) + 4));
      *(_DWORD *)(LODWORD(v2) + 12) = v13;
    }
    if ( *((_DWORD *)this + 114) )
      sub_10004B79((int)v14);
    v15 = *((_DWORD *)this + 114);
    if ( v15 )
    {
      v16 = *(_DWORD **)(v15 + 4);
      v17 = (void (__thiscall **)(_DWORD *, int))(*v16 + 28);
      v18 = NxHelper::ToNxMat33(v23, (char *)this + 36);
      (*v17)(v16, v18);
      v19 = *(_DWORD **)(*((_DWORD *)this + 114) + 4);
      v20 = (void (__thiscall **)(_DWORD *, int))(*v19 + 24);
      v21 = NxHelper::ToNxVec3(v22, (char *)this + 24);
      (*v20)(v19, v21);
    }
    return 1;
  }
  return result;
}
