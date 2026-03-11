/*
 * func-name: ?AddTabPage@CRETabPages@@UAEXPB_WH@Z
 * func-address: 0x100cd620
 * callers: none
 * callees: 0x100ab960, 0x100cbe90, 0x100cd200, 0x100d0360, 0x101a2534
 */

void __thiscall CRETabPages::AddTabPage(CRETabPages *this, LPCWSTR lpString2, int a3)
{
  CREDialog *v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // ebp
  struct CREab *v9; // edi
  struct CREab *v10; // eax
  char *v11; // ecx
  struct CREab *v12; // [esp+10h] [ebp-224h] BYREF
  WCHAR String1[256]; // [esp+14h] [ebp-220h] BYREF
  void *Block; // [esp+214h] [ebp-20h]
  int v15; // [esp+218h] [ebp-1Ch]
  int v16; // [esp+21Ch] [ebp-18h]
  char v17; // [esp+220h] [ebp-14h]
  struct CREab *v18; // [esp+224h] [ebp-10h]
  int v19; // [esp+230h] [ebp-4h]

  Block = 0;
  v15 = 0;
  v16 = 0;
  v19 = 0;
  lstrcpyW(String1, lpString2);
  v17 = 0;
  CRETabPages::RePosPrevPages(this);
  v4 = (CREDialog *)*((_DWORD *)this + 28);
  if ( v4 )
  {
    v5 = *((_DWORD *)this + 134);
    v6 = *((_DWORD *)this + 24);
    if ( v5 )
    {
      v7 = *(_DWORD *)(532 * v5 + *((_DWORD *)this + 133) - 532 + 528);
      v6 = *(_DWORD *)(v7 + 104) + *(_DWORD *)(v7 + 96) + 8;
    }
    v8 = a3;
    CREDialog::AddTabControl(
      v4,
      dword_10281558,
      lpString2,
      v6,
      *((_DWORD *)this + 27) + *((_DWORD *)this + 25) - 32,
      a3,
      32,
      &v12);
    v9 = v12;
  }
  else
  {
    v10 = (struct CREab *)operator new(0x2CCu);
    v12 = v10;
    LOBYTE(v19) = 1;
    if ( v10 )
      v9 = (struct CREab *)sub_100CBE90((int)v10, 0);
    else
      v9 = 0;
    LOBYTE(v19) = 0;
    *((_DWORD *)v9 + 34) = dword_10281558;
    v11 = (char *)v9 + 532;
    if ( lpString2 )
      std::wstring::operator=(v11, lpString2);
    else
      std::wstring::clear(v11);
    (*(void (__thiscall **)(struct CREab *, int, int))(*(_DWORD *)v9 + 156))(
      v9,
      *((_DWORD *)this + 24) + *((_DWORD *)this + 136),
      *((_DWORD *)this + 25) + 10);
    v8 = a3;
    (*(void (__thiscall **)(struct CREab *, int, int))(*(_DWORD *)v9 + 160))(v9, a3, 31);
  }
  ++dword_10281558;
  *((_DWORD *)v9 + 174) = this;
  *((_DWORD *)this + 136) += v8 + *((_DWORD *)this + 138);
  v18 = v9;
  sub_100D0360(String1);
  *((_DWORD *)v9 + 178) = *((_DWORD *)this + 134) - 1;
  if ( Block )
    free(Block);
}
