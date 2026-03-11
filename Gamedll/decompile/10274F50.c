/*
 * func-name: ?Tick@CHallMapUI@@UAEXM@Z_0
 * func-address: 0x10274f50
 * callers: 0x1000c54a
 * callees: 0x100142d1, 0x10019d03, 0x1001aa46, 0x102c9ea8
 */

void __thiscall CHallMapUI::Tick(CHallMapUI *this, float a2)
{
  int v3; // eax
  int v4; // eax
  double v5; // st7
  _DWORD *v6; // eax
  int v7; // ebp
  int v8; // ecx
  int v9; // edi
  int v10; // ebx
  CDlgMgr *v11; // eax
  struct CTYDialog *Dialog; // eax
  CMiniWorldMapUI *v13; // eax
  int v14; // [esp+Ch] [ebp-24h]
  float v15; // [esp+1Ch] [ebp-14h]
  float v16; // [esp+1Ch] [ebp-14h]
  int v17; // [esp+24h] [ebp-Ch]

  v3 = Input::Instance(1);
  Input::SetMaskMouse(v3);
  v4 = Input::Instance(v14);
  v15 = (float)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 80))(v4);
  v5 = v15;
  v16 = fabs(v15);
  if ( v16 > 1.0 )
  {
    if ( v5 <= 0.0 )
      CHallMapUI::ZoomOut(this);
    else
      CHallMapUI::ZoomIn(this);
  }
  v6 = (_DWORD *)*((_DWORD *)this + 968);
  v7 = v6[148];
  v8 = v6[149];
  v9 = v6[150];
  v10 = v6[151];
  v17 = v8;
  if ( *((_DWORD *)this + 972) != v7
    || *((_DWORD *)this + 973) != v8
    || *((_DWORD *)this + 974) != v9
    || *((_DWORD *)this + 975) != v10 )
  {
    *((_DWORD *)this + 972) = v7;
    *((_DWORD *)this + 973) = v8;
    *((_DWORD *)this + 974) = v9;
    *((_DWORD *)this + 975) = v10;
    v11 = (CDlgMgr *)CDlgMgr::Instance();
    Dialog = CDlgMgr::GetDialog(v11);
    v13 = (CMiniWorldMapUI *)_RTDynamicCast(
                               Dialog,
                               0,
                               &CTYDialog `RTTI Type Descriptor',
                               &CMiniWorldMapUI `RTTI Type Descriptor');
    if ( v13 )
      CMiniWorldMapUI::SetRange(v13, v7, v17, v9 - v7, v10 - v17);
  }
  CTYDialog::Tick(this, a2);
}
