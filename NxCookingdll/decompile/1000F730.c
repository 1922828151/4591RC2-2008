/*
 * func-name: sub_1000F730
 * func-address: 0x1000f730
 * callers: 0x1000f840
 * callees: 0x10014910
 */

void __thiscall sub_1000F730(_DWORD *this)
{
  bool v2; // zf
  int v3; // eax
  _DWORD *v4; // ecx
  int v5; // eax
  int v6; // eax

  v2 = this[3] == 0;
  *this = &SupportVertexMap::`vftable';
  if ( v2 )
  {
    if ( this[7] )
    {
      v5 = sub_10014910();
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 12))(v5, this[7]);
      this[7] = 0;
    }
    if ( this[6] )
    {
      v6 = sub_10014910();
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 12))(v6, this[6]);
      this[6] = 0;
    }
    v4 = this;
  }
  else
  {
    v3 = sub_10014910();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 12))(v3, this[3]);
    this[3] = 0;
    v4 = this;
  }
  *v4 = &GaussMap::`vftable';
}
