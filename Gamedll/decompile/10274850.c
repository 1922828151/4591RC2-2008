/*
 * func-name: ?SetLeftTop@CHallMapUI@@QAEXJJ@Z_0
 * func-address: 0x10274850
 * callers: 0x100123fa
 * callees: none
 */

void __thiscall CHallMapUI::SetLeftTop(CHallMapUI *this, int a2, int a3)
{
  struct tagRECT rc; // [esp+4h] [ebp-10h] BYREF

  if ( *((_DWORD *)this + 971) != 1 )
  {
    rc = *(struct tagRECT *)(*((_DWORD *)this + 968) + 592);
    OffsetRect(&rc, a2 - rc.left, a3 - rc.top);
    CHotZonePic::SetDrawRect(*((CHotZonePic **)this + 968), &rc);
  }
}
