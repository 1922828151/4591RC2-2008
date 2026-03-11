/*
 * func-name: ?GetWorldBBox@LightBeam@@UAE?AVBBox@@XZ_0
 * func-address: 0x100aa0a0
 * callers: 0x100012f8
 * callees: none
 */

_DWORD *__thiscall LightBeam::GetWorldBBox(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  _DWORD *v4; // ecx
  int v5; // edx
  int v6; // ecx

  result = a2;
  a2[1] = this[52];
  a2[2] = this[53];
  a2[3] = this[54];
  a2[4] = this[55];
  a2[5] = this[56];
  v3 = this[57];
  v4 = this + 58;
  a2[6] = v3;
  a2[7] = *v4;
  v5 = v4[1];
  v6 = v4[2];
  a2[8] = v5;
  *a2 = &BBox::`vftable';
  a2[9] = v6;
  return result;
}
