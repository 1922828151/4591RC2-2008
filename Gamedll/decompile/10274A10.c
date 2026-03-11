/*
 * func-name: ?ZoomIn@CHallMapUI@@QAEXXZ_0
 * func-address: 0x10274a10
 * callers: 0x100142d1
 * callees: 0x1001aa46, 0x102c9ea8, 0x102c9fe0
 */

void __thiscall CHallMapUI::ZoomIn(CHallMapUI *this, int a2)
{
  int v3; // eax
  int v4; // ebx
  int PicWidth; // eax
  CHotZonePic *v6; // ecx
  int PicHeight; // eax
  CHotZonePic *v8; // ecx
  LONG right; // eax
  LONG bottom; // ecx
  CDlgMgr *v11; // eax
  struct CTYDialog *Dialog; // eax
  CMiniWorldMapUI *v13; // eax
  int v14; // [esp+8h] [ebp-18h]
  struct tagRECT rc; // [esp+10h] [ebp-10h] BYREF
  int retaddr; // [esp+20h] [ebp+0h]

  v3 = *((_DWORD *)this + 971);
  if ( v3 != 5 )
  {
    *((_DWORD *)this + 971) = v3 + 1;
    rc = *(struct tagRECT *)(*((_DWORD *)this + 968) + 592);
    v14 = (int)((double)(rc.right - rc.left) * 0.800000011920929);
    v4 = (int)(0.800000011920929 * (double)(rc.bottom - rc.top));
    SetRect(
      &rc,
      (rc.right + rc.left) / 2 - v14 / 2,
      (rc.bottom + rc.top) / 2 - v4 / 2,
      v14 / 2 + (rc.right + rc.left) / 2,
      v4 / 2 + (rc.bottom + rc.top) / 2);
    if ( rc.left < 0 )
    {
      rc.right -= rc.left;
      rc.left = 0;
    }
    if ( retaddr > CHotZonePic::GetPicWidth(*((CHotZonePic **)this + 968)) )
    {
      PicWidth = CHotZonePic::GetPicWidth(*((CHotZonePic **)this + 968));
      v6 = (CHotZonePic *)*((_DWORD *)this + 968);
      rc.right += PicWidth - retaddr;
      retaddr = CHotZonePic::GetPicWidth(v6);
    }
    if ( rc.bottom < 0 )
    {
      a2 -= rc.bottom;
      rc.bottom = 0;
    }
    if ( a2 > CHotZonePic::GetPicHeight(*((CHotZonePic **)this + 968)) )
    {
      PicHeight = CHotZonePic::GetPicHeight(*((CHotZonePic **)this + 968));
      v8 = (CHotZonePic *)*((_DWORD *)this + 968);
      rc.bottom += PicHeight - a2;
      CHotZonePic::GetPicHeight(v8);
    }
    CHotZonePic::SetDrawRect(*((CHotZonePic **)this + 968), (struct tagRECT *)&rc.right);
    right = rc.right;
    bottom = rc.bottom;
    *((_DWORD *)this + 972) = rc.top;
    *((_DWORD *)this + 973) = right;
    *((_DWORD *)this + 974) = bottom;
    *((_DWORD *)this + 975) = retaddr;
    v11 = (CDlgMgr *)CDlgMgr::Instance();
    Dialog = CDlgMgr::GetDialog(v11);
    v13 = (CMiniWorldMapUI *)_RTDynamicCast(Dialog, 20, 0, &CTYDialog `RTTI Type Descriptor');
    if ( v13 )
      CMiniWorldMapUI::SetRange(v13, rc.left, rc.top, v14, v4);
  }
}
