/*
 * func-name: ?GetWorldBBox@StaticModel@@QAE?AVBBox@@XZ
 * func-address: 0x100ee930
 * callers: 0x10043b90, 0x1004d7e0, 0x1004df10, 0x1004e070, 0x1004e610, 0x10080700, 0x10080c60, 0x10084f60, 0x10087a10, 0x10088cd0, 0x1008c3e0, 0x1008ce00, 0x1008de00, 0x100b2080, 0x100b2510, 0x100da0e0, 0x100da1c0, 0x100debd0, 0x100df070, 0x100f04f0, 0x10101a60, 0x10102e10, 0x10103770, 0x10103d60, 0x10104470, 0x101046b0, 0x1010c960, 0x10128c50, 0x10139150, 0x10160210, 0x10166fb0, 0x10169020
 * callees: none
 */

_DWORD *__thiscall StaticModel::GetWorldBBox(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  _DWORD *v4; // ecx
  int v5; // edx
  int v6; // ecx

  result = a2;
  a2[1] = this[4];
  a2[2] = this[5];
  a2[3] = this[6];
  a2[4] = this[7];
  a2[5] = this[8];
  v3 = this[9];
  v4 = this + 10;
  a2[6] = v3;
  a2[7] = *v4;
  v5 = v4[1];
  v6 = v4[2];
  a2[8] = v5;
  *a2 = &BBox::`vftable';
  a2[9] = v6;
  return result;
}
