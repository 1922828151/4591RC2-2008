/*
 * func-name: ?ZoomOut@CHallMapUI@@QAEXXZ_0
 * func-address: 0x10274be0
 * callers: 0x10019d03
 * callees: 0x1001aa46, 0x102c9ea8, 0x102c9fe0
 */

void __thiscall CHallMapUI::ZoomOut(CHallMapUI *this, int a2)
{
  int v3; // eax
  int v4; // eax
  bool v5; // zf
  struct tagRECT *v6; // eax
  double v7; // st7
  double v8; // st7
  double v9; // st7
  int v10; // ebp
  LONG right; // eax
  LONG bottom; // ecx
  CDlgMgr *v13; // eax
  struct CTYDialog *Dialog; // eax
  CMiniWorldMapUI *v15; // eax
  int v16; // ebp
  int PicWidth; // eax
  CHotZonePic *v18; // ecx
  int PicHeight; // eax
  CHotZonePic *v20; // ecx
  LONG v21; // eax
  LONG v22; // ecx
  CDlgMgr *v23; // eax
  struct CTYDialog *v24; // eax
  CMiniWorldMapUI *v25; // eax
  float v26; // [esp+8h] [ebp-18h]
  int v27; // [esp+8h] [ebp-18h]
  int v28; // [esp+8h] [ebp-18h]
  float v29; // [esp+Ch] [ebp-14h]
  struct tagRECT rc; // [esp+10h] [ebp-10h] BYREF
  int retaddr; // [esp+20h] [ebp+0h]

  v3 = *((_DWORD *)this + 971);
  if ( v3 != 1 )
  {
    v4 = v3 - 1;
    *((_DWORD *)this + 971) = v4;
    v5 = v4 == 1;
    v6 = (struct tagRECT *)*((_DWORD *)this + 968);
    if ( v5 )
    {
      v7 = (double)*((int *)this + 176);
      rc.left = v6[37].left;
      v26 = v7;
      rc.top = v6[37].top;
      v8 = (double)*((int *)this + 175);
      rc.right = v6[37].right;
      v29 = v8;
      v9 = v26;
      rc.bottom = v6[37].bottom;
      v10 = (int)(1401.0 / v26 * v29);
      v27 = 1401;
      if ( v10 > 2048 )
      {
        v10 = 2048;
        v27 = (int)(v9 * (2048.0 / v29));
      }
      SetRect(
        &rc,
        (rc.right + rc.left) / 2 - v10 / 2,
        (rc.top + rc.bottom) / 2 - v27 / 2,
        v10 / 2 + (rc.right + rc.left) / 2,
        v27 / 2 + (rc.top + rc.bottom) / 2);
      if ( rc.left < 0 )
        OffsetRect(&rc, -rc.left, 0);
      if ( rc.right > 2048 )
        OffsetRect(&rc, 2048 - rc.right, 0);
      if ( rc.top < 0 )
        OffsetRect(&rc, 0, -rc.top);
      if ( rc.bottom > 1401 )
        OffsetRect(&rc, 0, 1401 - rc.bottom);
      CHotZonePic::SetDrawRect(*((CHotZonePic **)this + 968), &rc);
      right = rc.right;
      bottom = rc.bottom;
      *((_DWORD *)this + 972) = rc.top;
      *((_DWORD *)this + 973) = right;
      *((_DWORD *)this + 974) = bottom;
      *((_DWORD *)this + 975) = retaddr;
      v13 = (CDlgMgr *)CDlgMgr::Instance();
      Dialog = CDlgMgr::GetDialog(v13);
      v15 = (CMiniWorldMapUI *)_RTDynamicCast(Dialog, 20, 0, &CTYDialog `RTTI Type Descriptor');
      if ( v15 )
        CMiniWorldMapUI::SetRange(v15, rc.left, rc.top, v10, v27);
    }
    else
    {
      rc = v6[37];
      v28 = (int)((double)(rc.right - rc.left) * 1.25);
      v16 = (int)(1.25 * (double)(rc.bottom - rc.top));
      SetRect(
        &rc,
        (rc.right + rc.left) / 2 - v28 / 2,
        (rc.top + rc.bottom) / 2 - v16 / 2,
        v28 / 2 + (rc.right + rc.left) / 2,
        v16 / 2 + (rc.top + rc.bottom) / 2);
      if ( rc.left < 0 )
      {
        rc.right -= rc.left;
        rc.left = 0;
      }
      if ( retaddr > CHotZonePic::GetPicWidth(*((CHotZonePic **)this + 968)) )
      {
        PicWidth = CHotZonePic::GetPicWidth(*((CHotZonePic **)this + 968));
        v18 = (CHotZonePic *)*((_DWORD *)this + 968);
        rc.right += PicWidth - retaddr;
        retaddr = CHotZonePic::GetPicWidth(v18);
      }
      if ( rc.bottom < 0 )
      {
        a2 -= rc.bottom;
        rc.bottom = 0;
      }
      if ( a2 > CHotZonePic::GetPicHeight(*((CHotZonePic **)this + 968)) )
      {
        PicHeight = CHotZonePic::GetPicHeight(*((CHotZonePic **)this + 968));
        v20 = (CHotZonePic *)*((_DWORD *)this + 968);
        rc.bottom += PicHeight - a2;
        CHotZonePic::GetPicHeight(v20);
      }
      CHotZonePic::SetDrawRect(*((CHotZonePic **)this + 968), (struct tagRECT *)&rc.right);
      v21 = rc.right;
      v22 = rc.bottom;
      *((_DWORD *)this + 972) = rc.top;
      *((_DWORD *)this + 973) = v21;
      *((_DWORD *)this + 974) = v22;
      *((_DWORD *)this + 975) = retaddr;
      v23 = (CDlgMgr *)CDlgMgr::Instance();
      v24 = CDlgMgr::GetDialog(v23);
      v25 = (CMiniWorldMapUI *)_RTDynamicCast(v24, 20, 0, &CTYDialog `RTTI Type Descriptor');
      if ( v25 )
        CMiniWorldMapUI::SetRange(v25, rc.left, rc.top, v28, v16);
    }
  }
}
