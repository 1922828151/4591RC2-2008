/*
 * func-name: ?Tick@IndoorVolume@@UAEXXZ
 * func-address: 0x100da0e0
 * callers: none
 * callees: 0x1007ec70, 0x100ee930, 0x1017a0b0
 */

void __thiscall IndoorVolume::Tick(IndoorVolume *this)
{
  int v2; // ecx
  _DWORD *WorldBBox; // eax
  int v4; // edx
  int v5; // ecx
  _BYTE v6[40]; // [esp+4h] [ebp-28h] BYREF

  v2 = *((_DWORD *)this + 179);
  if ( v2 && (!*((_BYTE *)this + 1092) || *((_BYTE *)this + 441)) )
  {
    WorldBBox = (_DWORD *)StaticModel::GetWorldBBox(v2, v6);
    *((_DWORD *)this + 264) = WorldBBox[1];
    *((_DWORD *)this + 265) = WorldBBox[2];
    *((_DWORD *)this + 266) = WorldBBox[3];
    *((_DWORD *)this + 267) = WorldBBox[4];
    *((_DWORD *)this + 268) = WorldBBox[5];
    v4 = WorldBBox[6];
    WorldBBox += 7;
    *((_DWORD *)this + 269) = v4;
    *((_DWORD *)this + 270) = *WorldBBox;
    *((_DWORD *)this + 271) = WorldBBox[1];
    *((_DWORD *)this + 272) = WorldBBox[2];
    sub_1017A0B0(v6);
    if ( !*((_BYTE *)Editor::Instance() + 2056) )
    {
      v5 = *((_DWORD *)this + 179);
      *((_BYTE *)this + 816) = 1;
      if ( v5 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 12))(v5, 1);
      *((_DWORD *)this + 179) = 0;
    }
    *((_BYTE *)this + 724) = 1;
    *((_BYTE *)this + 1092) = 1;
  }
  Actor::Tick(this);
}
