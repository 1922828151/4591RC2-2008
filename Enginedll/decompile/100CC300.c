/*
 * func-name: ?AddComboBox@CREPropertiesList@@QAEJPB_WHPAX@Z
 * func-address: 0x100cc300
 * callers: none
 * callees: 0x1006c5d0, 0x100ab130, 0x100b3480, 0x100cbcc0, 0x101a2534
 */

int __thiscall CREPropertiesList::AddComboBox(CREPropertiesList *this, LPCWSTR lpString2, int a3, void *a4)
{
  char *v5; // esi
  CREComboBox *v7; // eax
  CREComboBox *v8; // eax
  int v9; // eax
  int v10; // esi

  v5 = (char *)operator new(0x220u);
  if ( !v5 )
    return -2147024882;
  lstrcpyW((LPWSTR)v5, lpString2);
  *((_DWORD *)v5 + 130) = a4;
  SetRect((LPRECT)(v5 + 524), 0, 0, 0, 0);
  v5[540] = 0;
  v5[541] = 0;
  v7 = (CREComboBox *)operator new(0x6A4u);
  if ( v7 )
    v8 = CREComboBox::CREComboBox(v7, *((struct CREDialog **)this + 28));
  else
    v8 = 0;
  *((_DWORD *)v5 + 128) = v8;
  *((_DWORD *)v8 + 34) = a3;
  CREDialog::InitControl(*((CREDialog **)this + 28), *((struct CREControl **)v5 + 128));
  *(_BYTE *)(*((_DWORD *)v5 + 128) + 93) = 0;
  v9 = sub_1006C5D0((int)this + 1220, *((_DWORD *)this + 306) + 1);
  if ( v9 < 0 )
    return v9;
  *(_DWORD *)(*((_DWORD *)this + 305) + 4 * (*((_DWORD *)this + 306))++) = v5;
  v10 = 0;
  CREScrollBar::SetTrackRange((CREPropertiesList *)((char *)this + 564), 0, *((_DWORD *)this + 306));
  return v10;
}
