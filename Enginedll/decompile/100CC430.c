/*
 * func-name: ?AddCheckBox@CREPropertiesList@@QAEJPB_WH_NPAX@Z
 * func-address: 0x100cc430
 * callers: none
 * callees: 0x1006c5d0, 0x100ab130, 0x100b3480, 0x100cbba0, 0x101a2534
 */

int __thiscall CREPropertiesList::AddCheckBox(struct CREDialog **this, LPCWSTR lpString2, int a3, int a4, void *a5)
{
  char *v6; // esi
  CRECheckBox *v8; // eax
  struct CREControl *v9; // eax
  int v10; // eax
  int v11; // esi

  v6 = (char *)operator new(0x220u);
  if ( !v6 )
    return -2147024882;
  lstrcpyW((LPWSTR)v6, lpString2);
  *((_DWORD *)v6 + 130) = a5;
  SetRect((LPRECT)(v6 + 524), 0, 0, 0, 0);
  v6[540] = 0;
  v6[541] = 0;
  v8 = (CRECheckBox *)operator new(0x354u);
  if ( v8 )
    v9 = CRECheckBox::CRECheckBox(v8, this[28]);
  else
    v9 = 0;
  *((_DWORD *)v6 + 128) = v9;
  CREDialog::InitControl(this[28], v9);
  *(_DWORD *)(*((_DWORD *)v6 + 128) + 136) = a3;
  (*(void (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)v6 + 128) + 208))(*((_DWORD *)v6 + 128), a4, 0);
  *(_BYTE *)(*((_DWORD *)v6 + 128) + 93) = 0;
  v10 = sub_1006C5D0((int)(this + 305), (int)this[306] + 1);
  if ( v10 < 0 )
    return v10;
  *((_DWORD *)this[305] + (_DWORD)this[306]) = v6;
  this[306] = (struct CREDialog *)((char *)this[306] + 1);
  v11 = 0;
  CREScrollBar::SetTrackRange((CREScrollBar *)(this + 141), 0, (int)this[306]);
  return v11;
}
