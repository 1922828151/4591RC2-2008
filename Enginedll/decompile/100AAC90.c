/*
 * func-name: ?SetRange@CRESlider@@QAEXHH@Z
 * func-address: 0x100aac90
 * callers: 0x100b09a0, 0x100c7fa0, 0x100cb120, 0x1014a750
 * callees: none
 */

void __thiscall CRESlider::SetRange(CRESlider *this, int a2, int a3)
{
  int v4; // edx
  int v5; // eax
  int v6; // eax
  void (__stdcall *v7)(int, int, _DWORD, CRESlider *, _DWORD, _DWORD); // ecx

  v4 = *((_DWORD *)this + 134);
  v5 = v4;
  *((_DWORD *)this + 135) = a2;
  *((_DWORD *)this + 136) = a3;
  if ( a2 > v4 )
    v5 = a2;
  if ( a3 < v5 )
    v5 = a3;
  if ( v5 != v4 )
  {
    *((_DWORD *)this + 134) = v5;
    (*(void (__thiscall **)(CRESlider *))(*(_DWORD *)this + 164))(this);
    v6 = *((_DWORD *)this + 28);
    if ( v6 )
    {
      v7 = *(void (__stdcall **)(int, int, _DWORD, CRESlider *, _DWORD, _DWORD))(v6 + 736);
      if ( v7 )
      {
        if ( *(_BYTE *)(v6 + 84) )
          v7(v6, 1281, *((_DWORD *)this + 34), this, 0, 0);
      }
    }
  }
}
