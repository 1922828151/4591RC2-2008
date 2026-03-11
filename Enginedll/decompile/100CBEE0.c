/*
 * func-name: ?AddItem@CREPropertiesList@@QAEJPB_WPAX@Z
 * func-address: 0x100cbee0
 * callers: none
 * callees: 0x1006c5d0, 0x100ab130, 0x100b3480, 0x100c84a0, 0x101a2534
 */

int __thiscall CREPropertiesList::AddItem(struct CREDialog **this, LPCWSTR lpString2, void *a3)
{
  char *v4; // esi
  CREEditBox *v6; // eax
  struct CREControl *v7; // eax
  _DWORD *v8; // ecx
  void (*v9)(void); // eax
  int v10; // eax
  int v11; // esi

  v4 = (char *)operator new(0x220u);
  if ( !v4 )
    return -2147024882;
  lstrcpyW((LPWSTR)v4, lpString2);
  *((_DWORD *)v4 + 130) = a3;
  SetRect((LPRECT)(v4 + 524), 0, 0, 0, 0);
  v4[540] = 0;
  v4[541] = 0;
  v6 = (CREEditBox *)operator new(0x318u);
  if ( v6 )
    v7 = CREEditBox::CREEditBox(v6, this[28]);
  else
    v7 = 0;
  *((_DWORD *)v4 + 128) = v7;
  CREDialog::InitControl(this[28], v7);
  v8 = (_DWORD *)*((_DWORD *)v4 + 128);
  v9 = *(void (**)(void))(*v8 + 164);
  v8[139] = 0;
  v9();
  *(_BYTE *)(*((_DWORD *)v4 + 128) + 93) = 0;
  v10 = sub_1006C5D0((int)(this + 305), (int)this[306] + 1);
  if ( v10 < 0 )
    return v10;
  *((_DWORD *)this[305] + (_DWORD)this[306]) = v4;
  this[306] = (struct CREDialog *)((char *)this[306] + 1);
  v11 = 0;
  CREScrollBar::SetTrackRange((CREScrollBar *)(this + 141), 0, (int)this[306]);
  return v11;
}
