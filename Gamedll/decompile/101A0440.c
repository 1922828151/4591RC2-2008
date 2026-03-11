/*
 * func-name: sub_101A0440
 * func-address: 0x101a0440
 * callers: 0x10017670
 * callees: none
 */

void __thiscall sub_101A0440(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  Model *v3; // eax
  int v4; // ecx

  v1 = this[1];
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 300);
    if ( v2 )
    {
      v3 = *(Model **)(v2 + 716);
      if ( v3 )
      {
        v4 = this[2];
        if ( v4 != -1 )
          Model::TransitionToAnimation(v3, v4, 0.0, -1.0, 0.0, 1.0);
      }
    }
  }
}
