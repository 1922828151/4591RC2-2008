/*
 * func-name: sub_102772B0
 * func-address: 0x102772b0
 * callers: 0x10013eb2
 * callees: 0x102c9fe0
 */

int __thiscall sub_102772B0(int this, struct IDirect3DDevice9 *a2, int xRight)
{
  double v4; // st6
  double v5; // st7
  int v6; // ecx
  int v7; // ebp
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // ebp
  struct tagRECT rc; // [esp+44h] [ebp-10h] BYREF
  _UNKNOWN *retaddr; // [esp+54h] [ebp+0h] BYREF
  float v16; // [esp+68h] [ebp+14h]
  float v17; // [esp+68h] [ebp+14h]
  float v18; // [esp+6Ch] [ebp+18h]
  int v19; // [esp+6Ch] [ebp+18h]

  CPictureLabel::Render((CPictureLabel *)this, a2, *(float *)&xRight);
  v16 = (float)(*(_DWORD *)(this + 808) - *(_DWORD *)(this + 800));
  v18 = (float)(*(_DWORD *)(this + 172) - *(_DWORD *)(this + 164));
  v4 = v16;
  v5 = v18;
  v6 = *(_DWORD *)(this + 176) - *(_DWORD *)(this + 168);
  v19 = (int)((double)*(int *)(this + 1044) / v16 * v18);
  *(float *)&rc.bottom = (float)(*(_DWORD *)(this + 812) - *(_DWORD *)(this + 804));
  v17 = (float)v6;
  v7 = (int)((double)*(int *)(this + 1048) / *(float *)&rc.bottom * v17);
  v8 = (int)(v5 * ((double)*(int *)(this + 1036) / v4)) - v19 / 2;
  v9 = (int)(v17 * ((double)*(int *)(this + 1040) / *(float *)&rc.bottom)) - v7 / 2;
  if ( v8 < 0 )
    v8 = 0;
  v10 = *(_DWORD *)(this + 172) - *(_DWORD *)(this + 164);
  if ( v19 + v8 > v10 )
    v8 = v10 - v19;
  if ( v9 < 0 )
    v9 = 0;
  v11 = *(_DWORD *)(this + 176) - *(_DWORD *)(this + 168);
  if ( v9 + v7 > v11 )
    v9 = v11 - v7;
  v12 = v9 + v7;
  SetRect((LPRECT)&retaddr, v8, v9, v8 + 2, v12);
  OffsetRect((LPRECT)&retaddr, *(_DWORD *)(this + 164), *(_DWORD *)(this + 168));
  CREDialog::DrawRect(*(CREDialog **)(this + 112), (struct tagRECT *)&retaddr, 0x8CFFFFFF, 1.0);
  SetRect((LPRECT)&rc.bottom, v8, v9, LODWORD(v17) + v8, v9 + 2);
  OffsetRect((LPRECT)&rc.bottom, *(_DWORD *)(this + 164), *(_DWORD *)(this + 168));
  CREDialog::DrawRect(*(CREDialog **)(this + 112), (struct tagRECT *)&rc.bottom, 0x8CFFFFFF, 1.0);
  SetRect(&rc, xRight - 2, v9, xRight, v12);
  OffsetRect(&rc, *(_DWORD *)(this + 164), *(_DWORD *)(this + 168));
  CREDialog::DrawRect(*(CREDialog **)(this + 112), &rc, 0x8CFFFFFF, 1.0);
  SetRect(&rc, v8, v12 - 2, xRight, v12);
  OffsetRect(&rc, *(_DWORD *)(this + 164), *(_DWORD *)(this + 168));
  return CREDialog::DrawRect(*(CREDialog **)(this + 112), &rc, 0x8CFFFFFF, 1.0);
}
