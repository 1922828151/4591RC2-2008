/*
 * func-name: ?To2D@Gizmo@@QAE?AVVector@@AAV2@@Z
 * func-address: 0x10091d50
 * callers: 0x1007f560
 * callees: 0x101780e0
 */

_DWORD *__thiscall Gizmo::To2D(char *this, _DWORD *a2, _DWORD *a3)
{
  *a2 = *a3;
  a2[1] = a3[1];
  a2[2] = a3[2];
  D3DXVec3TransformCoord(a2, a2, this + 188);
  return a2;
}
