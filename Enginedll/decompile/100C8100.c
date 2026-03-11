/*
 * func-name: ?AddStatic@CREPropertiesList@@QAEJPB_WH0PAX@Z
 * func-address: 0x100c8100
 * callers: none
 * callees: 0x1006c5d0, 0x100ab130, 0x100b3480, 0x100c7520, 0x101a2534
 */

int __thiscall CREPropertiesList::AddStatic(
        struct CREDialog **this,
        LPCWSTR lpString2,
        int a3,
        const wchar_t *a4,
        void *a5)
{
  char *v6; // esi
  CREStatic *v8; // eax
  struct CREControl *v9; // eax
  int v10; // eax
  float *v11; // eax
  int v12; // eax
  int v13; // esi
  float lpString2a; // [esp+2Ch] [ebp+4h]

  v6 = (char *)operator new(0x220u);
  if ( !v6 )
    return -2147024882;
  lstrcpyW((LPWSTR)v6, lpString2);
  *((_DWORD *)v6 + 130) = a5;
  SetRect((LPRECT)(v6 + 524), 0, 0, 0, 0);
  v6[540] = 0;
  v6[541] = 0;
  v8 = (CREStatic *)operator new(0x2B8u);
  if ( v8 )
    v9 = CREStatic::CREStatic(v8, this[28]);
  else
    v9 = 0;
  *((_DWORD *)v6 + 128) = v9;
  CREDialog::InitControl(this[28], v9);
  *(_DWORD *)(*((_DWORD *)v6 + 128) + 136) = a3;
  v10 = *((_DWORD *)v6 + 128);
  if ( a4 )
    std::wstring::operator=(v10 + 532, a4);
  else
    std::wstring::clear(v10 + 532);
  *(_DWORD *)(**(_DWORD **)(*((_DWORD *)v6 + 128) + 120) + 8) = 4;
  lpString2a = 0.003921568859368563 * 0.0;
  *(_DWORD *)(**(_DWORD **)(*((_DWORD *)v6 + 128) + 120) + 116) = -3618616;
  v11 = **(float ***)(*((_DWORD *)v6 + 128) + 120);
  v11[45] = lpString2a;
  v11 += 45;
  v11[1] = lpString2a;
  v11[2] = lpString2a;
  v11[3] = 1.0;
  *(_BYTE *)(*((_DWORD *)v6 + 128) + 93) = 0;
  v12 = sub_1006C5D0((int)(this + 305), (int)this[306] + 1);
  if ( v12 < 0 )
    return v12;
  *((_DWORD *)this[305] + (_DWORD)this[306]) = v6;
  this[306] = (struct CREDialog *)((char *)this[306] + 1);
  v13 = 0;
  CREScrollBar::SetTrackRange((CREScrollBar *)(this + 141), 0, (int)this[306]);
  return v13;
}
