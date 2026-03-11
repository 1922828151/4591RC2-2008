/*
 * func-name: ?SelectItem@CREPropertiesList@@QAEXH@Z
 * func-address: 0x100abff0
 * callers: 0x100b1760
 * callees: 0x100a3050, 0x100a3ce0
 */

void __thiscall CREPropertiesList::SelectItem(CREPropertiesList *this, int a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  void (__stdcall *v10)(int, int, _DWORD, CREPropertiesList *, _DWORD, _DWORD); // ecx

  v3 = *((_DWORD *)this + 306);
  if ( v3 )
  {
    v4 = *((_DWORD *)this + 300);
    *((_DWORD *)this + 300) = a2;
    if ( a2 < 0 )
      *((_DWORD *)this + 300) = 0;
    if ( *((_DWORD *)this + 300) >= v3 )
      *((_DWORD *)this + 300) = v3 - 1;
    v5 = *((_DWORD *)this + 300);
    if ( v4 != v5 )
    {
      v6 = *((_DWORD *)this + 305);
      v7 = *(_DWORD *)(v6 + 4 * v5);
      v8 = v6 + 4 * v5;
      if ( *(_BYTE *)(v7 + 541) )
        return;
      *((_DWORD *)this + 301) = v5;
      CREDialog::RequestFocus(*((CREDialog **)this + 28), *(struct CREControl **)(*(_DWORD *)v8 + 512));
      CREScrollBar::ShowItem((CREPropertiesList *)((char *)this + 564), *((_DWORD *)this + 300));
    }
    v9 = *((_DWORD *)this + 28);
    v10 = *(void (__stdcall **)(int, int, _DWORD, CREPropertiesList *, _DWORD, _DWORD))(v9 + 736);
    if ( v10 )
      v10(v9, 1794, *((_DWORD *)this + 34), this, 0, 0);
  }
}
