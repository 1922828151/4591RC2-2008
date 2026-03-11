/*
 * func-name: sub_10102130
 * func-address: 0x10102130
 * callers: 0x10002270, 0x1003fb30, 0x10137560
 * callees: none
 */

char __thiscall sub_10102130(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // eax
  int v3; // edx
  _DWORD *v4; // eax

  v2 = (_DWORD *)*this;
  if ( !*this )
    return 0;
  a2[1] = v2[1];
  a2[2] = v2[2];
  a2[3] = v2[3];
  a2[4] = v2[4];
  a2[5] = v2[5];
  v3 = v2[6];
  v4 = v2 + 7;
  a2[6] = v3;
  a2[7] = *v4;
  a2[8] = v4[1];
  a2[9] = v4[2];
  return 1;
}
