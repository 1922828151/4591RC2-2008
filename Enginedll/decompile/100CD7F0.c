/*
 * func-name: ?AddTabPage@CRETabPages@@UAEXPAUREPage@@H@Z
 * func-address: 0x100cd7f0
 * callers: none
 * callees: 0x100cbe90, 0x100cd200, 0x100d0360, 0x101a2534
 */

void __thiscall CRETabPages::AddTabPage(CRETabPages *this, wchar_t *a2, struct CREab *a3)
{
  CREDialog *v4; // ecx
  struct CREab *v5; // ebx
  struct CREab *v6; // edi
  void *v7; // eax

  *((_BYTE *)a2 + 524) = 0;
  v4 = (CREDialog *)*((_DWORD *)this + 28);
  if ( v4 )
  {
    v5 = a3;
    CREDialog::AddTabControl(
      v4,
      dword_10281558,
      a2,
      *((_DWORD *)this + 136) + *((_DWORD *)this + 24),
      *((_DWORD *)this + 25),
      (int)a3,
      30,
      &a3);
    v6 = a3;
  }
  else
  {
    v7 = operator new(0x2CCu);
    if ( v7 )
      v6 = (struct CREab *)sub_100CBE90((int)v7, 0);
    else
      v6 = 0;
    *((_DWORD *)v6 + 34) = dword_10281558;
    std::wstring::operator=((char *)v6 + 532, a2);
    (*(void (__thiscall **)(struct CREab *, int, _DWORD))(*(_DWORD *)v6 + 156))(
      v6,
      *((_DWORD *)this + 136) + *((_DWORD *)this + 24),
      *((_DWORD *)this + 25));
    v5 = a3;
    (*(void (__thiscall **)(struct CREab *, struct CREab *, int))(*(_DWORD *)v6 + 160))(v6, a3, 30);
  }
  ++dword_10281558;
  *((_DWORD *)v6 + 174) = this;
  *((_DWORD *)this + 136) += (char *)v5 + *((_DWORD *)this + 138);
  *((_DWORD *)a2 + 132) = v6;
  sub_100D0360(a2);
}
