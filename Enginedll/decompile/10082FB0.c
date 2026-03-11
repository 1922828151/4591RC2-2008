/*
 * func-name: ?GrabAngles@Editor@@QAEXAAM00@Z
 * func-address: 0x10082fb0
 * callers: none
 * callees: 0x1001cc30
 */

void __thiscall Editor::GrabAngles(Editor *this, float *a2, float *a3, float *a4)
{
  int v4; // eax
  _DWORD *v5; // ecx

  v4 = *((_DWORD *)this + 562);
  v5 = (_DWORD *)((char *)this + 2244);
  if ( v4 )
  {
    if ( (v5[2] - v4) >> 2 )
    {
      std::vector<Actor *>::at(v5, 0);
      sub_101796B0(a2, a3, a4);
    }
  }
}
