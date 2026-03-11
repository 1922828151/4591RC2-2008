/*
 * func-name: ?AddItem@CREPropertiesList@@QAEJPB_WHPAX0@Z
 * func-address: 0x100cc180
 * callers: none
 * callees: 0x1006c5d0, 0x100a56d0, 0x100ab130, 0x100ac120, 0x100b3480, 0x100c84a0, 0x101a2534
 */

int __thiscall CREPropertiesList::AddItem(struct CREDialog **this, LPCWSTR lpString2, int a3, void *a4, wchar_t *a5)
{
  char *v6; // esi
  CREEditBox *v8; // eax
  CREEditBox *v9; // eax
  _DWORD *v10; // ecx
  void (*v11)(void); // eax
  int *v12; // edi
  int v13; // eax
  int v14; // esi

  v6 = (char *)operator new(0x220u);
  if ( !v6 )
    return -2147024882;
  lstrcpyW((LPWSTR)v6, lpString2);
  *((_DWORD *)v6 + 130) = a4;
  SetRect((LPRECT)(v6 + 524), 0, 0, 0, 0);
  v6[540] = 0;
  v6[541] = 0;
  v8 = (CREEditBox *)operator new(0x318u);
  if ( v8 )
    v9 = CREEditBox::CREEditBox(v8, this[28]);
  else
    v9 = 0;
  *((_DWORD *)v6 + 128) = v9;
  *((_DWORD *)v9 + 34) = a3;
  CREDialog::InitControl(this[28], *((struct CREControl **)v6 + 128));
  v10 = (_DWORD *)*((_DWORD *)v6 + 128);
  v11 = *(void (**)(void))(*v10 + 164);
  v10[139] = 0;
  v11();
  v12 = (int *)*((_DWORD *)v6 + 128);
  CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)(v12 + 133), a5);
  CREEditBox::PlaceCaret((CREEditBox *)v12, v12[135]);
  v12[189] = v12[187];
  *(_BYTE *)(*((_DWORD *)v6 + 128) + 93) = 0;
  v13 = sub_1006C5D0((int)(this + 305), (int)this[306] + 1);
  if ( v13 < 0 )
    return v13;
  *((_DWORD *)this[305] + (_DWORD)this[306]) = v6;
  this[306] = (struct CREDialog *)((char *)this[306] + 1);
  v14 = 0;
  CREScrollBar::SetTrackRange((CREScrollBar *)(this + 141), 0, (int)this[306]);
  return v14;
}
