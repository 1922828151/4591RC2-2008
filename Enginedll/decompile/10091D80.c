/*
 * func-name: ?To2DFixedFov@Gizmo@@QAE?AVVector@@AAV2@@Z
 * func-address: 0x10091d80
 * callers: none
 * callees: 0x101780e0
 */

_DWORD *__thiscall Gizmo::To2DFixedFov(char *this, _DWORD *a2, _DWORD *a3)
{
  *a2 = *a3;
  a2[1] = a3[1];
  a2[2] = a3[2];
  D3DXVec3TransformCoord(a2, a2, this + 252);
  return a2;
}
