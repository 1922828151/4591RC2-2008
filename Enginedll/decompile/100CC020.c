/*
 * func-name: ?AddButton@CREPropertiesList@@QAEJPB_WHPAX0@Z
 * func-address: 0x100cc020
 * callers: none
 * callees: 0x1006c5d0, 0x100ab130, 0x100b3480, 0x100cb5e0, 0x101a2534
 */

int __thiscall CREPropertiesList::AddButton(
        CREPropertiesList *this,
        LPCWSTR lpString2,
        int a3,
        void *a4,
        const wchar_t *a5)
{
  char *v6; // esi
  CREButton *v8; // eax
  CREButton *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // esi

  v6 = (char *)operator new(0x220u);
  if ( !v6 )
    return -2147024882;
  lstrcpyW((LPWSTR)v6, lpString2);
  *((_DWORD *)v6 + 130) = a4;
  SetRect((LPRECT)(v6 + 524), 0, 0, 0, 0);
  v6[540] = 0;
  v6[541] = 0;
  v8 = (CREButton *)operator new(0x330u);
  if ( v8 )
    v9 = CREButton::CREButton(v8, *((struct CREDialog **)this + 28));
  else
    v9 = 0;
  *((_DWORD *)v6 + 128) = v9;
  *((_DWORD *)v9 + 34) = a3;
  CREDialog::InitControl(*((CREDialog **)this + 28), *((struct CREControl **)v6 + 128));
  v10 = *((_DWORD *)v6 + 128);
  if ( a5 )
    std::wstring::operator=(v10 + 532, a5);
  else
    std::wstring::clear(v10 + 532);
  *(_BYTE *)(*((_DWORD *)v6 + 128) + 93) = 0;
  v11 = sub_1006C5D0((int)this + 1220, *((_DWORD *)this + 306) + 1);
  if ( v11 < 0 )
    return v11;
  *(_DWORD *)(*((_DWORD *)this + 305) + 4 * (*((_DWORD *)this + 306))++) = v6;
  v12 = 0;
  CREScrollBar::SetTrackRange((CREPropertiesList *)((char *)this + 564), 0, *((_DWORD *)this + 306));
  return v12;
}
