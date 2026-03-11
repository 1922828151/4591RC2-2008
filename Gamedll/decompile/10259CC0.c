/*
 * func-name: ?CheckMousePos@CChatMessageUI@@IAEXXZ_0
 * func-address: 0x10259cc0
 * callers: 0x1000eea3
 * callees: none
 */

void __thiscall CChatMessageUI::CheckMousePos(CChatMessageUI *this)
{
  GUISystem *v2; // eax
  POINT pt; // [esp+4h] [ebp-18h] BYREF
  struct tagRECT rc; // [esp+Ch] [ebp-10h] BYREF

  v2 = (GUISystem *)GUISystem::Instance(&pt);
  GUISystem::GetLogicMousePos(v2);
  SetRect(
    &rc,
    *((_DWORD *)this + 173),
    *((_DWORD *)this + 174),
    *((_DWORD *)this + 173) + *((_DWORD *)this + 175),
    *((_DWORD *)this + 174) + *((_DWORD *)this + 176));
  if ( PtInRect(&rc, pt) && *(_BYTE *)(CDlgMgr::Instance() + 128) )
  {
    *((_BYTE *)this + 62) = 1;
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 969) + 136))(*((_DWORD *)this + 969), 1);
  }
  else
  {
    *((_BYTE *)this + 62) = 0;
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 969) + 136))(*((_DWORD *)this + 969), 0);
  }
}
