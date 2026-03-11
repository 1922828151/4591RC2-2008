/*
 * func-name: sub_100BD170
 * func-address: 0x100bd170
 * callers: 0x1001a7ee
 * callees: none
 */

void __thiscall sub_100BD170(int this, bool a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(this + 1052);
  if ( v2 )
    *(_BYTE *)(v2 + 112) = !a2;
  if ( *(_BYTE *)(this + 1064) != a2 && a2 )
  {
    *(float *)(this + 1168) = 3.4028235e38;
    *(float *)(this + 1172) = 3.4028235e38;
    *(float *)(this + 1176) = 3.4028235e38;
  }
  Effect_Base::SetActivation((Effect_Base *)this, a2);
}
