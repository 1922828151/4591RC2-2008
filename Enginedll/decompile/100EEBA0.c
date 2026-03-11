/*
 * func-name: ?UpdateWorldBBox@StaticModel@@QAEXXZ
 * func-address: 0x100eeba0
 * callers: 0x10080a00, 0x100846a0, 0x100eee60, 0x100f1c50, 0x1010c960, 0x10160210, 0x10166120
 * callees: 0x10001440, 0x1008fdf0, 0x1009f270, 0x1017a0b0
 */

void __thiscall StaticModel::UpdateWorldBBox(StaticModel *this)
{
  float *WorldBBox; // eax
  int *v3; // ecx
  int v4; // edx
  float *v5; // eax
  float v6[10]; // [esp+4h] [ebp-28h] BYREF

  if ( *((_BYTE *)this + 56) )
  {
    WorldBBox = sub_1008FDF0((float *)this + 15, v6, (int)this + 224);
    *((float *)this + 4) = WorldBBox[1];
    *((float *)this + 5) = WorldBBox[2];
    *((float *)this + 6) = WorldBBox[3];
    *((float *)this + 7) = WorldBBox[4];
    *((float *)this + 8) = WorldBBox[5];
    *((float *)this + 9) = WorldBBox[6];
  }
  else
  {
    v3 = (int *)*((_DWORD *)this + 77);
    if ( v3 )
      WorldBBox = (float *)ModelFrame::GetWorldBBox(v3, (int)v6, *((unsigned __int8 *)this + 313));
    else
      WorldBBox = sub_10001440(v6);
    *((float *)this + 4) = WorldBBox[1];
    *((float *)this + 5) = WorldBBox[2];
    *((float *)this + 6) = WorldBBox[3];
    *((float *)this + 7) = WorldBBox[4];
    *((float *)this + 8) = WorldBBox[5];
    *((float *)this + 9) = WorldBBox[6];
  }
  v4 = *((_DWORD *)WorldBBox + 7);
  v5 = WorldBBox + 7;
  *((_DWORD *)this + 10) = v4;
  *((float *)this + 11) = v5[1];
  *((float *)this + 12) = v5[2];
  sub_1017A0B0(v6);
}
