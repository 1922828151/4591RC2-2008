/*
 * func-name: ?SetTab@CRETabPages@@UAEXHPB_WHH@Z
 * func-address: 0x100aba50
 * callers: none
 * callees: 0x100ab960
 */

void __thiscall CRETabPages::SetTab(CRETabPages *this, int a2, const wchar_t *a3, int a4, int a5)
{
  int v6; // esi
  int v7; // eax

  if ( a2 < *((_DWORD *)this + 134) )
  {
    v6 = *((_DWORD *)this + 133) + 532 * a2;
    v7 = *(_DWORD *)(v6 + 528);
    if ( a3 )
      std::wstring::operator=(v7 + 532, a3);
    else
      std::wstring::clear(v7 + 532);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v6 + 528) + 160))(*(_DWORD *)(v6 + 528), a4, a5);
    CRETabPages::RePosPrevPages(this);
  }
}
