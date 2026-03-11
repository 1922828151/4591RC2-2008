/*
 * func-name: ?RemoveItem@CREPropertiesList@@QAEXH@Z
 * func-address: 0x100abf40
 * callers: none
 * callees: 0x100ab130, 0x100ce3c0, 0x101a2500
 */

void __thiscall CREPropertiesList::RemoveItem(CREPropertiesList *this, int a2)
{
  _DWORD *v3; // ebx
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  void (__stdcall *v7)(int, int, _DWORD, CREPropertiesList *, _DWORD, _DWORD); // ecx

  if ( a2 >= 0 && a2 < *((_DWORD *)this + 306) )
  {
    v3 = *(_DWORD **)(*((_DWORD *)this + 305) + 4 * a2);
    v4 = v3[128];
    if ( v4 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, 1);
    operator delete(v3);
    sub_100CE3C0(a2);
    CREScrollBar::SetTrackRange((CREPropertiesList *)((char *)this + 564), 0, *((_DWORD *)this + 306));
    v5 = *((_DWORD *)this + 306);
    if ( *((_DWORD *)this + 300) >= v5 )
      *((_DWORD *)this + 300) = v5 - 1;
    v6 = *((_DWORD *)this + 28);
    v7 = *(void (__stdcall **)(int, int, _DWORD, CREPropertiesList *, _DWORD, _DWORD))(v6 + 736);
    if ( v7 )
      v7(v6, 1794, *((_DWORD *)this + 34), this, 0, 0);
  }
}
