/*
 * func-name: sub_10018F30
 * func-address: 0x10018f30
 * callers: 0x10018150
 * callees: 0x100031b0
 */

_DWORD *__userpurge sub_10018F30@<eax>(_BYTE *a1@<edi>, _DWORD *a2, _DWORD *a3)
{
  *a2 = *a3;
  sub_100031B0(a1, (int)(a2 + 1));
  return a2;
}
