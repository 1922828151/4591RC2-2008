/*
 * func-name: ?SetValueInternal@CRESlider@@IAEXH_N@Z
 * func-address: 0x100a3bc0
 * callers: 0x1006a920, 0x100aaa10, 0x100aaac0, 0x1014a750
 * callees: none
 */

void __thiscall CRESlider::SetValueInternal(CRESlider *this, int a2, bool a3)
{
  int v3; // eax
  int v5; // ecx
  int v6; // eax
  void (__stdcall *v7)(int, int, _DWORD, CRESlider *, _DWORD, _DWORD); // ecx

  v3 = a2;
  v5 = *((_DWORD *)this + 135);
  if ( v5 > a2 )
    v3 = v5;
  if ( *((_DWORD *)this + 136) < v3 )
    v3 = *((_DWORD *)this + 136);
  if ( v3 != *((_DWORD *)this + 134) )
  {
    *((_DWORD *)this + 134) = v3;
    (*(void (__thiscall **)(CRESlider *))(*(_DWORD *)this + 164))(this);
    v6 = *((_DWORD *)this + 28);
    if ( v6 )
    {
      v7 = *(void (__stdcall **)(int, int, _DWORD, CRESlider *, _DWORD, _DWORD))(v6 + 736);
      if ( v7 )
      {
        if ( a3 || *(_BYTE *)(v6 + 84) )
          v7(v6, 1281, *((_DWORD *)this + 34), this, 0, 0);
      }
    }
  }
}
