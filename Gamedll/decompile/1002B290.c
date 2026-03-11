/*
 * func-name: sub_1002B290
 * func-address: 0x1002b290
 * callers: 0x1000b0b9
 * callees: 0x102c0750
 */

int __cdecl sub_1002B290(_DWORD *a1)
{
  struct BBox *WorldBBox; // eax
  _BYTE v3[40]; // [esp+8h] [ebp-34h] BYREF
  int v4; // [esp+38h] [ebp-4h]

  WorldBBox = (struct BBox *)StaticModel::GetWorldBBox(a1[179], v3);
  v4 = 0;
  SkyController::AddSkyVolumeBox(WorldBBox);
  v4 = -1;
  sub_102C0750(v3);
  return (*(int (__thiscall **)(_DWORD *, int))(*a1 + 80))(a1, 1);
}
