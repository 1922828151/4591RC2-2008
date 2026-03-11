/*
 * func-name: ?AddSlider@CREPropertiesList@@QAEJPB_WHHHHPAX@Z
 * func-address: 0x100c7fa0
 * callers: none
 * callees: 0x1006a920, 0x1006c5d0, 0x100aac90, 0x100ab130, 0x100b3480, 0x100c7850, 0x101a2534
 */

int __thiscall CREPropertiesList::AddSlider(
        struct CREDialog **this,
        LPCWSTR lpString2,
        int a3,
        int a4,
        int a5,
        int a6,
        void *a7)
{
  char *v8; // esi
  CRESlider *v10; // eax
  struct CREControl *v11; // eax
  int v12; // eax
  int v13; // esi

  v8 = (char *)operator new(0x220u);
  if ( !v8 )
    return -2147024882;
  lstrcpyW((LPWSTR)v8, lpString2);
  *((_DWORD *)v8 + 130) = a7;
  SetRect((LPRECT)(v8 + 524), 0, 0, 0, 0);
  v8[540] = 0;
  v8[541] = 0;
  v10 = (CRESlider *)operator new(0x27Cu);
  if ( v10 )
    v11 = CRESlider::CRESlider(v10, this[28]);
  else
    v11 = 0;
  *((_DWORD *)v8 + 128) = v11;
  CREDialog::InitControl(this[28], v11);
  *(_DWORD *)(*((_DWORD *)v8 + 128) + 136) = a3;
  CRESlider::SetRange(*((CRESlider **)v8 + 128), a4, a5);
  CRESlider::SetValue(*((CRESlider **)v8 + 128), a6);
  *(_BYTE *)(*((_DWORD *)v8 + 128) + 93) = 0;
  v12 = sub_1006C5D0((int)(this + 305), (int)this[306] + 1);
  if ( v12 < 0 )
    return v12;
  *((_DWORD *)this[305] + (_DWORD)this[306]) = v8;
  this[306] = (struct CREDialog *)((char *)this[306] + 1);
  v13 = 0;
  CREScrollBar::SetTrackRange((CREScrollBar *)(this + 141), 0, (int)this[306]);
  return v13;
}
