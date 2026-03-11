/*
 * func-name: sub_100099E0
 * func-address: 0x100099e0
 * callers: 0x10006e10
 * callees: 0x100031b0
 */

_WORD *__userpurge sub_100099E0@<eax>(_BYTE *a1@<edi>, _WORD *a2, _WORD *a3)
{
  *a2 = *a3;
  sub_100031B0(a1, (int)(a2 + 2));
  return a2;
}
